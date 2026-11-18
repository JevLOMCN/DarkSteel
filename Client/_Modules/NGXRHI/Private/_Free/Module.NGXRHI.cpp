// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXRHI
// Functions: 34

// `dynamic_initializer_for_'CVarNGXFramesUntilFeatureDestruction'' @ 1413fdd40

void __cdecl _dynamic_initializer_for__CVarNGXFramesUntilFeatureDestruction__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 3;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXFramesUntilFeatureDestruction,L"r.NGX.FramesUntilFeatureDestruction",local_res8
             ,L"Number of frames until an unused NGX feature gets destroyed. (default=3)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXFramesUntilFeatureDestruction__);
  return;
}

// `dynamic_initializer_for_'CVarNGXLogLevel'' @ 1413fdd90

void __cdecl _dynamic_initializer_for__CVarNGXLogLevel__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXLogLevel,L"r.NGX.LogLevel",local_res8,
             L"Determines the minimal amount of logging the NGX implementation pipes into LogDLSSNGX. Can be overridden by the -NGXLogLevel= command line option\nPlease refer to the DLSS plugin documentation on other ways to change the logging level.\n0: off \n1: on (default)\n2: verbose "
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarNGXLogLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNGXRenameLogSeverities'' @ 1413fdde0

void __cdecl _dynamic_initializer_for__CVarNGXRenameLogSeverities__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXRenameLogSeverities,L"r.NGX.RenameNGXLogSeverities",local_res8,
             L"Renames \'error\' and \'warning\' in messages returned by the NGX log callback to \'e_rror\' and \'w_arning\' before passing them to the UE log system\n0: off \n1: on, for select messages during initalization (default)\n2: on, for all messages\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNGXRenameLogSeverities__);
  return;
}

// `dynamic_initializer_for_'LogDLSSNGX'' @ 1413fde30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSNGX__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGX,L"LogDLSSNGX",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSNGX__);
  return;
}

// `dynamic_initializer_for_'LogDLSSNGXRHI'' @ 1413fde70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSNGXRHI__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGXRHI,L"LogDLSSNGXRHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSNGXRHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNGXRHI'' @ 1413fdeb0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNGXRHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NGXRHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NGXRHI",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNGXRHIModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PlatformDir'' @ 1413fdf00

void __cdecl _dynamic_initializer_for__PlatformDir__(void)

{
  FString::FString(&PlatformDir,L"Win64");
  atexit(_dynamic_atexit_destructor_for__PlatformDir__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSInternalGPUMemory'' @ 1413fdf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSInternalGPUMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSInternalGPUMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DLSSInternalGPUMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSInternalGPUMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSInternalGPUMemory,*pFVar1,
               L"DLSS: Video memory","STATGROUP_DLSS","STATCAT_Advanced",L"DLSS",true,false,ST_int64
               ,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSNumFeatures'' @ 1413fdfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSNumFeatures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSNumFeatures == (FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSNumFeatures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSNumFeatures,*pFVar1,
               L"DLSS: Num DLSS features","STATGROUP_DLSS","STATCAT_Advanced",L"DLSS",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14de0e3e0

void * __thiscall FNGXRHIModule::_scalar_deleting_destructor_(FNGXRHIModule *this,uint param_1)

{
  *this = (FNGXRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DestructItems<TSharedPtr<NGXDLSSFeature,1>,int> @ 14de0e420

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<NGXDLSSFeature,1>,int>(TSharedPtr<NGXDLSSFeature,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// NGXRHI @ 14de0e460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

NGXRHI * __thiscall NGXRHI::NGXRHI(NGXRHI *this,FNGXRHICreateArguments *param_1)

{
  int *piVar1;
  int *piVar2;
  FNGXRHICreateArguments **ppFVar3;
  undefined8 *puVar4;
  TTuple<FString,bool> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ENGXBinariesSearchOrder EVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  FNGXRHICreateArguments *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FString *pFVar17;
  NGXRHI *pNVar18;
  FScriptContainerElement *pFVar19;
  IPlatformFile *pIVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  uint uVar25;
  FNGXRHICreateArguments **ppFVar26;
  undefined1 *puVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 auStackY_558 [32];
  FString local_500;
  wchar_t *local_4f0;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  ForAnyElementType local_458;
  int local_44c;
  FNGXRHICreateArguments *local_448;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  TStringView<wchar_t> local_3f0;
  wchar_t *local_3e0;
  undefined4 local_3d8;
  TStringView<wchar_t> local_3d0;
  wchar_t *local_3c0;
  undefined4 local_3b8;
  TStringView<wchar_t> local_3b0;
  wchar_t *local_3a0;
  undefined4 local_398;
  TStringView<wchar_t> local_390;
  wchar_t *local_380;
  undefined4 local_378;
  TStringView<wchar_t> local_370;
  wchar_t *local_360;
  undefined4 local_358;
  TStringView<wchar_t> local_350;
  wchar_t *local_340;
  undefined4 local_338;
  NVSDK_NGX_Application_Identifier local_330;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  NVSDK_NGX_Application_Identifier local_2b0;
  FString local_290;
  ForAnyElementType local_280;
  int local_274;
  ForAnyElementType local_270;
  int local_264;
  undefined1 local_260 [8];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_258;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_1b8;
  TStringView<wchar_t> local_118;
  wchar_t *local_108;
  undefined4 local_100;
  FScriptContainerElement *local_f8;
  int local_f0;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  FScriptContainerElement *local_c8;
  int local_c0;
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  undefined4 local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined4 local_70;
  FScriptContainerElement *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pTVar6 = &this->NGXDLLSearchPaths;
  local_100 = 0x13;
  this->_padding_ = (longlong)&___7NGXRHI__6B_;
  piVar1 = &(this->NGXDLLSearchPaths).ArrayNum;
  piVar2 = &(this->NGXDLLSearchPaths).ArrayMax;
  this->DynamicRHI = param_1->DynamicRHI;
  (this->NGXQueryFeature).NGXDriverRequirements.MinDriverVersionMajor = 0x1d6;
  (this->NGXQueryFeature).NGXDriverRequirements.MinDriverVersionMinor = 0;
  (this->NGXQueryFeature).CapabilityParameters = (NVSDK_NGX_Parameter *)0x0;
  (this->NGXQueryFeature).bIsDlssSRAvailable = false;
  (this->NGXQueryFeature).bIsDlssRRAvailable = false;
  (this->NGXQueryFeature).NGXDriverRequirements.DriverUpdateRequired = false;
  (this->NGXQueryFeature).NGXDLSSSRDriverRequirements.DriverUpdateRequired = false;
  lVar24 = 3;
  (this->NGXQueryFeature).NGXDLSSRRDriverRequirements.DriverUpdateRequired = false;
  (this->AllocatedDLSSFeatures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedDLSSFeatures).ArrayNum = 0;
  (this->AllocatedDLSSFeatures).ArrayMax = 0;
  (this->NGXQueryFeature).NGXDLSSSRDriverRequirements.MinDriverVersionMajor = 0x1d6;
  (this->NGXQueryFeature).NGXDLSSSRDriverRequirements.MinDriverVersionMinor = 0;
  (this->NGXQueryFeature).NGXDLSSRRDriverRequirements.MinDriverVersionMajor = 0x1d6;
  (this->NGXQueryFeature).NGXDLSSRRDriverRequirements.MinDriverVersionMinor = 0;
  (this->NGXQueryFeature).NGXInitResult = NVSDK_NGX_Result_Fail;
  (this->NGXQueryFeature).NGXDLSSSRInitResult = NVSDK_NGX_Result_Fail;
  (this->NGXQueryFeature).NGXDLSSRRInitResult = NVSDK_NGX_Result_Fail;
  this->FrameCounter = 1;
  *(undefined8 *)&this->DLSSSRGenericBinaryInfo = 0;
  *(undefined8 *)&(this->DLSSSRGenericBinaryInfo).field_0x8 = 0;
  (this->DLSSSRGenericBinaryInfo).field_0x10 = 0;
  *(undefined8 *)&this->DLSSSRCustomBinaryInfo = 0;
  *(undefined8 *)&(this->DLSSSRCustomBinaryInfo).field_0x8 = 0;
  (this->DLSSSRCustomBinaryInfo).field_0x10 = 0;
  *(undefined8 *)&this->DLSSRRGenericBinaryInfo = 0;
  *(undefined8 *)&(this->DLSSRRGenericBinaryInfo).field_0x8 = 0;
  (this->DLSSRRGenericBinaryInfo).field_0x10 = 0;
  *(undefined8 *)&this->DLSSRRCustomBinaryInfo = 0;
  *(undefined8 *)&(this->DLSSRRCustomBinaryInfo).field_0x8 = 0;
  (this->DLSSRRCustomBinaryInfo).field_0x10 = 0;
  (this->NGXDLLSearchPathRawStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NGXDLLSearchPathRawStrings).ArrayNum = 0;
  (this->NGXDLLSearchPathRawStrings).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->FeatureInfo).PathListInfo.Path = (wchar_t **)0x0;
  *(undefined8 *)&(this->FeatureInfo).PathListInfo.Length = 0;
  local_108 = L"Binaries/ThirdParty";
  (this->FeatureInfo).InternalData = (NVSDK_NGX_FeatureCommonInfo_Internal *)0x0;
  (this->FeatureInfo).LoggingInfo.LoggingCallback =
       (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0;
  (this->FeatureInfo).LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_OFF;
  (this->FeatureInfo).LoggingInfo.DisableOtherLoggingSinks = false;
  *(undefined3 *)&(this->FeatureInfo).LoggingInfo.field_0xd = 0;
  local_118.DataPtr = (wchar_t *)(param_1->PluginBaseDir).Data.AllocatorInstance.Data;
  iVar29 = (param_1->PluginBaseDir).Data.ArrayNum;
  local_118.Size = iVar29 + -1;
  if (iVar29 == 0) {
    local_118.Size = 0;
  }
  local_f8 = PlatformDir.Data.AllocatorInstance.Data;
  local_f0 = PlatformDir.Data.ArrayNum + -1;
  if (PlatformDir.Data.ArrayNum == 0) {
    local_f0 = 0;
  }
  local_448 = param_1;
  FPaths::CombineInternal(&local_478,&local_118,3);
  local_88.DataPtr = (wchar_t *)(param_1->PluginBaseDir).Data.AllocatorInstance.Data;
  iVar29 = (param_1->PluginBaseDir).Data.ArrayNum;
  local_78 = L"Binaries/ThirdParty";
  local_70 = 0x13;
  local_88.Size = iVar29 + -1;
  if (iVar29 == 0) {
    local_88.Size = 0;
  }
  local_68 = PlatformDir.Data.AllocatorInstance.Data;
  local_50 = 0xd;
  local_60 = PlatformDir.Data.ArrayNum + -1;
  if (PlatformDir.Data.ArrayNum == 0) {
    local_60 = 0;
  }
  local_58 = L"/Development/";
  FPaths::CombineInternal(&local_430,&local_88,4);
  iVar29 = local_478.Data.ArrayNum;
  FVar22.Data = local_478.Data.AllocatorInstance.Data;
  local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.Data.ArrayNum = local_478.Data.ArrayNum;
  if (local_478.Data.ArrayNum == 0) {
    local_500.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_478.Data.ArrayNum,0,(ForAnyElementType *)&local_500,local_478.Data.ArrayNum
               ,&local_500.Data.ArrayMax);
    memcpy(local_500.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar29 * 2);
  }
  pFVar17 = FPaths::ProjectDir(&local_2d0);
  local_d0 = 0x1e;
  local_d8 = L"Binaries/ThirdParty/NVIDIA/NGX";
  local_e8.DataPtr = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  iVar29 = (pFVar17->Data).ArrayNum;
  local_e8.Size = iVar29 + -1;
  if (iVar29 == 0) {
    local_e8.Size = 0;
  }
  local_c8 = PlatformDir.Data.AllocatorInstance.Data;
  iVar29 = 0;
  local_c0 = PlatformDir.Data.ArrayNum + -1;
  if (PlatformDir.Data.ArrayNum == 0) {
    local_c0 = iVar29;
  }
  FPaths::CombineInternal(&local_4e8,&local_e8,3);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  pFVar17 = FPaths::LaunchDir(&local_2c0);
  local_a8 = L"Binaries/ThirdParty/NVIDIA/NGX";
  local_a0 = 0x1e;
  local_b8.DataPtr = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  iVar14 = (pFVar17->Data).ArrayNum;
  local_b8.Size = iVar14 + -1;
  if (iVar14 == 0) {
    local_b8.Size = iVar29;
  }
  local_98 = PlatformDir.Data.AllocatorInstance.Data;
  local_90 = PlatformDir.Data.ArrayNum + -1;
  if (PlatformDir.Data.ArrayNum == 0) {
    local_90 = iVar29;
  }
  FPaths::CombineInternal(&local_440,&local_b8,3);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  EVar8 = local_448->NGXBinariesSearchOrder;
  if (EVar8 == CustomThenGeneric) {
LAB_14de0ead0:
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    FVar22.Data = local_4e8.Data.AllocatorInstance.Data;
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar29 = local_4e8.Data.ArrayNum;
    local_290.Data.ArrayNum = iVar29;
    if (iVar29 == 0) {
      local_290.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar29,0,(ForAnyElementType *)&local_290,iVar29,&local_290.Data.ArrayMax);
      memcpy(local_290.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar29 * 2);
    }
    FVar22.Data = local_440.Data.AllocatorInstance.Data;
    local_280.Data = (FScriptContainerElement *)0x0;
    if (local_440.Data.ArrayNum == 0) {
      local_274 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_440.Data.ArrayNum,0,&local_280,local_440.Data.ArrayNum,&local_274);
      memcpy(local_280.Data,FVar22.Data,(longlong)local_440.Data.ArrayNum * 2);
    }
    FVar22.Data = local_478.Data.AllocatorInstance.Data;
    local_270.Data = (FScriptContainerElement *)0x0;
    if (local_478.Data.ArrayNum == 0) {
      local_264 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_478.Data.ArrayNum,0,&local_270,local_478.Data.ArrayNum,&local_264);
      memcpy(local_270.Data,FVar22.Data,(longlong)local_478.Data.ArrayNum * 2);
    }
    iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,3,&pTVar6->AllocatorInstance,piVar1,piVar2);
    ConstructItems<FString,FString,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar29 * 0x10,&local_290,3);
    puVar27 = local_260;
    do {
      puVar4 = (undefined8 *)(puVar27 + -0x10);
      puVar27 = puVar27 + -0x10;
      lVar24 = lVar24 + -1;
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
    } while (lVar24 != 0);
  }
  else if (EVar8 == ForceGeneric) {
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    FVar22.Data = local_478.Data.AllocatorInstance.Data;
    local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_478.Data.ArrayNum == 0) {
      local_488.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_478.Data.ArrayNum,0,(ForAnyElementType *)&local_488,
                 local_478.Data.ArrayNum,&local_488.Data.ArrayMax);
      memcpy(local_488.Data.AllocatorInstance.Data,FVar22.Data,(longlong)local_478.Data.ArrayNum * 2
            );
    }
    iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,1,&pTVar6->AllocatorInstance,piVar1,piVar2);
    ConstructItems<FString,FString,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar29 * 0x10,&local_488,1);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  else if (EVar8 == ForceCustom) {
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    FVar22.Data = local_4e8.Data.AllocatorInstance.Data;
    local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar29 = local_4e8.Data.ArrayNum;
    local_468.Data.ArrayNum = iVar29;
    if (iVar29 == 0) {
      local_468.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar29,0,(ForAnyElementType *)&local_468,iVar29,&local_468.Data.ArrayMax);
      memcpy(local_468.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar29 * 2);
    }
    FVar22.Data = local_440.Data.AllocatorInstance.Data;
    local_458.Data = (FScriptContainerElement *)0x0;
    if (local_440.Data.ArrayNum == 0) {
      local_44c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_440.Data.ArrayNum,0,&local_458,local_440.Data.ArrayNum,&local_44c);
      memcpy(local_458.Data,FVar22.Data,(longlong)local_440.Data.ArrayNum * 2);
    }
    iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,2,&pTVar6->AllocatorInstance,piVar1,piVar2);
    ConstructItems<FString,FString,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar29 * 0x10,&local_468,2);
    ppFVar26 = &local_448;
    lVar24 = 2;
    do {
      ppFVar3 = ppFVar26 + -2;
      ppFVar26 = ppFVar26 + -2;
      lVar24 = lVar24 + -1;
      if (*ppFVar3 != (FNGXRHICreateArguments *)0x0) {
        FMemory::Free(*ppFVar3);
      }
    } while (lVar24 != 0);
  }
  else {
    if (EVar8 != ForceDevelopmentGeneric) goto LAB_14de0ead0;
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    iVar14 = local_430.Data.ArrayNum;
    FVar22.Data = local_430.Data.AllocatorInstance.Data;
    local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_430.Data.ArrayNum == 0) {
      local_498.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_430.Data.ArrayNum,0,(ForAnyElementType *)&local_498,
                 local_430.Data.ArrayNum,&local_498.Data.ArrayMax);
      memcpy(local_498.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar14 * 2);
    }
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,1,&pTVar6->AllocatorInstance,piVar1,piVar2);
    ConstructItems<FString,FString,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar14 * 0x10,&local_498,1);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    iVar14 = local_430.Data.ArrayNum + -1;
    if (local_430.Data.ArrayNum == 0) {
      iVar14 = iVar29;
    }
    ::FString::AssignRange(&local_500,(wchar_t *)local_430.Data.AllocatorInstance.Data,iVar14);
  }
  uVar30 = 0;
  uVar32 = uVar30;
  if (0 < (this->NGXDLLSearchPaths).ArrayNum) {
    do {
      uVar31 = (uint)uVar32;
      uVar25 = ~uVar31 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      pFVar19 = (FScriptContainerElement *)
                FPaths::ConvertRelativePathToFull
                          (&local_310,(FString *)((pTVar6->AllocatorInstance).Data + uVar30));
      uVar15 = 0;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      pFVar28 = (pTVar6->AllocatorInstance).Data + uVar30;
      if (pFVar28 != pFVar19) {
        if (*(void **)pFVar28 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar28);
        }
        *(undefined8 *)pFVar28 = *(undefined8 *)pFVar19;
        *(undefined8 *)pFVar19 = 0;
        *(int *)(pFVar28 + 8) = *(int *)(pFVar19 + 8);
        *(int *)(pFVar28 + 0xc) = *(int *)(pFVar19 + 0xc);
        *(undefined8 *)(pFVar19 + 8) = 0;
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      uVar15 = 0;
      uVar16 = uVar15;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar16 = uVar25;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      pFVar19 = (pTVar6->AllocatorInstance).Data + uVar30;
      pFVar17 = ::FString::FString(&local_300,"//");
      iVar29 = (pFVar17->Data).ArrayNum;
      if (iVar29 == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        uVar15 = iVar29 - 1;
      }
      bVar12 = ::FString::StartsWith((FString *)pFVar19,pwVar21,uVar15,IgnoreCase);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        ::FString::FString(&local_420,"/");
        pFVar17 = ::FString::RightChop((FString *)pFVar19,&local_2e0,1);
        pFVar17 = FPaths::RemoveDuplicateSlashes(&local_2f0,pFVar17);
        iVar14 = (pFVar17->Data).ArrayNum;
        iVar29 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar29 = 0;
        }
        ::FString::AppendChars(&local_420,(wchar_t *)(pFVar17->Data).AllocatorInstance.Data,iVar29);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
        iVar29 = local_420.Data.ArrayNum + -1;
        if (local_420.Data.ArrayNum == 0) {
          iVar29 = 0;
        }
        ::FString::AssignRange
                  ((FString *)pFVar19,(wchar_t *)local_420.Data.AllocatorInstance.Data,iVar29);
        if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data.AllocatorInstance.Data);
        }
      }
      else {
        FPaths::RemoveDuplicateSlashes((FString *)pFVar19);
      }
      uVar15 = 0;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      FPaths::MakePlatformFilename((FString *)((pTVar6->AllocatorInstance).Data + uVar30));
      uVar15 = 0;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      pFVar19 = (pTVar6->AllocatorInstance).Data;
      if (*(int *)(pFVar19 + uVar30 + 8) == 0) {
        local_4f0 = L"";
      }
      else {
        local_4f0 = *(wchar_t **)(pFVar19 + uVar30);
      }
      pTVar7 = &this->NGXDLLSearchPathRawStrings;
      pFVar19 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_4f0) &&
          ((FScriptContainerElement *)&local_4f0 <
           pFVar19 + (longlong)(this->NGXDLLSearchPathRawStrings).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      iVar29 = (this->NGXDLLSearchPathRawStrings).ArrayNum;
      if (iVar29 == (this->NGXDLLSearchPathRawStrings).ArrayMax) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar7->AllocatorInstance,
                            &(this->NGXDLLSearchPathRawStrings).ArrayMax);
      }
      pFVar19 = (pTVar7->AllocatorInstance).Data;
      (this->NGXDLLSearchPathRawStrings).ArrayNum = iVar29 + 1;
      *(wchar_t **)(pFVar19 + (longlong)iVar29 * 8) = local_4f0;
      pIVar20 = IPlatformFile::GetPlatformPhysical();
      pcVar9 = *(code **)((longlong)*pIVar20 + 0x78);
      uVar15 = 0;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      pFVar19 = (pTVar6->AllocatorInstance).Data;
      local_3d8 = 0xe;
      local_3f0.DataPtr = *(wchar_t **)(pFVar19 + uVar30);
      iVar29 = *(int *)(pFVar19 + uVar30 + 8);
      local_3f0.Size = iVar29 + -1;
      if (iVar29 == 0) {
        local_3f0.Size = 0;
      }
      local_3e0 = L"nvngx_dlss.dll";
      FPaths::CombineInternal(&local_410,&local_3f0,2);
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_410.Data.ArrayNum != 0) {
        FVar22.Data = local_410.Data.AllocatorInstance.Data;
      }
      (*pcVar9)(pIVar20,FVar22.Data);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogDLSSNGXRHI._0_1_) {
        uVar15 = 0;
        if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
          uVar15 = uVar25;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          pNVar18 = (NGXRHI *)(*pcVar9)();
          return pNVar18;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      }
      pIVar20 = IPlatformFile::GetPlatformPhysical();
      pcVar9 = *(code **)((longlong)*pIVar20 + 0x78);
      uVar15 = 0;
      if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pNVar18 = (NGXRHI *)(*pcVar9)();
        return pNVar18;
      }
      pFVar19 = (pTVar6->AllocatorInstance).Data;
      local_3b8 = 0xf;
      local_3d0.DataPtr = *(wchar_t **)(pFVar19 + uVar30);
      iVar29 = *(int *)(pFVar19 + uVar30 + 8);
      local_3d0.Size = iVar29 + -1;
      if (iVar29 == 0) {
        local_3d0.Size = 0;
      }
      local_3c0 = L"nvngx_dlssd.dll";
      FPaths::CombineInternal(&local_400,&local_3d0,2);
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_400.Data.ArrayNum != 0) {
        FVar22.Data = local_400.Data.AllocatorInstance.Data;
      }
      (*pcVar9)(pIVar20,FVar22.Data);
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogDLSSNGXRHI._0_1_) {
        uVar15 = 0;
        if ((int)uVar31 < (this->NGXDLLSearchPaths).ArrayNum) {
          uVar15 = uVar25;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          pNVar18 = (NGXRHI *)(*pcVar9)();
          return pNVar18;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      }
      uVar30 = uVar30 + 0x10;
      uVar32 = (ulonglong)(uVar31 + 1);
    } while ((int)(uVar31 + 1) < (this->NGXDLLSearchPaths).ArrayNum);
  }
  pwVar21 = L"";
  local_3b0.DataPtr = (wchar_t *)local_500.Data.AllocatorInstance.Data;
  local_3a0 = L"nvngx_dlss.dll";
  local_398 = 0xe;
  iVar29 = 0;
  local_3b0.Size = local_500.Data.ArrayNum + -1;
  if (local_500.Data.ArrayNum == 0) {
    local_3b0.Size = iVar29;
  }
  FPaths::CombineInternal(&local_4d8,&local_3b0,2);
  pTVar5 = &this->DLSSSRGenericBinaryInfo;
  if (pTVar5 != (TTuple<FString,bool> *)&local_4d8) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    *(FScriptContainerElement **)pTVar5 = local_4d8.Data.AllocatorInstance.Data;
    *(int *)&(this->DLSSSRGenericBinaryInfo).field_0x8 = local_4d8.Data.ArrayNum;
    *(int *)&(this->DLSSSRGenericBinaryInfo).field_0xc = local_4d8.Data.ArrayMax;
    local_4d8.Data.ArrayNum = 0;
    local_4d8.Data.ArrayMax = 0;
    local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  pIVar20 = IPlatformFile::GetPlatformPhysical();
  if (*(int *)&(this->DLSSSRGenericBinaryInfo).field_0x8 == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = *(wchar_t **)pTVar5;
  }
  uVar13 = (**(code **)((longlong)*pIVar20 + 0x78))(pIVar20,pwVar23);
  local_380 = L"nvngx_dlss.dll";
  (this->DLSSSRGenericBinaryInfo).field_0x10 = uVar13;
  local_390.DataPtr = (wchar_t *)local_4e8.Data.AllocatorInstance.Data;
  local_378 = 0xe;
  local_390.Size = local_4e8.Data.ArrayNum + -1;
  if (local_4e8.Data.ArrayNum == 0) {
    local_390.Size = iVar29;
  }
  FPaths::CombineInternal(&local_4c8,&local_390,2);
  pTVar5 = &this->DLSSSRCustomBinaryInfo;
  if (pTVar5 != (TTuple<FString,bool> *)&local_4c8) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    *(FScriptContainerElement **)pTVar5 = local_4c8.Data.AllocatorInstance.Data;
    *(int *)&(this->DLSSSRCustomBinaryInfo).field_0x8 = local_4c8.Data.ArrayNum;
    *(int *)&(this->DLSSSRCustomBinaryInfo).field_0xc = local_4c8.Data.ArrayMax;
    local_4c8.Data.ArrayNum = 0;
    local_4c8.Data.ArrayMax = 0;
    local_4c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  pIVar20 = IPlatformFile::GetPlatformPhysical();
  if (*(int *)&(this->DLSSSRCustomBinaryInfo).field_0x8 == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = *(wchar_t **)&this->DLSSSRCustomBinaryInfo;
  }
  uVar13 = (**(code **)((longlong)*pIVar20 + 0x78))(pIVar20,pwVar23);
  local_358 = 0xf;
  (this->DLSSSRCustomBinaryInfo).field_0x10 = uVar13;
  local_370.DataPtr = (wchar_t *)local_500.Data.AllocatorInstance.Data;
  local_360 = L"nvngx_dlssd.dll";
  local_370.Size = local_500.Data.ArrayNum + -1;
  if (local_500.Data.ArrayNum == 0) {
    local_370.Size = iVar29;
  }
  FPaths::CombineInternal(&local_4b8,&local_370,2);
  pTVar5 = &this->DLSSRRGenericBinaryInfo;
  if (pTVar5 != (TTuple<FString,bool> *)&local_4b8) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    *(FScriptContainerElement **)pTVar5 = local_4b8.Data.AllocatorInstance.Data;
    *(int *)&(this->DLSSRRGenericBinaryInfo).field_0x8 = local_4b8.Data.ArrayNum;
    *(int *)&(this->DLSSRRGenericBinaryInfo).field_0xc = local_4b8.Data.ArrayMax;
    local_4b8.Data.ArrayNum = 0;
    local_4b8.Data.ArrayMax = 0;
    local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  pIVar20 = IPlatformFile::GetPlatformPhysical();
  if (*(int *)&(this->DLSSRRGenericBinaryInfo).field_0x8 == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = *(wchar_t **)&this->DLSSRRGenericBinaryInfo;
  }
  uVar13 = (**(code **)((longlong)*pIVar20 + 0x78))(pIVar20,pwVar23);
  local_340 = L"nvngx_dlssd.dll";
  (this->DLSSRRGenericBinaryInfo).field_0x10 = uVar13;
  local_350.DataPtr = (wchar_t *)local_4e8.Data.AllocatorInstance.Data;
  local_338 = 0xf;
  local_350.Size = local_4e8.Data.ArrayNum + -1;
  if (local_4e8.Data.ArrayNum == 0) {
    local_350.Size = iVar29;
  }
  FPaths::CombineInternal(&local_4a8,&local_350,2);
  pTVar5 = &this->DLSSRRCustomBinaryInfo;
  if (pTVar5 != (TTuple<FString,bool> *)&local_4a8) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    *(FScriptContainerElement **)pTVar5 = local_4a8.Data.AllocatorInstance.Data;
    *(int *)&(this->DLSSRRCustomBinaryInfo).field_0x8 = local_4a8.Data.ArrayNum;
    *(int *)&(this->DLSSRRCustomBinaryInfo).field_0xc = local_4a8.Data.ArrayMax;
    local_4a8.Data.ArrayNum = 0;
    local_4a8.Data.ArrayMax = 0;
    local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  pIVar20 = IPlatformFile::GetPlatformPhysical();
  if (*(int *)&(this->DLSSRRCustomBinaryInfo).field_0x8 == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = *(wchar_t **)&this->DLSSRRCustomBinaryInfo;
  }
  uVar13 = (**(code **)((longlong)*pIVar20 + 0x78))(pIVar20,pwVar23);
  (this->DLSSRRCustomBinaryInfo).field_0x10 = uVar13;
  (this->FeatureInfo).PathListInfo.Path =
       (wchar_t **)(this->NGXDLLSearchPathRawStrings).AllocatorInstance.Data;
  (this->FeatureInfo).PathListInfo.Length = (this->NGXDLLSearchPathRawStrings).ArrayNum;
  (this->FeatureInfo).LoggingInfo.LoggingCallback = NGXLogSink;
  (this->FeatureInfo).LoggingInfo.DisableOtherLoggingSinks = true;
  pTVar10 = CVarNGXLogLevel.Ref;
  bVar12 = IsInParallelGameThread();
  if (bVar12) {
LAB_14de0f6a3:
    lVar24 = 0;
  }
  else {
    bVar12 = IsInGameThread();
    lVar24 = 4;
    if (bVar12) goto LAB_14de0f6a3;
  }
  pFVar11 = local_448;
  iVar29 = *(int *)((longlong)pTVar10->ShadowedValue + lVar24);
  if (iVar29 == 0) {
    (this->FeatureInfo).LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_OFF;
  }
  else if ((iVar29 == 1) || (iVar29 != 2)) {
    (this->FeatureInfo).LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_ON;
  }
  else {
    (this->FeatureInfo).LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_VERBOSE;
  }
  if (local_448->bAllowOTAUpdate == false) {
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    goto LAB_14de0f7ee;
  }
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
  }
  if (pFVar11->ProjectIdentifier == MinValue) {
    if (pFVar11->NGXAppId == 0) {
LAB_14de0f739:
      if ((pFVar11->UnrealProjectID).Data.ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar11->UnrealProjectID).Data.AllocatorInstance.Data;
      }
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_1b8,pwVar23);
      if ((pFVar11->UnrealEngineVersion).Data.ArrayNum != 0) {
        pwVar21 = (wchar_t *)(pFVar11->UnrealEngineVersion).Data.AllocatorInstance.Data;
      }
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_258,pwVar21);
      local_330.v.ProjectDesc.ProjectId = local_1b8.Ptr;
      local_330.v.ProjectDesc.EngineVersion = local_258.Ptr;
      local_330.IdentifierType = NVSDK_NGX_Application_Identifier_Type_Project_Id;
      local_330.v.ProjectDesc.EngineType = NVSDK_NGX_ENGINE_TYPE_UNREAL;
      NVSDK_NGX_UpdateFeature(&local_330,NVSDK_NGX_Feature_SuperSampling);
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
      if ((void *)local_1b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1b8._padding_);
      }
      goto LAB_14de0f7ee;
    }
  }
  else if (pFVar11->ProjectIdentifier != ForceNGXApplicationID) goto LAB_14de0f739;
  local_2b0.v.ProjectDesc.ProjectId = (char *)(ulonglong)pFVar11->NGXAppId;
  local_2b0.IdentifierType = NVSDK_NGX_Application_Identifier_Type_Application_Id;
  NVSDK_NGX_UpdateFeature(&local_2b0,NVSDK_NGX_Feature_SuperSampling);
LAB_14de0f7ee:
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~NGXDLSSFeature @ 14de0f870

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall NGXDLSSFeature::~NGXDLSSFeature(NGXDLSSFeature *this)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  this->_padding_ = (longlong)&___7NGXDLSSFeature__6B_;
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly != false) && (bVar2 = IsInRHIThread(), !bVar2)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                               ,0x82,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    FDLSSFeatureDesc::GetDebugDescription(&this->Desc,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ~NGXRHI @ 14de0f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __thiscall NGXRHI::~NGXRHI(NGXRHI *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7NGXRHI__6B_;
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"NGXRHI::~NGXRHI",0xf,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"NGXRHI::~NGXRHI",0xf,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  pFVar1 = (this->NGXDLLSearchPathRawStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->NGXDLLSearchPaths).AllocatorInstance.Data,
             (this->NGXDLLSearchPaths).ArrayNum);
  pFVar1 = (this->NGXDLLSearchPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->DLSSRRCustomBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSRRCustomBinaryInfo);
  }
  if (*(void **)&this->DLSSRRGenericBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSRRGenericBinaryInfo);
  }
  if (*(void **)&this->DLSSSRCustomBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSSRCustomBinaryInfo);
  }
  if (*(void **)&this->DLSSSRGenericBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSSRGenericBinaryInfo);
  }
  DestructItems<TSharedPtr<NGXDLSSFeature,1>,int>
            ((TSharedPtr<NGXDLSSFeature,1> *)(this->AllocatedDLSSFeatures).AllocatorInstance.Data,
             (this->AllocatedDLSSFeatures).ArrayNum);
  pFVar1 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// `scalar_deleting_destructor' @ 14de0fc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void * __thiscall NGXRHI::_scalar_deleting_destructor_(NGXRHI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7NGXRHI__6B_;
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"NGXRHI::~NGXRHI",0xf,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"NGXRHI::~NGXRHI",0xf,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  pFVar1 = (this->NGXDLLSearchPathRawStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->NGXDLLSearchPaths).AllocatorInstance.Data,
             (this->NGXDLLSearchPaths).ArrayNum);
  pFVar1 = (this->NGXDLLSearchPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->DLSSRRCustomBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSRRCustomBinaryInfo);
  }
  if (*(void **)&this->DLSSRRGenericBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSRRGenericBinaryInfo);
  }
  if (*(void **)&this->DLSSSRCustomBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSSRCustomBinaryInfo);
  }
  if (*(void **)&this->DLSSSRGenericBinaryInfo != (void *)0x0) {
    FMemory::Free(*(void **)&this->DLSSSRGenericBinaryInfo);
  }
  DestructItems<TSharedPtr<NGXDLSSFeature,1>,int>
            ((TSharedPtr<NGXDLSSFeature,1> *)(this->AllocatedDLSSFeatures).AllocatorInstance.Data,
             (this->AllocatedDLSSFeatures).ArrayNum);
  pFVar1 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// ApplyCommonNGXParameterSettings @ 14de0fe40

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __thiscall
NGXRHI::ApplyCommonNGXParameterSettings
          (NGXRHI *this,NVSDK_NGX_Parameter *param_1,FRHIDLSSArguments *param_2)

{
  NVSDK_NGX_Parameter_SetI
            (param_1,"FreeMemOnReleaseFeature",(uint)(param_2->bReleaseMemoryOnDelete != false));
  NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",param_2->DLSSPreset);
  NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",param_2->DLSSPreset);
  NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Quality",param_2->DLSSPreset);
  NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",param_2->DLSSPreset);
  NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Performance",param_2->DLSSPreset);
  NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",param_2->DLSSPreset);
  if (((this->NGXQueryFeature).bIsDlssRRAvailable != false) && (param_2->DenoiserMode == DLSSRR)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.DLAA",param_2->DLSSRRPreset);
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",param_2->DLSSRRPreset);
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.Quality",param_2->DLSSRRPreset);
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.Balanced",param_2->DLSSRRPreset);
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.Performance",param_2->DLSSRRPreset);
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",param_2->DLSSRRPreset
              );
  }
  return;
}

// FindFreeFeature @ 14de0ffb0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

TSharedPtr<NGXDLSSFeature,1> * __thiscall
NGXRHI::FindFreeFeature
          (NGXRHI *this,TSharedPtr<NGXDLSSFeature,1> *__return_storage_ptr__,
          FRHIDLSSArguments *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  NGXDLSSFeature *pNVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  TSharedPtr<NGXDLSSFeature,1> *pTVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  TIntRect<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_58;
  TIntPoint<int>_u_0 local_50;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  uint local_38;
  uint local_34;
  ENGXDLSSDenoiserMode local_30;
  
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar7 = IsInRHIThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x278,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<NGXDLSSFeature,1> *)(*pcVar5)();
    return pTVar9;
  }
  uVar11 = 0;
  __return_storage_ptr__->Object = (NGXDLSSFeature *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar13 = uVar11;
  if (0 < (this->AllocatedDLSSFeatures).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar12 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < (this->AllocatedDLSSFeatures).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<NGXDLSSFeature,1> *)(*pcVar5)();
        return pTVar9;
      }
      lVar1 = *(longlong *)((this->AllocatedDLSSFeatures).AllocatorInstance.Data + uVar13 + 8);
      if ((lVar1 == 0) || (*(int *)(lVar1 + 8) < 2)) {
        uVar8 = 0;
        if ((int)uVar10 < (this->AllocatedDLSSFeatures).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<NGXDLSSFeature,1> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar2 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar2 + uVar13) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<NGXDLSSFeature,1> *)(*pcVar5)();
          return pTVar9;
        }
        local_68._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_68._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_58 = (param_1->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_50 = (param_1->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_48 = param_1->DLSSPreset;
        local_44 = param_1->DLSSRRPreset;
        local_40 = param_1->PerfQuality;
        local_3c = param_1->bHighResolutionMotionVectors;
        local_3b = param_1->bUseAutoExposure;
        local_3a = param_1->bEnableAlphaUpscaling;
        local_39 = param_1->bReleaseMemoryOnDelete;
        local_38 = param_1->GPUNode;
        local_34 = param_1->GPUVisibility;
        local_30 = param_1->DenoiserMode;
        bVar7 = FDLSSFeatureDesc::operator!=
                          ((FDLSSFeatureDesc *)(*(longlong *)(pFVar2 + uVar13) + 8),
                           (FDLSSFeatureDesc *)&local_68._s_0);
        if (!bVar7) {
          uVar8 = 0;
          if ((int)uVar10 < (this->AllocatedDLSSFeatures).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<NGXDLSSFeature,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar2 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data;
          pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar10 * 0x10 + 8);
          pNVar4 = *(NGXDLSSFeature **)(pFVar2 + (longlong)(int)uVar10 * 0x10);
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
          __return_storage_ptr__->Object = pNVar4;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          uVar8 = this->FrameCounter;
          if ((__return_storage_ptr__->Object == (NGXDLSSFeature *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<NGXDLSSFeature,1> *)(*pcVar5)();
            return pTVar9;
          }
          __return_storage_ptr__->Object->LastUsedFrame = uVar8;
          return __return_storage_ptr__;
        }
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar10 + 1) < (this->AllocatedDLSSFeatures).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetDLSSRRCustomBinaryInfo @ 14de10580

TTuple<FString,bool> * __thiscall
NGXRHI::GetDLSSRRCustomBinaryInfo(NGXRHI *this,TTuple<FString,bool> *__return_storage_ptr__)

{
  ::FString::FString((FString *)__return_storage_ptr__,(FString *)&this->DLSSRRCustomBinaryInfo);
  __return_storage_ptr__->field_0x10 = (this->DLSSRRCustomBinaryInfo).field_0x10;
  return __return_storage_ptr__;
}

// GetDLSSRRGenericBinaryInfo @ 14de105c0

TTuple<FString,bool> * __thiscall
NGXRHI::GetDLSSRRGenericBinaryInfo(NGXRHI *this,TTuple<FString,bool> *__return_storage_ptr__)

{
  ::FString::FString((FString *)__return_storage_ptr__,(FString *)&this->DLSSRRGenericBinaryInfo);
  __return_storage_ptr__->field_0x10 = (this->DLSSRRGenericBinaryInfo).field_0x10;
  return __return_storage_ptr__;
}

// GetDLSSSRCustomBinaryInfo @ 14de10600

TTuple<FString,bool> * __thiscall
NGXRHI::GetDLSSSRCustomBinaryInfo(NGXRHI *this,TTuple<FString,bool> *__return_storage_ptr__)

{
  ::FString::FString((FString *)__return_storage_ptr__,(FString *)&this->DLSSSRCustomBinaryInfo);
  __return_storage_ptr__->field_0x10 = (this->DLSSSRCustomBinaryInfo).field_0x10;
  return __return_storage_ptr__;
}

// GetDLSSSRGenericBinaryInfo @ 14de10640

TTuple<FString,bool> * __thiscall
NGXRHI::GetDLSSSRGenericBinaryInfo(NGXRHI *this,TTuple<FString,bool> *__return_storage_ptr__)

{
  ::FString::FString((FString *)__return_storage_ptr__,(FString *)&this->DLSSSRGenericBinaryInfo);
  __return_storage_ptr__->field_0x10 = (this->DLSSSRGenericBinaryInfo).field_0x10;
  return __return_storage_ptr__;
}

// GetNGXLogDirectory @ 14de10d70

FString * __cdecl NGXRHI::GetNGXLogDirectory(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FPaths::ProjectLogDir(&local_18);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsSafeToShutdownNGX @ 14de10de0

bool __thiscall NGXRHI::IsSafeToShutdownNGX(NGXRHI *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  IPluginManager *pIVar11;
  longlong **pplVar12;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pIVar11 = IPluginManager::Get();
  uStack_50 = 0xe;
  local_58 = L"StreamlineCore";
  local_38 = 0x507b6d48;
  uStack_34 = 1;
  uStack_30 = 0xe;
  uStack_2c = uStack_4c;
  (**(code **)((longlong)*pIVar11 + 0x70))(pIVar11,&local_68,&local_38);
  if (local_68 == (longlong *)0x0) {
    pIVar11 = IPluginManager::Get();
    uStack_40 = 10;
    local_48 = L"Streamline";
    local_28 = 0x507b6dd8;
    uStack_24 = 1;
    uStack_20 = 10;
    uStack_1c = uStack_3c;
    pplVar12 = (longlong **)(**(code **)((longlong)*pIVar11 + 0x70))(pIVar11,local_18,&local_28);
    pTVar6 = local_60;
    pTVar7 = local_60;
    if (&local_68 != pplVar12) {
      local_68 = *pplVar12;
      *pplVar12 = (longlong *)0x0;
      pTVar3 = (TReferenceControllerBase<1> *)pplVar12[1];
      if ((pTVar3 != local_60) &&
         (pplVar12[1] = (longlong *)0x0, pTVar7 = pTVar3,
         local_60 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &local_60->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          plVar5 = &local_60->_padding_;
          local_60 = pTVar3;
          (**(code **)*plVar5)(pTVar6);
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar7 = local_60;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            pTVar7 = local_60;
          }
        }
      }
    }
    local_60 = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (local_68 != (longlong *)0x0) {
      if ((local_68 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      cVar10 = (**(code **)(*local_68 + 0x48))();
      if (cVar10 != '\0') {
        bVar8 = false;
        goto LAB_14de10f78;
      }
    }
    bVar8 = true;
  }
  else {
    if ((local_68 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    cVar10 = (**(code **)(*local_68 + 0x48))();
    bVar8 = cVar10 == '\0';
  }
LAB_14de10f78:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  return bVar8;
}

// NGXLogSink @ 14de10fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl NGXLogSink(char *param_1,NVSDK_NGX_Logging_Level param_2,NVSDK_NGX_Feature param_3)

{
  uint uVar1;
  bool bVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  FString local_178;
  FString local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (param_1 == (char *)0x0) {
    local_48 = 0;
    local_50 = (FScriptContainerElement *)0x0;
  }
  else {
    sVar7 = strlen(param_1);
    local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_1,(int)sVar7);
    uVar1 = local_48 + 1;
    uVar11 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14de1101d;
      }
    }
    else {
LAB_14de1101d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)param_1,(int)sVar7 + 1);
  }
  pFVar8 = FString::FString(&local_168,(wchar_t *)local_50);
  FString::TrimEnd(pFVar8,&local_188);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FString::PrintfImpl(&local_178,L"Unknown(%d)");
  if ((int)param_3 < 0xe) {
    if (param_3 == NVSDK_NGX_Feature_RayReconstruction) {
      pwVar10 = L"DLSS-RR";
    }
    else if (param_3 == NVSDK_NGX_Feature_SuperSampling) {
      pwVar10 = L"DLSS-SR";
    }
    else if (param_3 == NVSDK_NGX_Feature_FrameGeneration) {
      pwVar10 = L"DLSS-FG";
    }
    else {
      if (param_3 != NVSDK_NGX_Feature_DeepDVC) goto LAB_14de11112;
      pwVar10 = L"DeepDVC";
    }
LAB_14de11108:
    FString::operator=(&local_178,pwVar10);
  }
  else {
    if (param_3 == NVSDK_NGX_Feature_Reserved_SDK) {
      pwVar10 = L"SDK";
      goto LAB_14de11108;
    }
    if (param_3 == NVSDK_NGX_Feature_Reserved_Core) {
      pwVar10 = L"Core";
      goto LAB_14de11108;
    }
  }
LAB_14de11112:
  iVar6 = FString::Find(&local_188,L"nvngx_dlss.dll",0xe,IgnoreCase,FromStart,-1);
  if ((iVar6 == -1) &&
     (iVar6 = FString::Find(&local_188,L"nvngx_dlssd.dll",0xf,IgnoreCase,FromStart,-1), iVar6 == -1)
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar6 = FString::Find(&local_188,L"doesn\'t exist in any of the search paths",0x28,IgnoreCase,
                        FromStart,-1);
  if ((((iVar6 == -1) || (bVar2)) &&
      (iVar6 = FString::Find(&local_188,L"warning: UWP compliant mode enabled",0x23,IgnoreCase,
                             FromStart,-1), iVar6 == -1)) &&
     (iVar6 = FString::Find(&local_188,L"error: failed to load NGXCore",0x1d,IgnoreCase,FromStart,-1
                           ), iVar6 == -1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pTVar3 = CVarNGXRenameLogSeverities.Ref;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_14de11227:
    lVar9 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    lVar9 = 4;
    if (bVar5) goto LAB_14de11227;
  }
  pTVar4 = CVarNGXRenameLogSeverities.Ref;
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar9) != 2) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), lVar9 = 4, bVar5)) {
      lVar9 = 0;
    }
    if ((*(int *)((longlong)pTVar4->ShadowedValue + lVar9) != 1) || (!bVar2)) {
      if (4 < (byte)LogDLSSNGX._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogDLSSNGX);
      }
      goto LAB_14de113b2;
    }
  }
  pFVar8 = FString::Replace(&local_188,&local_168,L"error:",L"e_rror:",IgnoreCase);
  if (&local_188 != pFVar8) {
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    local_188.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_188.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pFVar8 = FString::Replace(&local_188,&local_168,L"Warning:",L"w_arning:",IgnoreCase);
  if (&local_188 != pFVar8) {
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    local_188.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_188.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (5 < (byte)LogDLSSNGX._0_1_) {
    UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogDLSSNGX);
  }
LAB_14de113b2:
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterFeature @ 14de119e0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall NGXRHI::RegisterFeature(NGXRHI *this,TSharedPtr<NGXDLSSFeature,1> *param_1)

{
  int *piVar1;
  TSharedPtr<NGXDLSSFeature,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FString local_18;
  
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar5 = IsInRHIThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x271,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    if ((param_1->Object == (NGXDLSSFeature *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FDLSSFeatureDesc::GetDebugDescription(&param_1->Object->Desc,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = (TSharedPtr<NGXDLSSFeature,1> *)(this->AllocatedDLSSFeatures).AllocatorInstance.Data;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->AllocatedDLSSFeatures).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->AllocatedDLSSFeatures).ArrayNum;
  piVar1 = &(this->AllocatedDLSSFeatures).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->AllocatedDLSSFeatures).AllocatorInstance,piVar1);
  }
  (this->AllocatedDLSSFeatures).ArrayNum = iVar6 + 1;
  pFVar7 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(NGXDLSSFeature **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ReleaseAllocatedFeatures @ 14de11b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __thiscall NGXRHI::ReleaseAllocatedFeatures(NGXRHI *this)

{
  int *piVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures> FVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_2c8 [32];
  FName local_268 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar10 = 0;
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"NGXRHI::ReleaseAllocatedFeatures",0x20,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  uVar11 = uVar10;
  if (0 < (this->AllocatedDLSSFeatures).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (this->AllocatedDLSSFeatures).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((this->AllocatedDLSSFeatures).AllocatorInstance.Data + uVar11 + 8);
      if (((lVar2 == 0) || (*(int *)(lVar2 + 8) != 1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocatedDLSSFeatures[FeatureIndex].GetSharedReferenceCount() == 1",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                             ,0x294,
                             L"There should be no FDLSSState::DLSSFeature references elsewhere."),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar9 + 1) < (this->AllocatedDLSSFeatures).ArrayNum);
  }
  DestructItems<TSharedPtr<NGXDLSSFeature,1>,int>
            ((TSharedPtr<NGXDLSSFeature,1> *)(this->AllocatedDLSSFeatures).AllocatorInstance.Data,
             (this->AllocatedDLSSFeatures).ArrayNum);
  piVar1 = &(this->AllocatedDLSSFeatures).ArrayMax;
  (this->AllocatedDLSSFeatures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AllocatedDLSSFeatures).AllocatorInstance,0,piVar1);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar8 = StatPtr_STAT_DLSSNumFeatures;
    if (StatPtr_STAT_DLSSNumFeatures == (FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures>)0x0) {
      pFVar7 = ::FName::FName(local_268,"STAT_DLSSNumFeatures");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSNumFeatures,*pFVar7,
                         L"DLSS: Num DLSS features","STATGROUP_DLSS","STATCAT_Advanced",L"DLSS",true
                         ,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar8;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>
              (FVar3,Set,(longlong)(this->AllocatedDLSSFeatures).ArrayNum,false);
  }
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"NGXRHI::ReleaseAllocatedFeatures",0x20,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// TickPoolElements @ 14de11f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall NGXRHI::TickPoolElements(NGXRHI *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  NVSDK_NGX_Parameter *pNVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  int iVar13;
  NVSDK_NGX_Result NVar14;
  ulonglong uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures> FVar17;
  FThreadSafeStaticStat<FStat_STAT_DLSSInternalGPUMemory> FVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  uint local_res8;
  uint uStackX_c;
  code *local_res10;
  ulong64 local_res18;
  FName local_res20;
  FName local_58 [3];
  
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar12 = IsInRHIThread(), !bVar12)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                          ,0x2b6,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar11 = CVarNGXFramesUntilFeatureDestruction.Ref;
  bVar12 = IsInParallelGameThread();
  uVar23 = 0;
  if (bVar12) {
LAB_14de11fb0:
    uVar15 = uVar23;
  }
  else {
    bVar12 = IsInGameThread();
    uVar15 = 4;
    if (bVar12) goto LAB_14de11fb0;
  }
  uVar3 = *(uint *)((longlong)pTVar11->ShadowedValue + uVar15);
  uVar15 = uVar23;
  if (0 < (this->AllocatedDLSSFeatures).ArrayNum) {
    do {
      uVar24 = (uint)uVar15;
      uVar25 = 0;
      uVar21 = uVar25;
      if ((int)uVar24 < (this->AllocatedDLSSFeatures).ArrayNum) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar22 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data + uVar23;
      if (*(longlong *)(pFVar22 + 8) != 0) {
        uVar25 = *(uint *)(*(longlong *)(pFVar22 + 8) + 8);
      }
      if ((*(longlong *)pFVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((uVar25 == 1) && (uVar3 < this->FrameCounter - *(int *)(*(longlong *)pFVar22 + 0x58))) {
        iVar13 = (this->AllocatedDLSSFeatures).ArrayNum;
        uVar21 = iVar13 - 1;
        uVar25 = 0;
        if ((int)uVar21 < iVar13) {
          uVar25 = ~uVar21 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data;
        lVar19 = (longlong)(this->AllocatedDLSSFeatures).ArrayNum;
        lVar20 = *(longlong *)pFVar22;
        lVar9 = *(longlong *)(pFVar22 + 8);
        pFVar2 = pFVar4 + lVar19 * 0x10 + -0x10;
        lVar10 = *(longlong *)(pFVar2 + 8);
        *(longlong *)pFVar22 = *(longlong *)pFVar2;
        *(longlong *)(pFVar22 + 8) = lVar10;
        pFVar4 = pFVar4 + lVar19 * 0x10 + -0x10;
        *(longlong *)pFVar4 = lVar20;
        *(longlong *)(pFVar4 + 8) = lVar9;
        if (((this->AllocatedDLSSFeatures).ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar20 = (longlong)(this->AllocatedDLSSFeatures).ArrayNum;
        pFVar22 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data;
        pTVar5 = *(TReferenceControllerBase<1> **)(pFVar22 + lVar20 * 0x10 + -8);
        *(undefined8 *)(pFVar22 + lVar20 * 0x10 + -8) = 0;
        *(undefined8 *)(pFVar22 + lVar20 * 0x10 + -0x10) = 0;
        iVar13 = (this->AllocatedDLSSFeatures).ArrayNum;
        pFVar22 = (this->AllocatedDLSSFeatures).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar22 + -8));
        iVar13 = (this->AllocatedDLSSFeatures).ArrayNum - iVar13;
        if (iVar13 != 0) {
          memmove(pFVar22 + -0x10,pFVar22,(longlong)iVar13 << 4);
        }
        piVar1 = &(this->AllocatedDLSSFeatures).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->AllocatedDLSSFeatures).AllocatorInstance,
                   (this->AllocatedDLSSFeatures).ArrayNum,&(this->AllocatedDLSSFeatures).ArrayMax);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      }
      else {
        uVar15 = (ulonglong)(uVar24 + 1);
        uVar23 = uVar23 + 0x10;
      }
    } while ((int)uVar15 < (this->AllocatedDLSSFeatures).ArrayNum);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar17 = StatPtr_STAT_DLSSNumFeatures;
    if (StatPtr_STAT_DLSSNumFeatures == (FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures>)0x0) {
      pFVar16 = ::FName::FName(&local_res20,"STAT_DLSSNumFeatures");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_DLSSNumFeatures>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSNumFeatures,*pFVar16,
                          L"DLSS: Num DLSS features","STATGROUP_DLSS","STATCAT_Advanced",L"DLSS",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar17;
    local_res8 = (uint)FVar6.ComparisonIndex.Value;
    uStackX_c = FVar6.Number;
    FThreadStats::AddMessage<__int64>
              (FVar6,Set,(longlong)(this->AllocatedDLSSFeatures).ArrayNum,false);
  }
  pNVar7 = (this->NGXQueryFeature).CapabilityParameters;
  if (pNVar7 != (NVSDK_NGX_Parameter *)0x0) {
    local_res18 = 0;
    local_res8 = 0;
    local_res10 = (code *)0x0;
    NVSDK_NGX_Parameter_GetVoidPointer(pNVar7,"DLSSGetStatsCallback",&local_res10);
    if (local_res10 == (code *)0x0) {
      NVar14 = NVSDK_NGX_Result_FAIL_OutOfDate;
    }
    else {
      NVar14 = (*local_res10)(pNVar7);
      if ((NVar14 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
        NVSDK_NGX_Parameter_GetULL(pNVar7,"SizeInBytes",&local_res18);
        NVSDK_NGX_Parameter_GetUI(pNVar7,"#D",&local_res8);
        NVSDK_NGX_Parameter_GetUI(pNVar7,"#E",&local_res8);
        FVar18 = StatPtr_STAT_DLSSInternalGPUMemory;
        if (StatPtr_STAT_DLSSInternalGPUMemory ==
            (FThreadSafeStaticStat<FStat_STAT_DLSSInternalGPUMemory>)0x0) {
          pFVar16 = ::FName::FName(local_58,"STAT_DLSSInternalGPUMemory");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_DLSSInternalGPUMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSInternalGPUMemory,
                              *pFVar16,L"DLSS: Video memory","STATGROUP_DLSS","STATCAT_Advanced",
                              L"DLSS",true,false,ST_int64,false,false,MCR_GPU);
        }
        FVar6 = *(FName *)FVar18;
        local_res8 = (uint)FVar6.ComparisonIndex.Value;
        uStackX_c = FVar6.Number;
        FThreadStats::AddMessage<__int64>(FVar6,Set,local_res18,false);
        goto LAB_14de12401;
      }
    }
    GetNGXResultAsString(NVar14);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(((ResultGetStats) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                        ,0x2d5,
                        L"Failed to retrieve DLSS memory statistics via NGX_DLSS_GET_STATS -> (%u %s)"
                       );
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
LAB_14de12401:
  this->FrameCounter = this->FrameCounter + 1;
  return;
}

// IMPLEMENT_MODULE_NGXRHI @ 14de12610

void __cdecl IMPLEMENT_MODULE_NGXRHI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXFramesUntilFeatureDestruction'' @ 15045ee30

void __cdecl _dynamic_atexit_destructor_for__CVarNGXFramesUntilFeatureDestruction__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNGXFramesUntilFeatureDestruction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXLogLevel'' @ 15045ee50

void __cdecl _dynamic_atexit_destructor_for__CVarNGXLogLevel__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXLogLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXRenameLogSeverities'' @ 15045ee70

void __cdecl _dynamic_atexit_destructor_for__CVarNGXRenameLogSeverities__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXRenameLogSeverities);
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSNGX'' @ 15045ee90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSNGX__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGX);
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSNGXRHI'' @ 15045eeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSNGXRHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGXRHI);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformDir'' @ 15045eed0

void __cdecl _dynamic_atexit_destructor_for__PlatformDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlatformDir.Data.AllocatorInstance.Data;
  if (PlatformDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlatformDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}


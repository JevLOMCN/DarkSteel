// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 8

// StartupModule @ 14de699b0

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

void __thiscall FStreamlineCoreModule::StartupModule(FStreamlineCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStreamlineSupport EVar4;
  bool bVar5;
  bool bVar6;
  EStreamlineFeatureSupport EVar7;
  DLSSGMode DVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  FStreamlineRHI *pFVar11;
  FStreamlineViewExtension *this_00;
  FSlateApplication *pFVar12;
  FDelegateHandle FVar13;
  AdapterInfo *pAVar14;
  undefined1 auStack_538 [32];
  FAutoRegister local_518 [8];
  FStreamlineViewExtension *local_510;
  FSharedReferencer<1> local_508 [2];
  TSharedRef<FStreamlineViewExtension,1> local_4f8;
  TRawPtrProxy<FStreamlineViewExtension> local_4e8;
  undefined8 local_4e0;
  FSharedReferencer<1> aFStack_4d8 [2];
  TSharedRef<ISceneViewExtension,1> local_4c8;
  undefined1 local_4b8 [8];
  <lambda_1> local_4b0 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_538;
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
  plVar9 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar9 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar9 + 0xc0))(plVar9), cVar3 != '\0'))
  {
    if (4 < (byte)LogStreamline._0_1_) {
      local_4a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4a8,"FStreamlineCoreModule::StartupModule",0x24,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      if ((void *)local_4a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4a8._padding_);
      }
    }
    EVar4 = GetPlatformStreamlineSupport();
    if (EVar4 == Supported) {
      EVar7 = QueryStreamlineDLSSGSupport();
      if ((EVar7 == Supported) || (EVar7 = QueryStreamlineDeepDVCSupport(), EVar7 == Supported)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      pwVar10 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar10,L"slviewextension");
      if (bVar5) {
        bVar2 = true;
      }
      pwVar10 = FCommandLine::Get();
      bVar6 = FParse::Param(pwVar10,L"slnoviewextension");
      bVar5 = false;
      if (!bVar6) {
        bVar5 = bVar2;
      }
      if (bVar5) {
        pFVar11 = GetPlatformStreamlineRHI();
        this_00 = ::operator_new(0x7b0);
        if (this_00 == (FStreamlineViewExtension *)0x0) {
          local_4e8.Object = (FStreamlineViewExtension *)0x0;
        }
        else {
          local_4e8.Object =
               FStreamlineViewExtension::FStreamlineViewExtension(this_00,local_518,pFVar11);
          if ((((local_4e8.Object != (FStreamlineViewExtension *)0x0) &&
               ((local_4e8.Object)->_padding_ != 0)) && ((local_4e8.Object)->_padding_ != 0)) &&
             ((0 < *(int *)((local_4e8.Object)->_padding_ + 8) &&
              (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InObject || !InObject->DoesSharedInstanceExist()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TSharedRef<FStreamlineViewExtension,1>::
        TSharedRef<FStreamlineViewExtension,1><FStreamlineViewExtension>(&local_4f8,&local_4e8);
        local_4c8.Object = (ISceneViewExtension *)local_4f8.Object;
        local_4c8.SharedReferenceCount.ReferenceController =
             local_4f8.SharedReferenceCount.ReferenceController;
        if (local_4f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FSceneViewExtensions::RegisterExtension(&local_4c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4c8.SharedReferenceCount.ReferenceController);
        local_510 = local_4f8.Object;
        local_508[0].ReferenceController = local_4f8.SharedReferenceCount.ReferenceController;
        if (local_4f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (&this->StreamlineViewExtension != (TSharedPtr<FStreamlineViewExtension,1> *)&local_510)
        {
          (this->StreamlineViewExtension).Object = local_4f8.Object;
          local_510 = (FStreamlineViewExtension *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->StreamlineViewExtension).SharedReferenceCount,local_508);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_508[0].ReferenceController);
      }
      else {
        local_4e0 = 0;
        aFStack_4d8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_4f8.SharedReferenceCount.ReferenceController = aFStack_4d8[0].ReferenceController;
        if (&this->StreamlineViewExtension != (TSharedPtr<FStreamlineViewExtension,1> *)&local_4e0)
        {
          (this->StreamlineViewExtension).Object = (FStreamlineViewExtension *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->StreamlineViewExtension).SharedReferenceCount,aFStack_4d8);
          local_4f8.SharedReferenceCount.ReferenceController = aFStack_4d8[0].ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f8.SharedReferenceCount.ReferenceController);
      RegisterStreamlineReflexHooks();
      bVar2 = ForceTagStreamlineBuffers();
      if ((bVar2) || (EVar7 = QueryStreamlineDLSSGSupport(), EVar7 == Supported)) {
        GetPlatformStreamlineRHI();
        if (4 < (byte)LogStreamline._0_1_) {
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"RegisterStreamlineDLSSGHooks",0x1c,Yes);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
          if ((void *)local_388._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_388._padding_);
          }
        }
        bVar2 = ForceTagStreamlineBuffers();
        if (((!bVar2) &&
            (((EVar7 = QueryStreamlineDLSSGSupport(), EVar7 != Supported ||
              (DVar8 = SLDLSSGModeFromCvar(), DVar8 == eOff)) &&
             (EVar7 = QueryStreamlineDLSSGSupport(), EVar7 != Supported)))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShouldTagStreamlineBuffers() || IsStreamlineDLSSGSupported()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                               ,0x172,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("FSlateApplication::IsInitialized()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                               ,0x175,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12 = FSlateApplication::Get();
        FVar13 = TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                 ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                                *)(*(longlong *)&pFVar12->field_0x60 + 0x98),
                               (_func___cdecl_void_SWindow_ptr_TRefCountPtr<FRHITexture>_ptr *)
                               local_4b8);
                    /* WARNING: Load size is inaccurate */
        OnBackBufferReadyToPresentHandle.ID = *FVar13.ID;
        pFVar12 = FSlateApplication::Get();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddLambda<_RegisterStreamlineDLSSGHooks_::__l28::<lambda_1>_>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pFVar12->PreShutdownEvent,local_4b0);
        if (4 < (byte)LogStreamline._0_1_) {
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"RegisterStreamlineDLSSGHooks",0x1c,Yes);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
          if ((void *)local_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_268._padding_);
          }
        }
      }
      bVar2 = ForceTagStreamlineBuffers();
      if (bVar2) {
        GetPlatformStreamlineRHI();
      }
      pFVar11 = GetPlatformStreamlineRHI();
      pAVar14 = (AdapterInfo *)(**(code **)(pFVar11->_padding_ + 0x18))(pFVar11);
      LogStreamlineFeatureSupport(9999,pAVar14);
    }
    if (4 < (byte)LogStreamline._0_1_) {
      GetPlatformStreamlineSupport();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      if (4 < (byte)LogStreamline._0_1_) {
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FStreamlineCoreModule::StartupModule",0x24,Yes);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  else if (4 < (byte)LogStreamline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
  }
  return;
}

// ShutdownModule @ 14de69f00

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

void __thiscall FStreamlineCoreModule::ShutdownModule(FStreamlineCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStreamlineSupport EVar4;
  longlong *plVar5;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  FSharedReferencer<1> FStack_260;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar5 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5), cVar3 == '\0'))
  {
    return;
  }
  if (4 < (byte)LogStreamline._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"FStreamlineCoreModule::ShutdownModule",0x25,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  local_268 = 0;
  FStack_260.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->StreamlineViewExtension != (TSharedPtr<FStreamlineViewExtension,1> *)&local_268) {
    (this->StreamlineViewExtension).Object = (FStreamlineViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StreamlineViewExtension).SharedReferenceCount,&FStack_260);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_260.ReferenceController);
  EVar4 = GetPlatformStreamlineSupport();
  if (EVar4 == Supported) {
    QueryStreamlineDLSSGSupport();
    UnregisterStreamlineReflexHooks();
  }
  if (4 < (byte)LogStreamline._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineCoreModule::ShutdownModule",0x25,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// QueryStreamlineSupport @ 14de6a0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EStreamlineSupport __thiscall
FStreamlineCoreModule::QueryStreamlineSupport(FStreamlineCoreModule *this)

{
  return GStreamlineSupport;
}

// QueryDLSSGSupport @ 14de6a0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EStreamlineFeatureSupport __thiscall
FStreamlineCoreModule::QueryDLSSGSupport(FStreamlineCoreModule *this)

{
  bool bVar1;
  char cVar2;
  Result RVar3;
  FStreamlineRHI *pFVar4;
  AdapterInfo *pAVar5;
  wchar_t *pwVar6;
  
  if (bStreamlineDLSSGSupportedInitialized) {
    return GStreamlineDLSSGSupport;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = IsRHIDeviceNVIDIA();
    if (!bVar1) {
      GStreamlineDLSSGSupport = NotSupportedIncompatibleHardware;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleHardware;
    }
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar4 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4);
      if (cVar2 != '\0') {
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        RVar3 = SLisFeatureSupported(1000,pAVar5);
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        LogStreamlineFeatureSupport(1000,pAVar5);
        GStreamlineDLSSGSupport = TranslateStreamlineResult(RVar3);
        bStreamlineDLSSGSupportedInitialized = true;
        if (GStreamlineDLSSGSupport == Supported) {
          GetDLSSGStatusFromStreamline(true);
        }
        return GStreamlineDLSSGSupport;
      }
      GStreamlineDLSSGSupport = NotSupportedIncompatibleRHI;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleRHI;
    }
  }
  GStreamlineDLSSGSupport = NotSupported;
  bStreamlineDLSSGSupportedInitialized = true;
  return NotSupported;
}

// QueryLatewarpSupport @ 14de6a0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EStreamlineFeatureSupport __thiscall
FStreamlineCoreModule::QueryLatewarpSupport(FStreamlineCoreModule *this)

{
  return NotSupported;
}

// QueryDeepDVCSupport @ 14de6a0f0

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

EStreamlineFeatureSupport __thiscall
FStreamlineCoreModule::QueryDeepDVCSupport(FStreamlineCoreModule *this)

{
  FName FVar1;
  bool bVar2;
  char cVar3;
  Result RVar4;
  EStreamlineFeatureSupport EVar5;
  FStreamlineRHI *pFVar6;
  AdapterInfo *pAVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate> FVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_c8 [32];
  FName FStack_68;
  DeepDVCState DStack_60;
  undefined1 auStack_38 [24];
  longlong lStack_20;
  uint uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (bStreamlineDeepDVCSupportedInitialized) {
    return GStreamlineDeepDVCSupport;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar2 = IsRHIDeviceNVIDIA();
    if (!bVar2) {
      GStreamlineDeepDVCSupport = NotSupportedIncompatibleHardware;
      bStreamlineDeepDVCSupportedInitialized = true;
      return NotSupportedIncompatibleHardware;
    }
    bVar2 = IsStreamlineSupported();
    if (bVar2) {
      pFVar6 = GetPlatformStreamlineRHI();
      cVar3 = (**(code **)(pFVar6->_padding_ + 0x40))(pFVar6);
      if (cVar3 == '\0') {
        GStreamlineDeepDVCSupport = NotSupportedIncompatibleRHI;
        bStreamlineDeepDVCSupportedInitialized = true;
      }
      else {
        pAVar7 = (AdapterInfo *)(**(code **)(pFVar6->_padding_ + 0x18))(pFVar6);
        RVar4 = SLisFeatureSupported(5,pAVar7);
        pAVar7 = (AdapterInfo *)(**(code **)(pFVar6->_padding_ + 0x18))(pFVar6);
        LogStreamlineFeatureSupport(5,pAVar7);
        GStreamlineDeepDVCSupport = TranslateStreamlineResult(RVar4);
        bStreamlineDeepDVCSupportedInitialized = true;
        if (((float)GStreamlineDeepDVCSupport == 0.0) &&
           (GLastDeepDVCVRAMEstimate = (float)GStreamlineDeepDVCSupport,
           EVar5 = QueryStreamlineDeepDVCSupport(), EVar5 == Supported)) {
          lStack_20 = 1;
          auStack_38._0_8_ = 0;
          auStack_38._8_4_ = sl::ViewportHandle::s_structType.data1;
          auStack_38._12_2_ = sl::ViewportHandle::s_structType.data2;
          auStack_38._14_2_ = sl::ViewportHandle::s_structType.data3;
          auStack_38[0x10] = sl::ViewportHandle::s_structType.data4[0];
          auStack_38[0x11] = sl::ViewportHandle::s_structType.data4[1];
          auStack_38[0x12] = sl::ViewportHandle::s_structType.data4[2];
          auStack_38[0x13] = sl::ViewportHandle::s_structType.data4[3];
          auStack_38[0x14] = sl::ViewportHandle::s_structType.data4[4];
          auStack_38[0x15] = sl::ViewportHandle::s_structType.data4[5];
          auStack_38[0x16] = sl::ViewportHandle::s_structType.data4[6];
          auStack_38[0x17] = sl::ViewportHandle::s_structType.data4[7];
          uStack_18 = 0;
          DStack_60._padding_ = 0;
          DStack_60._padding_._0_4_ = 0x934fd3d3;
          DStack_60._padding_._4_4_ = 0x70a7b34c;
          DStack_60._padding_._0_4_ = 0x9ff139a1;
          DStack_60._padding_._4_4_ = 0xd3914de0;
          DStack_60._padding_ = 1;
          DStack_60.estimatedVRAMUsageInBytes = 0;
          SLDeepDVCModeFromCvar();
          CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCState_&),sl::ViewportHandle_&,sl::DeepDVCState_&>
                    (5,"slDeepDVCGetState",(ViewportHandle *)auStack_38,&DStack_60);
          GLastDeepDVCVRAMEstimate = (float)DStack_60.estimatedVRAMUsageInBytes * __real_35800000;
          if (FThreadStats::bPrimaryEnable != false) {
            FVar9 = StatPtr_STAT_DeepDVCVRAMEstimate;
            if (StatPtr_STAT_DeepDVCVRAMEstimate ==
                (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)0x0) {
              pFVar8 = ::FName::FName(&FStack_68,"STAT_DeepDVCVRAMEstimate");
              FVar9 = (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeepDVCVRAMEstimate,
                                 *pFVar8,L"DeepDVC: VRAM Estimate (MiB)","STATGROUP_DeepDVC",
                                 "STATCAT_Advanced",L"DeepDVC",true,true,NumBits,false,false,
                                 MCR_Invalid);
            }
            FVar1 = *(FName *)FVar9;
            FStack_68.ComparisonIndex = FVar1.ComparisonIndex.Value;
            FStack_68.Number = FVar1.Number;
            FThreadStats::AddMessage<double>(FVar1,Set,(double)GLastDeepDVCVRAMEstimate,false);
          }
        }
      }
      return GStreamlineDeepDVCSupport;
    }
  }
  GStreamlineDeepDVCSupport = NotSupported;
  bStreamlineDeepDVCSupportedInitialized = true;
  return NotSupported;
}

// QueryReflexSupport @ 14de6a100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EStreamlineFeatureSupport __thiscall
FStreamlineCoreModule::QueryReflexSupport(FStreamlineCoreModule *this)

{
  bool bVar1;
  char cVar2;
  Result RVar3;
  FStreamlineRHI *pFVar4;
  AdapterInfo *pAVar5;
  wchar_t *pwVar6;
  
  if (bStreamlineDLSSGSupportedInitialized) {
    return GStreamlineReflexSupport;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = IsRHIDeviceNVIDIA();
    if (!bVar1) {
      GStreamlineReflexSupport = NotSupportedIncompatibleHardware;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleHardware;
    }
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar4 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4);
      if (cVar2 != '\0') {
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        RVar3 = SLisFeatureSupported(3,pAVar5);
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        LogStreamlineFeatureSupport(3,pAVar5);
        GStreamlineReflexSupport = TranslateStreamlineResult(RVar3);
        bStreamlineDLSSGSupportedInitialized = true;
        if (GStreamlineReflexSupport == Supported) {
          GetDLSSGStatusFromStreamline(true);
        }
        return GStreamlineReflexSupport;
      }
      GStreamlineReflexSupport = NotSupportedIncompatibleRHI;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleRHI;
    }
  }
  GStreamlineReflexSupport = NotSupported;
  bStreamlineDLSSGSupportedInitialized = true;
  return NotSupported;
}

// GetStreamlineRHI @ 14de7b7e0

FStreamlineRHI * __cdecl FStreamlineCoreModule::GetStreamlineRHI(void)

{
  return GStreamlineRHI.Ptr;
}


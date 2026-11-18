// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 2

// IsStreamlinePCLSupported @ 14de7cad0

bool __cdecl FStreamlineLatencyBase::IsStreamlinePCLSupported(void)

{
  bool bVar1;
  Result RVar2;
  FStreamlineRHI *pFVar3;
  AdapterInfo *pAVar4;
  wchar_t *pwVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar5 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar5,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      if (bStreamlinePCLSupportedInitialized == false) {
        pFVar3 = GetPlatformStreamlineRHI();
        pAVar4 = (AdapterInfo *)(**(code **)(pFVar3->_padding_ + 0x18))(pFVar3);
        RVar2 = SLisFeatureSupported(4,pAVar4);
        LogStreamlineFeatureSupport(4,pAVar4);
        bStreamlinePCLSupportedInitialized = true;
        bStreamlinePCLSupported = RVar2 == eOk;
        return RVar2 == eOk;
      }
      return bStreamlinePCLSupported;
    }
  }
  return false;
}

// IsStreamlineReflexSupported @ 14de7cc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FStreamlineLatencyBase::IsStreamlineReflexSupported(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  Result RVar4;
  FStreamlineRHI *pFVar5;
  AdapterInfo *pAVar6;
  char *_Str;
  size_t sVar7;
  wchar_t *pwVar8;
  undefined1 auStack_2af8 [32];
  wchar_t *local_2ad8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2ac8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_29a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2888;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2768;
  ReflexState local_2648;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14de7cc24;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2af8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar8 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar8,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (bVar2 = IsStreamlineSupported(), bVar2)) {
    uVar3 = bStreamlineReflexSupported;
    if (bStreamlineReflexSupportedInitialized == false) {
      pFVar5 = GetPlatformStreamlineRHI();
      pAVar6 = (AdapterInfo *)(**(code **)(pFVar5->_padding_ + 0x18))(pFVar5);
      RVar4 = SLisFeatureSupported(3,pAVar6);
      LogStreamlineFeatureSupport(3,pAVar6);
      if (RVar4 == eOk) {
        sl::ReflexState::ReflexState(&local_2648);
        RVar4 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexState_&),sl::ReflexState_&>
                          (3,"slReflexGetState",&local_2648);
        if (RVar4 == eOk) {
          if (4 < (byte)LogStreamline._0_1_) {
            local_2768._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_2768,"FStreamlineLatencyBase::IsStreamlineReflexSupported",0x33,Yes);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
            if ((void *)local_2768._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_2768._padding_);
            }
          }
          bStreamlineReflexSupported = local_2648.lowLatencyAvailable;
        }
        else {
          _Str = sl::getResultAsStr(eOk);
          local_2ac8._padding_ = 0;
          if (_Str == (char *)0x0) {
            local_2ac8.Ptr = (wchar_t *)0x0;
            local_2ac8.StringLength = 0;
          }
          else {
            sVar7 = strlen(_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_2ac8,_Str,(int)sVar7,Yes);
          }
          local_2ad8 = local_2ac8.Ptr;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultReflexGetState == sl::Result::eOk",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                             ,0x7e,L"slReflexGetState failed (%s)");
          if ((void *)local_2ac8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_2ac8._padding_);
          }
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (4 < (byte)LogStreamline._0_1_) {
            local_29a8._padding_ = 0;
            if (_Str == (char *)0x0) {
              local_29a8.Ptr = (wchar_t *)0x0;
              local_29a8.StringLength = 0;
            }
            else {
              sVar7 = strlen(_Str);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_29a8,_Str,(int)sVar7,Yes);
            }
            local_2888._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_2888,"FStreamlineLatencyBase::IsStreamlineReflexSupported",0x33,Yes);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
            if ((void *)local_2888._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_2888._padding_);
            }
            if ((void *)local_29a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_29a8._padding_);
            }
          }
        }
      }
      bStreamlineReflexSupportedInitialized = true;
      uVar3 = bStreamlineReflexSupported;
    }
  }
  else {
    uVar3 = 0;
  }
  return (bool)uVar3;
}


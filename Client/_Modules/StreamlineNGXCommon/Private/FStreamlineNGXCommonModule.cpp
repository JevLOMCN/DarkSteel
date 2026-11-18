// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineNGXCommon
// Functions: 2

// StartupModule @ 14de0dca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineNGXCommonModule::StartupModule(FStreamlineNGXCommonModule *this)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_188 [32];
  FName local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168 = (FName)((ulonglong)local_168 & 0xffffffff00000000);
  if (5 < (byte)LogStreamlineNGXCommon._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineNGXCommonModule::StartupModule",0x29,Yes);
    UE::Logging::Private::BasicLog<6>
              (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  uVar2 = (ulonglong)_tls_index;
  if (5 < (byte)LogStreamlineNGXCommon._0_1_) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    UE::Logging::Private::BasicLog<6>
              (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                ::__l21::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon);
    if (5 < (byte)LogStreamlineNGXCommon._0_1_) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar1 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar1,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon);
      if ((((5 < (byte)LogStreamlineNGXCommon._0_1_) &&
           (UE::Logging::Private::BasicLog<6>
                      (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                        ::__l57::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon),
           5 < (byte)LogStreamlineNGXCommon._0_1_)) &&
          (UE::Logging::Private::BasicLog<6>
                     (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                       ::__l75::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon),
          5 < (byte)LogStreamlineNGXCommon._0_1_)) &&
         (UE::Logging::Private::BasicLog<6>
                    (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                      ::__l93::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon),
         5 < (byte)LogStreamlineNGXCommon._0_1_)) {
        IsRunningCookOnTheFly();
        UE::Logging::Private::BasicLog<6>
                  (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                    ::__l111::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon);
        if ((5 < (byte)LogStreamlineNGXCommon._0_1_) &&
           (UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)
                       &`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                        ::B::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon),
           5 < (byte)LogStreamlineNGXCommon._0_1_)) {
          GetCommandletNameFromCmdline(&local_150);
          bVar3 = PRIVATE_GRunningCommandletClass != (UClass *)0x0;
          if (bVar3) {
            local_168 = (FName)PRIVATE_GRunningCommandletClass->_padding_;
            ::FName::ToString(&local_168,&local_160);
          }
          UE::Logging::Private::BasicLog<6>
                    (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                      ::__l147::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon);
          if ((bVar3) && (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (5 < (byte)LogStreamlineNGXCommon._0_1_) {
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FStreamlineNGXCommonModule::StartupModule",0x29,Yes);
            UE::Logging::Private::BasicLog<6>
                      (&`public:_virtual_void___cdecl_FStreamlineNGXCommonModule::StartupModule(void)___ptr64'
                        ::__l165::LOG_Static,(FLogCategoryBase *)&LogStreamlineNGXCommon);
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
        }
      }
    }
  }
  return;
}

// ShutdownModule @ 14de0e050

void __thiscall FStreamlineNGXCommonModule::ShutdownModule(FStreamlineNGXCommonModule *this)

{
  return;
}


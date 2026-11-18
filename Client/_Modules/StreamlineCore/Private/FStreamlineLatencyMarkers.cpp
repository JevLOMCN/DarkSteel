// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 39

// FStreamlineLatencyMarkers @ 14de704d0

FStreamlineLatencyMarkers * __thiscall
FStreamlineLatencyMarkers::FStreamlineLatencyMarkers(FStreamlineLatencyMarkers *this)

{
  this->_padding_ = (longlong)&___7ILatencyMarkerModule__6B_;
  this->_padding_ = (longlong)&___7IWindowsMessageHandler__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__IWindowsMessageHandler__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->AverageTotalLatencyMs = 0.0;
  this->AverageGameLatencyMs = 0.0;
  this->AverageRenderLatencyMs = 0.0;
  this->AverageSimulationLatencyMs = 0.0;
  this->AverageRenderSubmitLatencyMs = 0.0;
  this->AveragePresentLatencyMs = 0.0;
  this->AverageDriverLatencyMs = 0.0;
  this->AverageOSRenderQueueLatencyMs = 0.0;
  this->AverageGPURenderLatencyMs = 0.0;
  this->RenderSubmitOffsetMs = 0.0;
  this->PresentOffsetMs = 0.0;
  this->DriverOffsetMs = 0.0;
  this->OSRenderQueueOffsetMs = 0.0;
  this->GPURenderOffsetMs = 0.0;
  this->bFlashIndicatorDriverControlled = false;
  return this;
}

// ~FStreamlineLatencyMarkers @ 14de70cd0

void __thiscall
FStreamlineLatencyMarkers::~FStreamlineLatencyMarkers(FStreamlineLatencyMarkers *this)

{
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__IWindowsMessageHandler__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  return;
}

// Get @ 14de7a340

FStreamlineLatencyMarkers * __cdecl FStreamlineLatencyMarkers::Get(void)

{
  longlong *plVar1;
  FStreamlineLatencyMarkers *this;
  TUniquePtr<FStreamlineLatencyMarkers,TDefaultDelete<FStreamlineLatencyMarkers>_> TVar2;
  longlong *plVar3;
  
  if (StreamlineLatencyMarkers.Ptr == (FStreamlineLatencyMarkers *)0x0) {
    this = ::operator_new(0x58);
    TVar2.Ptr = (FStreamlineLatencyMarkers *)0x0;
    if (this != (FStreamlineLatencyMarkers *)0x0) {
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->AverageTotalLatencyMs = 0.0;
      this->AverageGameLatencyMs = 0.0;
      this->AverageRenderLatencyMs = 0.0;
      this->AverageSimulationLatencyMs = 0.0;
      this->AverageRenderSubmitLatencyMs = 0.0;
      this->AveragePresentLatencyMs = 0.0;
      this->AverageDriverLatencyMs = 0.0;
      this->AverageOSRenderQueueLatencyMs = 0.0;
      this->AverageGPURenderLatencyMs = 0.0;
      this->RenderSubmitOffsetMs = 0.0;
      this->PresentOffsetMs = 0.0;
      this->DriverOffsetMs = 0.0;
      this->OSRenderQueueOffsetMs = 0.0;
      this->GPURenderOffsetMs = 0.0;
      *(undefined8 *)&this->bFlashIndicatorDriverControlled = 0;
      TVar2.Ptr = FStreamlineLatencyMarkers(this);
    }
    if (StreamlineLatencyMarkers.Ptr != (FStreamlineLatencyMarkers *)0x0) {
      plVar1 = &(StreamlineLatencyMarkers.Ptr)->_padding_;
      plVar3 = &(StreamlineLatencyMarkers.Ptr)->_padding_;
      StreamlineLatencyMarkers.Ptr = TVar2.Ptr;
      (**(code **)(*plVar1 + 0x28))(plVar3,1);
      TVar2.Ptr = StreamlineLatencyMarkers.Ptr;
    }
    StreamlineLatencyMarkers.Ptr = TVar2.Ptr;
    (**(code **)(StreamlineLatencyMarkers.Ptr)->_padding_)(StreamlineLatencyMarkers.Ptr);
  }
  return StreamlineLatencyMarkers.Ptr;
}

// GetAvailable @ 14de7a460

bool __thiscall FStreamlineLatencyMarkers::GetAvailable(FStreamlineLatencyMarkers *this)

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
        FStreamlineLatencyBase::bStreamlinePCLSupported = RVar2 == eOk;
        return RVar2 == eOk;
      }
      return FStreamlineLatencyBase::bStreamlinePCLSupported;
    }
  }
  return false;
}

// GetDriverLatencyInMs @ 14de7af70

float __thiscall FStreamlineLatencyMarkers::GetDriverLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageDriverLatencyMs;
}

// GetDriverOffsetFromFrameStartInMs @ 14de7af80

float __thiscall
FStreamlineLatencyMarkers::GetDriverOffsetFromFrameStartInMs(FStreamlineLatencyMarkers *this)

{
  return this->DriverOffsetMs;
}

// GetEnabled @ 14de7af90

bool __thiscall FStreamlineLatencyMarkers::GetEnabled(FStreamlineLatencyMarkers *this)

{
  TConsoleVariableData<int> *pTVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar1 = CVarStreamlineReflexEnableLatencyMarkers.Ref;
  if (cVar2 == '\0') {
    return false;
  }
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// GetFlashIndicatorEnabled @ 14de7b180

bool __thiscall FStreamlineLatencyMarkers::GetFlashIndicatorEnabled(FStreamlineLatencyMarkers *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  if ((cVar1 != '\0') && (this->bFlashIndicatorDriverControlled != false)) {
    return true;
  }
  return false;
}

// GetGPURenderLatencyInMs @ 14de7b1b0

float __thiscall FStreamlineLatencyMarkers::GetGPURenderLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageGPURenderLatencyMs;
}

// GetGPURenderOffsetFromFrameStartInMs @ 14de7b1c0

float __thiscall
FStreamlineLatencyMarkers::GetGPURenderOffsetFromFrameStartInMs(FStreamlineLatencyMarkers *this)

{
  return this->GPURenderOffsetMs;
}

// GetGameLatencyInMs @ 14de7b1d0

float __thiscall FStreamlineLatencyMarkers::GetGameLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageGameLatencyMs;
}

// GetOSRenderQueueLatencyInMs @ 14de7b1e0

float __thiscall
FStreamlineLatencyMarkers::GetOSRenderQueueLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageOSRenderQueueLatencyMs;
}

// GetOSRenderQueueOffsetFromFrameStartInMs @ 14de7b1f0

float __thiscall
FStreamlineLatencyMarkers::GetOSRenderQueueOffsetFromFrameStartInMs(FStreamlineLatencyMarkers *this)

{
  return this->OSRenderQueueOffsetMs;
}

// GetPresentLatencyInMs @ 14de7b270

float __thiscall FStreamlineLatencyMarkers::GetPresentLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AveragePresentLatencyMs;
}

// GetPresentOffsetFromFrameStartInMs @ 14de7b280

float __thiscall
FStreamlineLatencyMarkers::GetPresentOffsetFromFrameStartInMs(FStreamlineLatencyMarkers *this)

{
  return this->PresentOffsetMs;
}

// GetRenderLatencyInMs @ 14de7b580

float __thiscall FStreamlineLatencyMarkers::GetRenderLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageRenderLatencyMs;
}

// GetRenderSubmitLatencyInMs @ 14de7b590

float __thiscall
FStreamlineLatencyMarkers::GetRenderSubmitLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageRenderSubmitLatencyMs;
}

// GetRenderSubmitOffsetFromFrameStartInMs @ 14de7b5a0

float __thiscall
FStreamlineLatencyMarkers::GetRenderSubmitOffsetFromFrameStartInMs(FStreamlineLatencyMarkers *this)

{
  return this->RenderSubmitOffsetMs;
}

// GetSimulationLatencyInMs @ 14de7b5b0

float __thiscall
FStreamlineLatencyMarkers::GetSimulationLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageSimulationLatencyMs;
}

// GetStatId @ 14de7b5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FStreamlineLatencyMarkers::GetStatId(FStreamlineLatencyMarkers *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FStreamlineLatencyMarkers::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FStreamlineLatencyMarkers::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FStreamlineLatencyMarkers::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FLatencyMarkers = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FLatencyMarkers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FStreamlineLatencyMarkers::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FLatencyMarkers,*pFVar1,L"FLatencyMarkers","STATGROUP_Tickables",
               "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FStreamlineLatencyMarkers::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FLatencyMarkers;
  if (_StatPtr_FLatencyMarkers == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FLatencyMarkers");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FStreamlineLatencyMarkers::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FLatencyMarkers,*pFVar1,L"FLatencyMarkers",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTotalLatencyInMs @ 14de7ba80

float __thiscall FStreamlineLatencyMarkers::GetTotalLatencyInMs(FStreamlineLatencyMarkers *this)

{
  return this->AverageTotalLatencyMs;
}

// Initialize @ 14de7c680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineLatencyMarkers::Initialize(FStreamlineLatencyMarkers *this)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  char *_Str;
  size_t sVar4;
  undefined1 auStack_28b8 [32];
  wchar_t *local_2898;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2888;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2768;
  ReflexState local_2648;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14de7c68c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_28b8;
  bVar2 = FStreamlineLatencyBase::IsStreamlineReflexSupported();
  if (bVar2) {
    sl::ReflexState::ReflexState(&local_2648);
    RVar3 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexState_&),sl::ReflexState_&>
                      (3,"slReflexGetState",&local_2648);
    if (RVar3 != eOk) {
      _Str = sl::getResultAsStr(RVar3);
      local_2888._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_2888.StringLength = 0;
        local_2888.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar4 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_2888,_Str,(int)sVar4,Yes);
      }
      local_2898 = local_2888.Ptr;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                         ,0x1ae,L"slReflexGetState failed (%s)");
      if ((void *)local_2888._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2888._padding_);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (4 < (byte)LogStreamline._0_1_) {
      local_2768._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_2768,"FStreamlineLatencyMarkers::Initialize",0x25,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      if ((void *)local_2768._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2768._padding_);
      }
    }
    this->bFlashIndicatorDriverControlled = local_2648.flashIndicatorDriverControlled;
  }
  return;
}

// IsTickable @ 14de7cf50

bool __thiscall FStreamlineLatencyMarkers::IsTickable(FStreamlineLatencyMarkers *this)

{
  return true;
}

// IsTickableInEditor @ 14de7cf60

bool __thiscall FStreamlineLatencyMarkers::IsTickableInEditor(FStreamlineLatencyMarkers *this)

{
  return true;
}

// IsTickableWhenPaused @ 14de7cf70

bool __thiscall FStreamlineLatencyMarkers::IsTickableWhenPaused(FStreamlineLatencyMarkers *this)

{
  return true;
}

// ProcessMessage @ 14de80a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStreamlineLatencyMarkers::ProcessMessage
          (FStreamlineLatencyMarkers *this,HWND__ *param_1,uint param_2,ulong64 param_3,
          long64 param_4,int *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  Result RVar5;
  char *pcVar6;
  size_t sVar7;
  FStreamlineRHI *this_00;
  FrameToken *pFVar8;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  PCLMarker local_288 [2];
  PCLState local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  bVar2 = FStreamlineLatencyBase::IsStreamlinePCLSupported();
  if ((bVar2) &&
     (cVar3 = (**(code **)(*(longlong *)&this[-1].bFlashIndicatorDriverControlled + 0x10))
                        (&this[-1].bFlashIndicatorDriverControlled), cVar3 != '\0')) {
    local_280._padding_._0_4_ = 0xcfa32f9b;
    local_280._padding_ = 0;
    local_280._padding_._4_4_ = 0x420e023c;
    local_280._padding_._0_4_ = 0x32685690;
    local_280._padding_._4_4_ = 0xb5894fb7;
    local_280._padding_ = 1;
    RVar5 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::PCLState_&),sl::PCLState_&>
                      (4,"slPCLGetState",&local_280);
    if (RVar5 != eOk) {
      pcVar6 = sl::getResultAsStr(RVar5);
      local_258._padding_ = 0;
      if (pcVar6 == (char *)0x0) {
        local_258.Ptr = (wchar_t *)0x0;
        local_258.StringLength = 0;
      }
      else {
        sVar7 = strlen(pcVar6);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_258,pcVar6,(int)sVar7,Yes);
      }
      local_298 = local_258.Ptr;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                         ,0x24f,L"slPCLGetState failed (%s)");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (local_280.statsWindowMessage == param_2) {
      this_00 = GetPlatformStreamlineRHI();
      pFVar8 = FStreamlineRHI::GetFrameToken(this_00,GFrameCounter);
      local_288[0] = ePCLatencyPing;
      RVar5 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(enum_sl::PCLMarker,sl::FrameToken_const_&),enum_sl::PCLMarker,sl::FrameToken_&>
                        (4,"slPCLSetMarker",local_288,pFVar8);
      if (RVar5 != eOk) {
        pcVar6 = sl::getResultAsStr(RVar5);
        local_138._padding_ = 0;
        if (pcVar6 == (char *)0x0) {
          local_138.Ptr = (wchar_t *)0x0;
          local_138.StringLength = 0;
        }
        else {
          sVar7 = strlen(pcVar6);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,pcVar6,(int)sVar7,Yes);
        }
        local_298 = local_138.Ptr;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == sl::Result::eOk",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                           ,0x256,L"slPCLSetMarker ePCLatencyPing failed (%s)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      return true;
    }
  }
  return false;
}

// Reset @ 14de81c80

void __cdecl FStreamlineLatencyMarkers::Reset(void)

{
  longlong *plVar1;
  
  if (StreamlineLatencyMarkers.Ptr != (FStreamlineLatencyMarkers *)0x0) {
    plVar1 = &(StreamlineLatencyMarkers.Ptr)->_padding_;
    StreamlineLatencyMarkers.Ptr = (FStreamlineLatencyMarkers *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014de81ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// SetCustomLatencyMarker @ 14de836b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStreamlineLatencyMarkers::SetCustomLatencyMarker
          (FStreamlineLatencyMarkers *this,uint param_1,ulong64 param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  char cVar4;
  Result RVar5;
  FStreamlineRHI *this_00;
  FrameToken *pFVar6;
  char *pcVar7;
  size_t sVar8;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  wchar_t *local_280;
  PCLMarker local_278 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  bVar3 = FStreamlineLatencyBase::IsStreamlinePCLSupported();
  if (bVar3) {
    cVar4 = (**(code **)(this->_padding_ + 0x10))(this);
    if (cVar4 != '\0') {
      local_278[0] = param_1;
      this_00 = GetPlatformStreamlineRHI();
      pFVar6 = FStreamlineRHI::GetFrameToken(this_00,param_2);
      RVar5 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(enum_sl::PCLMarker,sl::FrameToken_const_&),enum_sl::PCLMarker_&,sl::FrameToken_&>
                        (4,"slPCLSetMarker",local_278,pFVar6);
      if (RVar5 != eOk) {
        pcVar7 = sl::getResultAsStr(RVar5);
        local_148._padding_ = 0;
        if (pcVar7 == (char *)0x0) {
          local_148.Ptr = (wchar_t *)0x0;
          local_148.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar7);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,pcVar7,(int)sVar8,Yes);
        }
        pwVar2 = local_148.Ptr;
        pcVar7 = sl::getPCLMarkerAsStr(local_278[0]);
        local_268._padding_ = 0;
        if (pcVar7 == (char *)0x0) {
          local_268.Ptr = (wchar_t *)0x0;
          local_268.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar7);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,pcVar7,(int)sVar8,Yes);
        }
        local_288 = local_268.Ptr;
        local_280 = pwVar2;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == sl::Result::eOk",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                           ,0x245,L"slPCLSetMarker failed MarkerId=%s (%s)");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// SetEnabled @ 14de83850

void __thiscall FStreamlineLatencyMarkers::SetEnabled(FStreamlineLatencyMarkers *this,bool param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar2 = CVarStreamlineReflexEnableLatencyMarkers._padding_;
  local_2c = 0xd000000;
  local_28 = 0;
  lVar1 = *(longlong *)CVarStreamlineReflexEnableLatencyMarkers._padding_;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  uVar3 = (**(code **)(lVar1 + 0xa8))
                    (CVarStreamlineReflexEnableLatencyMarkers._padding_,local_38,&local_2c);
  puVar4 = &u_0;
  if (param_1) {
    puVar4 = &u_1;
  }
  (**(code **)(lVar1 + 0xb0))(lVar2,puVar4,uVar3);
  return;
}

// SetFlashIndicatorEnabled @ 14de83a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamlineLatencyMarkers::SetFlashIndicatorEnabled(FStreamlineLatencyMarkers *this,bool param_1)

{
  if (4 < (byte)LogStreamline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    return;
  }
  return;
}

// SetFlashIndicatorLatencyMarker @ 14de83ac0

void __thiscall
FStreamlineLatencyMarkers::SetFlashIndicatorLatencyMarker
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x70))(this,7,param_1);
  }
  return;
}

// SetInputSampleLatencyMarker @ 14de83b00

void __thiscall
FStreamlineLatencyMarkers::SetInputSampleLatencyMarker
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
  return;
}

// SetPresentLatencyMarkerEnd @ 14de83b10

void __thiscall
FStreamlineLatencyMarkers::SetPresentLatencyMarkerEnd
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
  (**(code **)(this->_padding_ + 0x70))(this,5,param_1);
  GetDLSSGStatusFromStreamline(false);
  return;
}

// SetPresentLatencyMarkerStart @ 14de83b40

void __thiscall
FStreamlineLatencyMarkers::SetPresentLatencyMarkerStart
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014de83b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,4,param_1);
  return;
}

// SetRenderSubmitLatencyMarkerEnd @ 14de83b60

void __thiscall
FStreamlineLatencyMarkers::SetRenderSubmitLatencyMarkerEnd
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014de83b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,3,param_1);
  return;
}

// SetRenderSubmitLatencyMarkerStart @ 14de83b80

void __thiscall
FStreamlineLatencyMarkers::SetRenderSubmitLatencyMarkerStart
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014de83b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,2,param_1);
  return;
}

// SetSimulationLatencyMarkerEnd @ 14de83ba0

void __thiscall
FStreamlineLatencyMarkers::SetSimulationLatencyMarkerEnd
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014de83bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,1,param_1);
  return;
}

// SetSimulationLatencyMarkerStart @ 14de83bc0

void __thiscall
FStreamlineLatencyMarkers::SetSimulationLatencyMarkerStart
          (FStreamlineLatencyMarkers *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014de83bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,0,param_1);
  return;
}

// Tick @ 14de83f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineLatencyMarkers::Tick(FStreamlineLatencyMarkers *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  undefined1 auStack_2798 [32];
  wchar_t *local_2778;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2768;
  ReflexState local_2648;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14de83f4c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2798;
  bVar4 = FStreamlineLatencyBase::IsStreamlineReflexSupported();
  if ((bVar4) &&
     (cVar5 = (**(code **)(*(longlong *)&this[-1].OSRenderQueueOffsetMs + 0x18))
                        (&this[-1].OSRenderQueueOffsetMs), cVar5 != '\0')) {
    sl::ReflexState::ReflexState(&local_2648);
    RVar6 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexState_&),sl::ReflexState_&>
                      (3,"slReflexGetState",&local_2648);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_2768._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_2768.Ptr = (wchar_t *)0x0;
        local_2768.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_2768,_Str,(int)sVar7,Yes);
      }
      local_2778 = local_2768.Ptr;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                         ,0x1bb,L"slReflexGetState failed (%s)");
      if ((void *)local_2768._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2768._padding_);
      }
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    fVar3 = __real_3983126f;
    fVar2 = __real_3f400000;
    if ((local_2648.latencyReportAvailable != false) &&
       (local_2648.frameReport[0x3f].gpuRenderEndTime - local_2648.frameReport[0x3f].simStartTime !=
        0)) {
      *(float *)&this->_padding_ =
           (float)(local_2648.frameReport[0x3f].gpuRenderEndTime -
                  local_2648.frameReport[0x3f].simStartTime) * __real_3983126f +
           *(float *)&this->_padding_ * __real_3f400000;
      *(float *)((longlong)&this->_padding_ + 4) =
           (float)(local_2648.frameReport[0x3f].driverEndTime -
                  local_2648.frameReport[0x3f].simStartTime) * fVar3 +
           *(float *)((longlong)&this->_padding_ + 4) * fVar2;
      *(float *)&this->_padding_ =
           (float)(local_2648.frameReport[0x3f].gpuRenderEndTime -
                  local_2648.frameReport[0x3f].osRenderQueueStartTime) * fVar3 +
           *(float *)&this->_padding_ * fVar2;
      *(float *)((longlong)&this->_padding_ + 4) =
           (float)(local_2648.frameReport[0x3f].simEndTime -
                  local_2648.frameReport[0x3f].simStartTime) * fVar3 +
           *(float *)((longlong)&this->_padding_ + 4) * fVar2;
      this->AverageTotalLatencyMs =
           (float)(local_2648.frameReport[0x3f].renderSubmitEndTime -
                  local_2648.frameReport[0x3f].renderSubmitStartTime) * fVar3 +
           this->AverageTotalLatencyMs * fVar2;
      this->AverageGameLatencyMs =
           (float)(local_2648.frameReport[0x3f].presentEndTime -
                  local_2648.frameReport[0x3f].presentStartTime) * fVar3 +
           this->AverageGameLatencyMs * fVar2;
      this->AverageRenderLatencyMs =
           (float)(local_2648.frameReport[0x3f].driverEndTime -
                  local_2648.frameReport[0x3f].driverStartTime) * fVar3 +
           this->AverageRenderLatencyMs * fVar2;
      this->AverageSimulationLatencyMs =
           (float)(local_2648.frameReport[0x3f].osRenderQueueEndTime -
                  local_2648.frameReport[0x3f].osRenderQueueStartTime) * fVar3 +
           this->AverageSimulationLatencyMs * fVar2;
      this->AverageRenderSubmitLatencyMs =
           (float)(local_2648.frameReport[0x3f].gpuRenderEndTime -
                  local_2648.frameReport[0x3f].gpuRenderStartTime) * fVar3 +
           this->AverageRenderSubmitLatencyMs * fVar2;
      fVar2 = __real_3a83126f;
      this->AveragePresentLatencyMs =
           (float)(local_2648.frameReport[0x3f].renderSubmitStartTime -
                  local_2648.frameReport[0x3f].simStartTime) * __real_3a83126f;
      this->AverageDriverLatencyMs =
           (float)(local_2648.frameReport[0x3f].presentStartTime -
                  local_2648.frameReport[0x3f].simStartTime) * fVar2;
      this->AverageOSRenderQueueLatencyMs =
           (float)(local_2648.frameReport[0x3f].driverStartTime -
                  local_2648.frameReport[0x3f].simStartTime) * fVar2;
      this->AverageGPURenderLatencyMs =
           (float)(local_2648.frameReport[0x3f].osRenderQueueStartTime -
                  local_2648.frameReport[0x3f].simStartTime) * fVar2;
      this->RenderSubmitOffsetMs =
           (float)(local_2648.frameReport[0x3f].gpuRenderStartTime -
                  local_2648.frameReport[0x3f].simStartTime) * fVar2;
      if ((((6 < (byte)LogStreamline._0_1_) &&
           ((((UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
              6 < (byte)LogStreamline._0_1_ &&
              (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
              6 < (byte)LogStreamline._0_1_)) &&
             (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
             6 < (byte)LogStreamline._0_1_)) &&
            ((UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
             6 < (byte)LogStreamline._0_1_ &&
             (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
             6 < (byte)LogStreamline._0_1_)))))) &&
          (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
          6 < (byte)LogStreamline._0_1_)) &&
         ((UE::Logging::Private::BasicLog<7>
                     ((FStaticBasicLogRecord *)&PTR_u_AverageDriverLa_152d60478,
                      (FLogCategoryBase *)&LogStreamline), 6 < (byte)LogStreamline._0_1_ &&
          (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline),
          6 < (byte)LogStreamline._0_1_)))) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      }
    }
  }
  else {
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->AverageTotalLatencyMs = 0.0;
    this->AverageGameLatencyMs = 0.0;
    this->AverageRenderLatencyMs = 0.0;
    this->AverageSimulationLatencyMs = 0.0;
    this->AverageRenderSubmitLatencyMs = 0.0;
    this->AveragePresentLatencyMs = 0.0;
    this->AverageDriverLatencyMs = 0.0;
    this->AverageOSRenderQueueLatencyMs = 0.0;
    this->AverageGPURenderLatencyMs = 0.0;
    this->RenderSubmitOffsetMs = 0.0;
  }
  return;
}


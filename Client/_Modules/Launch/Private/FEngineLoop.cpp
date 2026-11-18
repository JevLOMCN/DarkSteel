// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 30

// Init @ 148d940d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FEngineLoop::Init(FEngineLoop *this)

{
  TSharedPtr<ISessionService,1> *this_00;
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  FFeedbackContext *pFVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_int___cdecl_FEngineLoop::Init(void)_::_2_::FStat_STAT_FEngineLoop_Init>
  FVar14;
  FText *pFVar15;
  size_t sVar16;
  UClass *pUVar17;
  UPackage *pUVar18;
  IGameMoviePlayer *pIVar19;
  FPreLoadScreenManager *pFVar20;
  wchar_t *pwVar21;
  FModuleManager *pFVar22;
  IModuleInterface *pIVar23;
  undefined8 *puVar24;
  ISessionService *pIVar25;
  FEngineService *this_01;
  FTraceService *pFVar26;
  FTraceService *this_02;
  IProjectManager *pIVar27;
  IPluginManager *pIVar28;
  FOutputDeviceRedirector *this_03;
  FTraceService *pFVar29;
  ulong64 uVar30;
  FThreadHeartBeat *pFVar31;
  FExternalProfiler *pFVar32;
  FGameThreadHitchHeartBeatThreaded *this_04;
  FThreadStats *this_05;
  FThreadStatsPool *this_06;
  uint uVar33;
  FScopedBootTiming *this_07;
  FNameEntryId FVar34;
  FName FVar35;
  int iVar36;
  bool bVar37;
  bool bVar38;
  FLLMScope local_res8 [2];
  float local_res10;
  uint uStackX_14;
  float local_res18 [2];
  FColor_u_0 local_res20 [2];
  FString local_378;
  FName local_368;
  FName local_360;
  undefined8 local_358;
  FName local_350;
  LARGE_INTEGER local_340;
  LARGE_INTEGER local_338;
  TRawPtrProxy<FAppMediaTimeSource> local_330;
  LARGE_INTEGER local_328;
  FMemScope local_320;
  wchar_t *local_318;
  undefined8 uStack_310;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FStatMessage local_2f8;
  TSharedPtr<IMediaTimeSource,1> local_2e8;
  FScopedBootTiming local_2d8;
  FScopedBootTiming local_2c0;
  FScopedBootTiming local_2a8;
  FDestructionSentinel local_290;
  undefined8 local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FText local_258;
  FText local_248;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  FText local_218;
  FText local_208;
  undefined1 local_1f8 [8];
  TReferenceControllerBase<1> *local_1f0;
  FString local_1e8;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FScopedBootTiming local_1c0;
  FName local_1a8;
  FScopedBootTiming local_1a0;
  FScopedBootTiming local_188;
  FScopedBootTiming local_170;
  FScopedBootTiming local_158;
  FScopedBootTiming local_140;
  FScopedBootTiming local_128;
  FScopedBootTiming local_110;
  FScopedBootTiming local_f8;
  FSlowTask local_d8;
  
  FLLMScope::FLLMScope(local_res8,EngineInitMemory,false,None,Default,true);
  FMemScope::FMemScope(&local_320,EngineInitMemory,true);
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4698,"FEngineLoop::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x125a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4698);
  }
  FScopedBootTiming::FScopedBootTiming(&local_110,"FEngineLoop::Init");
  pFVar29 = (FTraceService *)0x0;
  iVar36 = 0;
  iVar12 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FEngineLoop_Init ==
        (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FEngineLoop::Init(void)_::_2_::FStat_STAT_FEngineLoop_Init>
         )0x0) {
      pFVar13 = ::FName::FName(&local_1d8,"STAT_FEngineLoop_Init");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FEngineLoop_Init,*pFVar13,
                 L"FEngineLoop::Init","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FEngineLoop_Init;
  if (StatPtr_STAT_FEngineLoop_Init ==
      (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FEngineLoop::Init(void)_::_2_::FStat_STAT_FEngineLoop_Init>
       )0x0) {
    pFVar13 = ::FName::FName(&local_1d0,"STAT_FEngineLoop_Init");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FEngineLoop::Init(void)_::_2_::FStat_STAT_FEngineLoop_Init>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FEngineLoop_Init,*pFVar13,
                          L"FEngineLoop::Init","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar14;
  bVar4 = false;
  bVar6 = false;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  FVar34 = FVar35.ComparisonIndex.Value;
  uVar33 = FVar35.Number;
  if ((FVar34.Value == 0) && (uVar33 == 0)) {
LAB_148d942d3:
    bVar5 = false;
    FVar35 = local_350;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_360.ComparisonIndex.Value = FVar34.Value;
        local_360.Number = uVar33;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_360,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x125c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d942d3;
    local_res10 = (float)FVar34.Value;
    uStackX_14 = uVar33;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar5 = true;
  }
  pFVar9 = GWarn;
  pFVar15 = FText::FText(&local_258);
  FSlowTask::FSlowTask(&local_d8,__real_42c80000,pFVar15,true,pFVar9);
  FSlowTask::Initialize(&local_d8);
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  pFVar15 = FText::FText(&local_248);
  FSlowTask::EnterProgressFrame(&local_d8,__real_41200000,pFVar15);
  if (local_248.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
  }
  fVar8 = __real_3dcccccd;
  fVar7 = __real_3f000000;
  FEmbeddedCommunication::ForceTick(10,__real_3dcccccd,__real_3f000000);
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4711,"Create GEngine",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1267);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4711);
  }
  FScopedBootTiming::FScopedBootTiming(&local_f8,"Create GEngine");
  local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.Data.ArrayNum = 0;
  local_378.Data.ArrayMax = 0;
  FConfigCacheIni::GetString(GConfig,L"/Script/Engine.Engine",L"GameEngine",&local_378,&GEngineIni);
  uStack_310._0_4_ = 0;
  uStack_310._4_4_ = 0;
  local_318 = (wchar_t *)0x0;
  if (local_378.Data.ArrayNum == 0) {
    local_308 = (FScriptContainerElement *)0x15060d16c;
LAB_148d94435:
    sVar16 = wcslen((wchar_t *)local_308);
    iVar12 = (int)sVar16;
  }
  else {
    local_308 = local_378.Data.AllocatorInstance.Data;
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_148d94435;
  }
  iStack_300 = iVar12;
  pUVar17 = Z_Construct_UClass_UGameEngine_NoRegister();
  local_228._12_4_ = uStack_2fc;
  local_228.Size = iStack_300;
  local_238.DataPtr = local_318;
  local_238.Size = (int)uStack_310;
  local_238._12_4_ = uStack_310._4_4_;
  local_228.DataPtr = (wchar_t *)local_308;
  pUVar17 = StaticLoadClass(pUVar17,(UObject *)0x0,&local_228,&local_238,0,(UPackageMap *)0x0);
  if (pUVar17 == (UClass *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  local_358 = 0;
  pUVar18 = GetTransientPackage();
  GEngine = NewObject<UEngine>((UObject *)pUVar18,pUVar17,(FName)0x0,RF_NoFlags,(UObject *)0x0,false
                               ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_f8);
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FEmbeddedCommunication::ForceTick(0xb,fVar8,fVar7);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                          ,0x1285,L""), bVar38)) {
    pcVar3 = (code *)swi(3);
    iVar12 = (*pcVar3)();
    return iVar12;
  }
  bVar38 = IsMoviePlayerEnabled();
  if (bVar38) {
    pIVar19 = GetMoviePlayer();
    (**(code **)((longlong)*pIVar19 + 0x18))(pIVar19);
  }
  pFVar20 = FPreLoadScreenManager::Get();
  if (pFVar20 != (FPreLoadScreenManager *)0x0) {
    pFVar20 = FPreLoadScreenManager::Get();
    FPreLoadScreenManager::PassPreLoadScreenWindowBackToGame(pFVar20);
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_2d8,"GEngine->ParseCommandline()");
    UEngine::ParseCommandline(GEngine);
    FScopedBootTiming::~FScopedBootTiming(&local_2d8);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4754,"GEngine->ParseCommandline()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1292);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4754);
    FScopedBootTiming::FScopedBootTiming(&local_2d8,"GEngine->ParseCommandline()");
    UEngine::ParseCommandline(GEngine);
    FScopedBootTiming::~FScopedBootTiming(&local_2d8);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FEmbeddedCommunication::ForceTick(0xc,fVar8,fVar7);
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4761,"InitTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1299);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4761);
  }
  FScopedBootTiming::FScopedBootTiming(&local_1a0,"InitTime");
  QueryPerformanceCounter(&local_340);
  FApp::CurrentTime =
       (atomic<double>)
       ((double)local_340.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
       );
  this->MaxFrameCounter = 0;
  this->MaxTickTime = 0.0;
  this->TotalTickTime = 0.0;
  QueryPerformanceCounter(&local_338);
  this->LastFrameCycles = local_338.s.LowPart;
  local_res10 = 0.0;
  pwVar21 = FCommandLine::Get();
  FParse::Value(pwVar21,L"SECONDS=",&local_res10);
  this->MaxTickTime = (double)local_res10;
  if (FApp::bIsBenchmarking != false) {
    pwVar21 = FCommandLine::Get();
    bVar10 = FParse::Value(pwVar21,L"BENCHMARKSECONDS=",&local_res10);
    if ((bVar10) && (local_res10 != 0.0)) {
      this->MaxTickTime = (double)local_res10;
    }
  }
  local_res18[0] = 0.0;
  pwVar21 = FCommandLine::Get();
  FParse::Value(pwVar21,L"FPS=",local_res18);
  if (0.0 < local_res18[0]) {
    FApp::FixedDeltaTime = (atomic<double>)(double)(__real_3f800000 / local_res18[0]);
  }
  this->MaxFrameCounter = (longlong)(this->MaxTickTime / (double)FApp::FixedDeltaTime);
  FScopedBootTiming::~FScopedBootTiming(&local_1a0);
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar15 = FText::FText(&local_218);
  FSlowTask::EnterProgressFrame(&local_d8,__real_42700000,pFVar15);
  if (local_218.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
  }
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4768,"GEngine->Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x12a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4768);
  }
  FScopedBootTiming::FScopedBootTiming(&local_188,"GEngine->Init");
  (**(code **)(GEngine->_padding_ + 0x2d0))(GEngine,this);
  FScopedBootTiming::~FScopedBootTiming(&local_188);
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_2c0,"FCoreDelegates::OnPostEngineInit");
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnPostEngineInit);
    FScopedBootTiming::~FScopedBootTiming(&local_2c0);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4774,"FCoreDelegates::OnPostEngineInit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x12a6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4774);
    FScopedBootTiming::FScopedBootTiming(&local_2c0,"FCoreDelegates::OnPostEngineInit");
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnPostEngineInit);
    FScopedBootTiming::~FScopedBootTiming(&local_2c0);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar15 = FText::FText(&local_208);
  FSlowTask::EnterProgressFrame(&local_d8,__real_41f00000,pFVar15);
  if (local_208.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
  }
  bVar38 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar38) {
    bVar38 = -1 < CpuChannel->Enabled;
    if (bVar38) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId4783,"SessionService etc",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x12af);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4783);
    }
    FScopedBootTiming::FScopedBootTiming(&local_170,"SessionService etc");
    if (PRIVATE_GIsRunningCommandlet == false) {
      pFVar13 = ::FName::FName(&local_1c8,"SessionServices");
      FVar2 = *pFVar13;
      pFVar22 = FModuleManager::Get();
      pIVar23 = FModuleManager::LoadModuleChecked(pFVar22,FVar2);
      puVar24 = (undefined8 *)(**(code **)((longlong)*pIVar23 + 0x48))(pIVar23,local_1f8);
      this_00 = &this->SessionService;
      if (this_00 != (TSharedPtr<ISessionService,1> *)puVar24) {
        this_00->Object = (ISessionService *)*puVar24;
        *puVar24 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SessionService).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar24 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0)
      ;
      if (this_00->Object != (ISessionService *)0x0) {
        pIVar25 = TSharedPtr<ISessionService,1>::operator->(this_00);
        (**(code **)((longlong)*pIVar25 + 8))(pIVar25);
      }
    }
    this_01 = ::operator_new(0x10);
    pFVar26 = pFVar29;
    if (this_01 != (FEngineService *)0x0) {
      pFVar26 = (FTraceService *)FEngineService::FEngineService(this_01);
    }
    this->EngineService = (FEngineService *)pFVar26;
    this_02 = ::operator_new(0x38);
    pFVar26 = pFVar29;
    if (this_02 != (FTraceService *)0x0) {
      pFVar26 = FTraceService::FTraceService(this_02);
    }
    this->TraceService = pFVar26;
    FScopedBootTiming::~FScopedBootTiming(&local_170);
    if (bVar38) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4799,
               "IProjectManager::Get().LoadModulesForProject(ELoadingPhase::PostEngineInit)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x12bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4799);
  }
  FScopedBootTiming::FScopedBootTiming
            (&local_1c0,
             "IProjectManager::Get().LoadModulesForProject(ELoadingPhase::PostEngineInit)");
  pIVar27 = IProjectManager::Get();
  cVar11 = (**(code **)((longlong)*pIVar27 + 0x18))(pIVar27,8);
  if (cVar11 != '\0') {
    pIVar28 = IPluginManager::Get();
    cVar11 = (**(code **)((longlong)*pIVar28 + 0x20))(pIVar28);
    if (cVar11 != '\0') {
      FScopedBootTiming::~FScopedBootTiming(&local_1c0);
      if (bVar38) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      SetEngineStartupModuleLoadingComplete();
      this_03 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::EnableBacklog(this_03,false);
      bVar38 = -1 < CpuChannel->Enabled;
      if (bVar38) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4816,"GEngine->Start()",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x12d0);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4816);
      }
      FScopedBootTiming::FScopedBootTiming(&local_158,"GEngine->Start()");
      (**(code **)(GEngine->_padding_ + 0x2d8))();
      FScopedBootTiming::~FScopedBootTiming(&local_158);
      if (bVar38) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FEmbeddedCommunication::ForceTick(0xd,fVar8,fVar7);
      pFVar20 = FPreLoadScreenManager::Get();
      if (pFVar20 == (FPreLoadScreenManager *)0x0) {
LAB_148d94c25:
        bVar38 = IsMoviePlayerEnabled();
        if (bVar38) {
          bVar38 = CpuChannel->Enabled < 0;
          if (!bVar38) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId4830,"WaitForMovieToFinish",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0x12de);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4830);
          }
          FScopedBootTiming::FScopedBootTiming(&local_128,"WaitForMovieToFinish");
          pIVar19 = GetMoviePlayer();
          (**(code **)((longlong)*pIVar19 + 0x58))(pIVar19,0);
          this_07 = &local_128;
          goto LAB_148d94c9e;
        }
      }
      else {
        pFVar20 = FPreLoadScreenManager::Get();
        bVar38 = FPreLoadScreenManager::HasActivePreLoadScreenType(pFVar20,EngineLoadingScreen);
        if (!bVar38) goto LAB_148d94c25;
        bVar38 = CpuChannel->Enabled < 0;
        if (!bVar38) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId4824,"WaitForEngineLoadingScreenToFinish",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                     ,0x12d8);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4824);
        }
        FScopedBootTiming::FScopedBootTiming(&local_140,"WaitForEngineLoadingScreenToFinish");
        pFVar20 = FPreLoadScreenManager::Get();
        FPreLoadScreenManager::SetEngineLoadingComplete(pFVar20,true);
        pFVar20 = FPreLoadScreenManager::Get();
        FPreLoadScreenManager::WaitForEngineLoadingScreenToFinish(pFVar20);
        this_07 = &local_140;
LAB_148d94c9e:
        FScopedBootTiming::~FScopedBootTiming(this_07);
        if (!bVar38) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      FTraceAuxiliary::EnableCommandlineChannels();
      pFVar13 = ::FName::FName(&local_1a8,"Media");
      FVar2 = *pFVar13;
      pFVar22 = FModuleManager::Get();
      pIVar23 = FModuleManager::LoadModule(pFVar22,FVar2,None);
      if (pIVar23 != (IModuleInterface *)0x0) {
        pcVar3 = *(code **)((longlong)*pIVar23 + 0xd0);
        pFVar26 = ::operator_new(8);
        if (pFVar26 != (FTraceService *)0x0) {
          ((TSharedPtr<FMessageEndpoint,1> *)&pFVar26->_padding_)->Object =
               (FMessageEndpoint *)&___7FAppMediaTimeSource__6B_;
          pFVar29 = pFVar26;
        }
        local_330.Object = (FAppMediaTimeSource *)pFVar29;
        TSharedPtr<IMediaTimeSource,1>::TSharedPtr<IMediaTimeSource,1><FAppMediaTimeSource>
                  (&local_2e8,&local_330);
        (*pcVar3)(pIVar23,&local_2e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e8.SharedReferenceCount.ReferenceController);
      }
      FEmbeddedCommunication::ForceTick(0xe,fVar8,fVar7);
      pFVar22 = FModuleManager::Get();
      pFVar13 = ::FName::FName(&local_270,"AutomationWorker");
      FModuleManager::LoadModule(pFVar22,*pFVar13,None);
      pFVar22 = FModuleManager::Get();
      pFVar13 = ::FName::FName(&local_268,"AutomationController");
      FModuleManager::LoadModule(pFVar22,*pFVar13,None);
      pFVar13 = ::FName::FName(&local_260,"AutomationController");
      local_368 = *pFVar13;
      pFVar22 = FModuleManager::Get();
      bVar38 = FModuleManager::IsModuleLoaded(pFVar22,local_368);
      if (!bVar38) {
        ::FName::ToString(&local_368,&local_1e8);
        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("ModuleManager.IsModuleLoaded(ModuleName)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                            ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (bVar38) {
          pcVar3 = (code *)swi(3);
          iVar12 = (*pcVar3)();
          return iVar12;
        }
      }
      pIVar23 = FModuleManager::GetModule(pFVar22,local_368);
      (**(code **)((longlong)*pIVar23 + 0x48))(pIVar23);
      GIsRunning = true;
      FViewport::SetGameRenderingEnabled(true,3);
      FEmbeddedCommunication::ForceTick(0xf,fVar8,fVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::StarvedGameLoop,(FWriteAccessScope *)&local_290);
      local_278 = 0x154f06940;
      puVar24 = UE::Core::Private::DelegateAllocate
                          (0x20,(FDelegateAllocation *)&FCoreDelegates::StarvedGameLoop.field_0x8);
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar30 = FDelegateHandle::GenerateNewID();
        puVar24[2] = uVar30;
        *puVar24 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        puVar24[3] = GameLoopIsStarved;
      }
      if (local_290.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
      }
      pFVar31 = FThreadHeartBeat::Get();
      FThreadHeartBeat::Start(pFVar31);
      FShaderPipelineCache::PauseBatching();
      if (CpuChannel->Enabled < 0) {
        FScopedBootTiming::FScopedBootTiming(&local_2a8,"FCoreDelegates::OnFEngineLoopInitComplete")
        ;
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&FCoreDelegates::OnFEngineLoopInitComplete);
        FScopedBootTiming::~FScopedBootTiming(&local_2a8);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4888,"FCoreDelegates::OnFEngineLoopInitComplete",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x1318);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4888);
        FScopedBootTiming::FScopedBootTiming(&local_2a8,"FCoreDelegates::OnFEngineLoopInitComplete")
        ;
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&FCoreDelegates::OnFEngineLoopInitComplete);
        FScopedBootTiming::~FScopedBootTiming(&local_2a8);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FShaderPipelineCache::ResumeBatching();
      pFVar32 = FActiveExternalProfilerBase::InitActiveProfiler();
      if (pFVar32 != (FExternalProfiler *)0x0) {
        (**(code **)((longlong)*pFVar32 + 0x10))(pFVar32);
      }
      FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates(EndOfEngineInit);
      pFVar31 = FThreadHeartBeat::Get();
      FThreadHeartBeat::InitSettings(pFVar31);
      this_04 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::InitSettings(this_04);
      if (3 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      goto LAB_148d94fdc;
    }
  }
  RequestEngineExit(L"One or more modules failed PostEngineInit");
  FScopedBootTiming::~FScopedBootTiming(&local_1c0);
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar36 = 1;
LAB_148d94fdc:
  FSlowTask::Destroy(&local_d8);
  if (local_d8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_d8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.DefaultMessage.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_05 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_05 == (FThreadStats *)0x0) {
      this_06 = FThreadStatsPool::Get();
      this_05 = FThreadStatsPool::GetFromPool(this_06);
    }
    if (this_05->bWaitForExplicitFlush < this_05->ScopeCount) {
      local_2f8.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
      local_2f8.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_328);
      local_2f8.StatData.Pad[4] = '\0';
      local_2f8.StatData.Pad[5] = '\0';
      local_2f8.StatData.Pad[6] = '\0';
      local_2f8.StatData.Pad[7] = '\0';
      local_2f8.StatData.Pad[0] = local_328.s.LowPart._0_1_;
      local_2f8.StatData.Pad[1] = local_328.s.LowPart._1_1_;
      local_2f8.StatData.Pad[2] = local_328.s.LowPart._2_1_;
      local_2f8.StatData.Pad[3] = local_328.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_05,&local_2f8);
      piVar1 = &this_05->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_05,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_05,false,false);
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_110);
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_320);
  FLLMScope::~FLLMScope(local_res8);
  FBootProfiling::OnInitComplete();
  return iVar36;
}

// Tick @ 148d951d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEngineLoop::Tick(FEngineLoop *this)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  UGameViewportClient *pUVar4;
  FName FVar5;
  FPendingCleanupObjects *this_00;
  code *pcVar6;
  undefined8 uVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  UWorldProxy this_01;
  UEngine *pUVar9;
  FName FVar10;
  longlong *plVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  FLowLevelMemTracker *pFVar18;
  FString *pFVar19;
  FThreadHeartBeat *pFVar20;
  FGameThreadHitchHeartBeatThreaded *pFVar21;
  IGameMoviePlayer *pIVar22;
  FCsvProfiler *pFVar23;
  FWriteBuffer *pFVar24;
  IConsoleManager *pIVar25;
  TStatId TVar26;
  FOutputDeviceRedirector *pFVar27;
  FRenderCommandList *pFVar28;
  FCommandList *pFVar29;
  FRenderCommandTag *pFVar30;
  IRendererModule *pIVar31;
  longlong *plVar32;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar33;
  longlong lVar34;
  UWorld *this_02;
  undefined8 *puVar35;
  ulong64 uVar36;
  TConsoleVariableData<int> *pTVar37;
  AWorldSettings *pAVar38;
  FPlatformFileManager *this_03;
  FSlateApplication *pFVar39;
  FPreLoadScreenManager *pFVar40;
  UClass *pUVar41;
  FAssetCompilingManager *this_04;
  UDemoNetDriver *pUVar42;
  TGraphTask<FExecuteConcurrentWithSlateTickTask> *pTVar43;
  TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *pTVar44;
  FModuleManager *pFVar45;
  IModuleInterface *pIVar46;
  FPageAllocator *this_05;
  FName *pFVar47;
  FThreadSafeStaticStat<FStat_STAT_RHITickTime> FVar48;
  FThreadStats *pFVar49;
  FThreadStatsPool *pFVar50;
  FPendingCleanupObjects *pFVar51;
  FThreadSafeStaticStat<FStat_STAT_DeferredTickTime> FVar52;
  FTSTicker *this_06;
  FThreadManager *this_07;
  FThreadSafeStaticStat<FStat_STAT_Hash_NumObjects> FVar53;
  undefined ***pppuVar54;
  ESlateTickType EVar55;
  ulonglong uVar56;
  UDemoNetDriver *this_08;
  longlong lVar57;
  FScriptContainerElement *pFVar58;
  int iVar59;
  wchar_t *pwVar60;
  FNameEntryId FVar61;
  uint *puVar62;
  int *piVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  float fVar67;
  undefined1 auStackY_798 [32];
  TGraphTask<FExecuteConcurrentWithSlateTickTask> *local_730;
  undefined1 local_728;
  char local_727;
  undefined1 local_726 [6];
  FName local_720;
  FName local_718;
  FName local_710;
  byte local_708;
  FName local_700;
  byte local_6f8;
  UDemoNetDriver *local_6f0;
  TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> local_6e8;
  UDemoNetDriver *local_6d8;
  uint local_6d0;
  FLLMScope local_6cc;
  FLLMScope local_6c8;
  FLLMScope local_6c4;
  undefined1 local_6c0 [8];
  FDelegateAllocation local_6b8;
  FColor_u_0 local_6a8;
  FColor_u_0 local_6a4;
  FName local_6a0;
  ulong64 local_698;
  FName local_690;
  FName local_688;
  byte local_680;
  FName local_678;
  byte local_670;
  longlong *local_668;
  char *pcStack_660;
  TBitArray<FDefaultBitArrayAllocator> *local_658;
  undefined8 uStack_650;
  longlong lStack_648;
  int iStack_640;
  undefined4 uStack_63c;
  FName local_638;
  float local_630;
  float local_62c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_628;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  FStatMessage local_5e8;
  FMemScope local_5d8;
  LARGE_INTEGER local_5d0;
  FMemScope local_5c8;
  FName local_5c0;
  FMemScope local_5b8;
  TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> local_5b0;
  FConstructor local_5a0;
  FStatMessage local_598;
  FStatMessage local_588;
  longlong *local_578;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_570;
  undefined8 uStack_550;
  undefined1 local_548 [12];
  uint uStack_53c;
  TBitArray<FDefaultBitArrayAllocator> *local_538;
  undefined8 uStack_530;
  longlong local_528;
  undefined8 uStack_520;
  <lambda_4> local_518;
  undefined1 local_508 [24];
  longlong lStack_4f0;
  longlong lStack_4e8;
  int local_4e0;
  undefined4 uStack_4dc;
  undefined1 local_4d8 [40];
  int local_4b0;
  undefined4 uStack_4ac;
  FDestructionSentinel local_4a8;
  FDestructionSentinel local_490;
  FDelegateAllocation *local_478;
  FString local_470;
  FName local_460 [3];
  source_location local_448;
  source_location local_428;
  FName local_408;
  FName local_400 [2];
  FString local_3f0;
  TRangedForConstIterator local_3d8;
  TSharedPtr<SWindow,1> local_3a8;
  code *local_398 [2];
  undefined **local_388 [3];
  undefined ***local_370;
  code *local_368 [2];
  undefined **local_358;
  code *pcStack_350;
  undefined8 local_348;
  undefined ***local_340;
  code *local_338 [2];
  undefined **local_328 [3];
  undefined ***local_310;
  code *local_308 [2];
  undefined **local_2f8;
  ulong64 uStack_2f0;
  undefined8 local_2e8;
  undefined ***local_2e0;
  code *local_2d8 [2];
  undefined **local_2c8;
  ulong64 uStack_2c0;
  undefined8 local_2b8;
  undefined ***local_2b0;
  code *local_2a8 [2];
  undefined **local_298;
  ulong64 uStack_290;
  undefined8 local_288;
  undefined ***local_280;
  undefined1 local_278 [16];
  undefined **local_268 [3];
  undefined ***local_250;
  byte local_248;
  undefined1 local_238 [16];
  undefined **local_228;
  code *pcStack_220;
  undefined8 local_218;
  undefined ***local_210;
  byte local_208;
  undefined1 local_1f8 [16];
  undefined **local_1e8 [3];
  undefined ***local_1d0;
  byte local_1c8;
  undefined1 local_1b8 [16];
  undefined **local_1a8;
  ulong64 uStack_1a0;
  undefined8 local_198;
  undefined ***local_190;
  byte local_188;
  undefined1 local_178 [16];
  undefined **local_168;
  ulong64 uStack_160;
  undefined8 local_158;
  undefined ***local_150;
  byte local_148;
  undefined1 local_138 [16];
  code *local_128 [2];
  undefined **local_118;
  ulong64 uStack_110;
  undefined8 local_108;
  undefined ***local_100;
  uchar local_f8;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_e8;
  FScopedSampleMallocChurn local_c8;
  wchar_t local_88 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_798;
  local_718 = (FName)this;
  FGenericPlatformMisc::BeginNamedEvent(&FrameColor,"FEngineLoop::Tick");
  bVar64 = -1 < CpuChannel->Enabled;
  if (bVar64) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5544,"FEngineLoop::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x15a8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5544);
  }
  FScopedSampleMallocChurn::FScopedSampleMallocChurn(&local_c8);
  pFVar18 = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    pFVar18 = FLowLevelMemTracker::Construct();
  }
  FLowLevelMemTracker::UpdateStatsPerFrame(pFVar18,(wchar_t *)0x0);
  FLLMScope::FLLMScope(&local_6c4,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_5b8,EngineMisc,true);
  BeginExitIfRequested();
  if (((GScopedTestExit.Ptr != (FOutputDeviceTestExit *)0x0) && (GIsRequestingExit == false)) &&
     ((GScopedTestExit.Ptr)->FoundExitPhrase != (FString *)0x0)) {
    if (3 < (byte)LogExit._0_1_) {
      pFVar19 = ::FString::FString(&local_3f0,(GScopedTestExit.Ptr)->FoundExitPhrase);
      pFVar2 = (pFVar19->Data).AllocatorInstance.Data;
      (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar19->Data).ArrayNum = 0;
      (pFVar19->Data).ArrayMax = 0;
      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogExit);
      this = (FEngineLoop *)local_718;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
        this = (FEngineLoop *)local_718;
      }
    }
    FWindowsPlatformMisc::RequestExit(true,L"FEngineLoop::Tick.GScopedTestExit");
  }
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"FEngineLoop_HeartBeat");
  if (CpuChannel->Enabled < 0) {
    pFVar20 = FThreadHeartBeat::Get();
    FThreadHeartBeat::HeartBeat(pFVar20);
    pFVar21 = FGameThreadHitchHeartBeatThreaded::Get();
    FGameThreadHitchHeartBeatThreaded::FrameStart(pFVar21,false);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5565,"FEngineLoop_HeartBeat",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x15bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5565);
    pFVar20 = FThreadHeartBeat::Get();
    FThreadHeartBeat::HeartBeat(pFVar20);
    pFVar21 = FGameThreadHitchHeartBeatThreaded::Get();
    FGameThreadHitchHeartBeatThreaded::FrameStart(pFVar21,false);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_Hotfixables");
  if (CpuChannel->Enabled < 0) {
    FGenericPlatformMisc::TickHotfixables();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5573,"Tick_Hotfixables",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x15c5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5573);
    FGenericPlatformMisc::TickHotfixables();
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  LatchRenderThreadConfiguration();
  if (GUseThreadedRendering == false) {
    FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_RenderingTickables");
    bVar65 = -1 < CpuChannel->Enabled;
    if (bVar65) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5583,"Tick_RenderingTickables",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x15cf);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5583);
    }
    bVar12 = IsInRenderingThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x1594,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TickRenderingTickables(&GRHICommandList.CommandListImmediate);
    if (bVar65) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMoviePlayerProxy::BlockingForceFinished();
  bVar65 = IsMoviePlayerEnabled();
  if (bVar65) {
    pIVar22 = GetMoviePlayer();
    cVar13 = (**(code **)((longlong)*pIVar22 + 0x60))(pIVar22);
    if (cVar13 != '\0') {
      pIVar22 = GetMoviePlayer();
      cVar13 = (**(code **)((longlong)*pIVar22 + 0x68))(pIVar22);
      if (cVar13 == '\0') goto LAB_148d95553;
    }
    bVar65 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6766178825421198805>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                        ,0x15d5,
                        "!IsMoviePlayerEnabled() || (GetMoviePlayer()->IsLoadingFinished() && !GetMoviePlayer()->IsMovieCurrentlyPlaying())"
                       );
    if (bVar65) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_148d95553:
  if (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 8))();
  }
  FGenericPlatformMisc::BeginNamedEventFrame();
  uVar36 = GFrameCounter;
  local_698 = GFrameCounter;
  uVar17 = (uint)CpuChannel->Enabled >> 0x1f ^ 1;
  local_6d0 = uVar17;
  if ((CpuChannel->Enabled < 0) || (bVar65 = UE::Trace::IsTracing(), !bVar65)) {
    bVar65 = false;
  }
  else {
    bVar65 = true;
  }
  FAutoNamedEventsToggler::Update(&TraceNamedEventsToggler,bVar65);
  local_88[0] = L'\0';
  local_88[1] = L'\0';
  local_88[2] = L'\0';
  local_88[3] = L'\0';
  local_88[4] = L'\0';
  local_88[5] = L'\0';
  local_88[6] = L'\0';
  local_88[7] = L'\0';
  local_88[8] = L'\0';
  local_88[9] = L'\0';
  local_88[10] = L'\0';
  local_88[0xb] = L'\0';
  local_88[0xc] = L'\0';
  local_88[0xd] = L'\0';
  local_88[0xe] = L'\0';
  local_88[0xf] = L'\0';
  local_88[0x10] = L'\0';
  local_88[0x11] = L'\0';
  local_88[0x12] = L'\0';
  local_88[0x13] = L'\0';
  local_88[0x14] = L'\0';
  local_88[0x15] = L'\0';
  local_88[0x16] = L'\0';
  local_88[0x17] = L'\0';
  local_88[0x18] = L'\0';
  local_88[0x19] = L'\0';
  local_88[0x1a] = L'\0';
  local_88[0x1b] = L'\0';
  local_88[0x1c] = L'\0';
  local_88[0x1d] = L'\0';
  local_88[0x1e] = L'\0';
  local_88[0x1f] = L'\0';
  pFVar23 = FCsvProfiler::Get();
  bVar65 = FCsvProfiler::IsCapturing(pFVar23);
  if (bVar65) {
    pFVar23 = FCsvProfiler::Get();
    FCsvProfiler::GetCaptureFrameNumber(pFVar23);
    pwVar60 = L"Csv%s%d";
  }
  else {
    pwVar60 = L"%s%d";
  }
  TCString<wchar_t>::SnprintfImpl(local_88,0x20,pwVar60);
  bVar65 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuFrameFields>((TLogScope<1> *)local_138);
    pwVar60 = local_88;
    iVar59 = 0;
    wVar1 = local_88[0];
    while (wVar1 != L'\0') {
      pwVar60 = pwVar60 + 1;
      iVar59 = iVar59 + 1;
      wVar1 = *pwVar60;
    }
    UE::Trace::Private::Field_WriteStringWide(0,local_88,iVar59);
    pFVar24 = UE::Trace::Private::Writer_GetBuffer();
    *pFVar24->Cursor = '\x06';
    puVar3 = pFVar24->Cursor;
    pFVar24->Cursor = puVar3 + 1;
    if (pFVar24 != (FWriteBuffer *)local_138._8_8_) {
      pFVar24->Committed = puVar3 + 1;
    }
    *(uchar **)(local_138._8_8_ + 0x28) = *(uchar **)(local_138._8_8_ + 0x20);
    bVar65 = true;
  }
  if (((char)uVar17 == '\0') &&
     (FGenericPlatformMisc::BeginNamedEvent(&FrameColor,local_88), -1 < CpuChannel->Enabled)) {
    bVar12 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (local_88,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1602);
  }
  else {
    bVar12 = false;
  }
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"FEngineLoop_CallAllConsoleVariableSinks");
  if (CpuChannel->Enabled < 0) {
    pIVar25 = IConsoleManager::Get();
    (**(code **)((longlong)*pIVar25 + 0x58))();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5639,"FEngineLoop_CallAllConsoleVariableSinks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1607);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5639);
    pIVar25 = IConsoleManager::Get();
    (**(code **)((longlong)*pIVar25 + 0x58))();
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FMiscTrace::OutputBeginFrame(TraceFrameType_Game);
  local_658 = (TBitArray<FDefaultBitArrayAllocator> *)0x151cea4a0;
  local_668 = (longlong *)0x30000160e;
  pcStack_660 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp";
  TVar26 = FThreadSafeStaticStatInner<FStat_STAT_FrameTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_FrameTime,1> *)&StatPtr_STAT_FrameTime)
  ;
  local_448._0_8_ = local_668;
  local_448._File = pcStack_660;
  local_448._Function = (char *)local_658;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_678,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_448);
  UpdateCoreCsvStats_BeginFrame();
  FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnBeginFrame");
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnBeginFrame);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5668,"FCoreDelegates::OnBeginFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1624);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5668);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnBeginFrame);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"FEngineLoop_FlushThreadedLogs");
  if (CpuChannel->Enabled < 0) {
    pFVar27 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(pFVar27,Async);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5674,"FEngineLoop_FlushThreadedLogs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x162a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5674);
    pFVar27 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(pFVar27,Async);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if ((((FApp::bIsBenchmarking != false) && (*(ulonglong *)((longlong)this + 0x28) != 0)) &&
      (*(ulonglong *)((longlong)this + 0x28) < GFrameCounter)) ||
     ((*(double *)((longlong)this + 0x20) != 0.0 &&
      (*(double *)((longlong)this + 0x20) < *(double *)((longlong)this + 0x18))))) {
    FWindowsPlatformMisc::RequestExit(false,L"FEngineLoop::Tick.Benchmarking");
  }
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"FEngineLoop_UpdateTimeAndHandleMaxTickRate");
  if (CpuChannel->Enabled < 0) {
    (**(code **)(GEngine->_padding_ + 0x300))();
    UEngine::SetSimulationLatencyMarkerStart(uVar36);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5687,"FEngineLoop_UpdateTimeAndHandleMaxTickRate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1637);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5687);
    (**(code **)(GEngine->_padding_ + 0x300))();
    UEngine::SetSimulationLatencyMarkerStart(uVar36);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Render_BeginFrame");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5694,"Render_BeginFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x163e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5694);
  }
  uStack_2f0 = uVar36;
  local_2f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FEngineLoop::Tick'::`51'::<lambda_1>,1,0>::_vftable_;
  local_2e0 = (undefined ***)0x0;
  local_308[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FEngineLoop::Tick'::__l51::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFVar28 = FRenderCommandList::GetInstanceTLS();
  if (pFVar28 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l51::TSTR_BeginFrame5695>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_308);
  }
  else {
    pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
    local_100 = local_2e0;
    local_128[0] = local_308[0];
    local_308[0] = (code *)0x0;
    local_118 = local_2f8;
    uStack_110 = uStack_2f0;
    local_108 = local_2e8;
    local_f8 = '\x02';
    pFVar30 = (FRenderCommandTag *)
              TRenderCommandTag<`FEngineLoop::Tick'::__l51::TSTR_BeginFrame5695>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_128,pFVar30);
    TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
    ::
    ~TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_128);
  }
  if (local_308[0] != (code *)0x0) {
    pppuVar54 = &local_2f8;
    if (local_2e0 != (undefined ***)0x0) {
      pppuVar54 = local_2e0;
    }
    (*(code *)(*pppuVar54)[2])();
  }
  pIVar31 = GetRendererModule();
  plVar32 = (longlong *)(**(code **)((longlong)*pIVar31 + 0xc0))(pIVar31);
  local_628._padding_._0_4_ = 0;
  local_628._padding_._4_4_ = 1;
  local_628.UnvisitedBitMask = 0xffffffff;
  pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar32 + 2);
  local_628.CurrentBitIndex = 0;
  local_628.BaseBitIndex = 0;
  local_628.Array = pTVar8;
  if ((int)plVar32[5] != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_628);
  }
  unique0x10002e22 =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(local_628._padding_._4_4_,(undefined4)local_628._padding_);
  uStack_530 = CONCAT44(local_628.CurrentBitIndex,local_628.UnvisitedBitMask);
  local_528 = CONCAT44(local_628._28_4_,local_628.BaseBitIndex);
  local_4e0 = (int)plVar32[1] - *(int *)((longlong)plVar32 + 0x34);
  local_508._16_8_ = local_628.Array;
  uStack_520._4_4_ = uStack_4dc;
  uStack_520._0_4_ = local_4e0;
  local_538 = local_628.Array;
  local_548._0_8_ = plVar32;
  local_508._0_8_ = plVar32;
  local_508._8_8_ = unique0x10002e22;
  lStack_4f0 = uStack_530;
  lStack_4e8 = local_528;
  pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_508,pTVar8,
                       (int)plVar32[5]);
  pcStack_660 = (char *)pTVar33->_padding_;
  local_658 = pTVar33->Array;
  uStack_650._0_4_ = pTVar33->UnvisitedBitMask;
  uStack_650._4_4_ = pTVar33->CurrentBitIndex;
  lStack_648 = *(longlong *)&pTVar33->BaseBitIndex;
  iStack_640 = (int)plVar32[1] - *(int *)((longlong)plVar32 + 0x34);
  local_3d8._44_4_ = uStack_63c;
  local_3d8.InitialNum = iStack_640;
  local_668 = plVar32;
  local_3d8._padding_ = (longlong)plVar32;
  local_3d8._padding_ = (longlong)pcStack_660;
  local_3d8._padding_ = (longlong)local_658;
  local_3d8._padding_ = uStack_650;
  local_3d8._padding_ = lStack_648;
  bVar14 = TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_548,&local_3d8);
  if (bVar14) {
    do {
      local_370 = (undefined ***)0x0;
      local_388[0] = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FEngineLoop::Tick'::`55'::<lambda_2>,1,0>::_vftable_;
      local_398[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FEngineLoop::Tick'::__l55::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_388[1] = *(undefined ***)
                      (*(longlong *)local_548._0_8_ + (longlong)uStack_530._4_4_ * 0x10);
      pFVar28 = FRenderCommandList::GetInstanceTLS();
      if (pFVar28 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l55::TSTR_FScene_StartFrame5702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_398);
      }
      else {
        pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
        local_278._0_8_ = local_398[0];
        local_398[0] = (code *)0x0;
        local_250 = local_370;
        local_370 = (undefined ***)0x0;
        local_268[0] = local_388[0];
        local_268[1] = local_388[1];
        local_268[2] = local_388[2];
        local_248 = 2;
        pFVar30 = (FRenderCommandTag *)
                  TRenderCommandTag<`FEngineLoop::Tick'::__l55::TSTR_FScene_StartFrame5702>::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_278,pFVar30);
        uVar56 = (ulonglong)local_248;
        if ((2 < uVar56) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar56] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_278._0_8_ != (code *)0x0) {
            pppuVar54 = (undefined ***)(local_278 + 0x10);
            if (local_250 != (undefined ***)0x0) {
              pppuVar54 = local_250;
            }
            (*(code *)(*pppuVar54)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar56])(local_278);
        }
      }
      if (local_398[0] != (code *)0x0) {
        pppuVar54 = local_388;
        if (local_370 != (undefined ***)0x0) {
          pppuVar54 = local_370;
        }
        (*(code *)(*pppuVar54)[2])();
      }
      uStack_530 = CONCAT44(uStack_530._4_4_,(uint)uStack_530 & ~uStack_53c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_548 + 8));
      bVar14 = TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_548,&local_3d8);
    } while (bVar14);
  }
  pTVar37 = (TConsoleVariableData<int> *)0x0;
  UE::RenderCommandPipe::StartRecording();
  pUVar4 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if ((pUVar4 != (UGameViewportClient *)0x0) &&
     (lVar34 = (**(code **)(pUVar4->_padding_ + 0x180))(), lVar34 != 0)) {
    this_02 = (UWorld *)
              (**(code **)(((GEngine->GameViewport).field0_0x0.DebugPtr)->_padding_ + 0x180))();
    bVar14 = UWorld::IsCameraMoveable(this_02);
    if (bVar14) {
      UEngine::EmitDynamicResolutionEvent(GEngine,BeginFrame);
    }
  }
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_PerformanceMonitoring");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5721,"Tick_PerformanceMonitoring",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1659);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5721);
  }
  UEngine::TickPerformanceMonitoring(GEngine,(float)(double)FApp::DeltaTime);
  ResetAsyncLoadingStats();
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Malloc_UpdateStats");
  if (CpuChannel->Enabled < 0) {
    (**(code **)((longlong)*UE::Private::GMalloc + 0xa0))();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5731,"Malloc_UpdateStats",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1663);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5731);
    (**(code **)((longlong)*UE::Private::GMalloc + 0xa0))();
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if ((local_670 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_670 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_670 & 4) != 0) {
    FThreadStats::AddMessage(local_678,CycleScopeEnd);
  }
  local_670 = 0;
  local_6c0 = (undefined1  [8])0x0;
  local_6b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c0,
             (FWriteAccessScope *)&local_490);
  local_478 = &local_6b8;
  puVar35 = UE::Core::Private::DelegateAllocate(0x20,&local_6b8);
  if (puVar35 != (undefined8 *)0x0) {
    *puVar35 = &
               ___7__TCommonDelegateInstanceState___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar36 = FDelegateHandle::GenerateNewID();
    puVar35[2] = uVar36;
    *puVar35 = &___7__TBaseStaticDelegateInstance___A6AX_N_JH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar35[3] = AdvanceRenderingThreadStatsGT;
  }
  if (local_490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
  }
  UE::Stats::FStats::AdvanceFrame
            (false,(TDelegate<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy> *)local_6c0
            );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c0,
             (FWriteAccessScope *)&local_4a8);
  if ((local_6b8.DelegateSize != 0) &&
     (local_6b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_6b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_6b8,0,0,0x10);
    local_6b8.DelegateSize = 0;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  if (local_6b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_6b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6c0);
  local_658 = (TBitArray<FDefaultBitArrayAllocator> *)0x151cea4a0;
  local_668 = (longlong *)0x30000166c;
  pcStack_660 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp";
  TVar26 = FThreadSafeStaticStatInner<FStat_STAT_FrameTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_FrameTime,1> *)&StatPtr_STAT_FrameTime)
  ;
  local_428._0_8_ = local_668;
  local_428._File = pcStack_660;
  local_428._Function = (char *)local_658;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_688,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_428);
  CalculateFPSTimings();
  local_340 = (undefined ***)0x0;
  local_358 = &
              ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_350 = `FEngineLoop::Tick'::__l61::<lambda_3>::<lambda_invoker_cdecl>;
  local_368[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                 ::Call;
  pFVar28 = FRenderCommandList::GetInstanceTLS();
  if (pFVar28 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l61::TSTR_ResetDeferredUpdates5746>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_368);
  }
  else {
    pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
    local_238._0_8_ = local_368[0];
    local_368[0] = (code *)0x0;
    local_210 = local_340;
    local_228 = local_358;
    pcStack_220 = pcStack_350;
    local_218 = local_348;
    local_208 = 2;
    pFVar30 = (FRenderCommandTag *)
              TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_ResetDeferredUpdates5746>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_238,pFVar30);
    uVar56 = (ulonglong)local_208;
    if ((2 < uVar56) &&
       (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar66)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar56] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_238._0_8_ != (code *)0x0) {
        pppuVar54 = (undefined ***)(local_238 + 0x10);
        if (local_210 != (undefined ***)0x0) {
          pppuVar54 = local_210;
        }
        (*(code *)(*pppuVar54)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar56])(local_238);
    }
  }
  if (local_368[0] != (code *)0x0) {
    pppuVar54 = &local_358;
    if (local_340 != (undefined ***)0x0) {
      pppuVar54 = local_340;
    }
    (*(code *)(*pppuVar54)[2])();
  }
  if (GUELibraryOverrideSettings.bIsEmbedded == false) {
    UEngine::SetInputSampleLatencyMarker(local_698);
    FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"FEngineLoop_PumpMessages");
    if (CpuChannel->Enabled < 0) {
      FWindowsPlatformApplicationMisc::PumpMessages(true);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5758,"FEngineLoop_PumpMessages",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x167e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5758);
      FWindowsPlatformApplicationMisc::PumpMessages(true);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"FEngineLoop_Idle");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5764,"FEngineLoop_Idle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1684);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5764);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar25 = IConsoleManager::Get();
    plVar32 = (longlong *)(**(code **)((longlong)*pIVar25 + 0xc0))(pIVar25);
    if (plVar32 != (longlong *)0x0) {
      pTVar37 = (TConsoleVariableData<int> *)(**(code **)(*plVar32 + 0x68))(plVar32);
    }
    CVarIdleWhenNotForeground = pTVar37;
    _Init_thread_footer(&::_TSS0);
  }
  bVar14 = false;
  iVar59 = TConsoleVariableData<int>::GetValueOnGameThread(CVarIdleWhenNotForeground);
  if ((iVar59 != 0) && (bVar15 = FApp::HasFocus(), pUVar9 = GEngine, !bVar15)) {
    bVar14 = true;
    pFVar58 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    iVar59 = (GEngine->WorldList).Array.ArrayNum;
    pFVar2 = pFVar58 + (longlong)iVar59 * 8;
    while( true ) {
      if ((pUVar9->WorldList).Array.ArrayNum != iVar59) {
        local_728 = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_728);
      }
      if (pFVar58 == pFVar2) {
        FWindowsPlatformProcess::Sleep(__real_3dcccccd);
        goto LAB_148d963df;
      }
      bVar15 = UWorld::AreAlwaysLoadedLevelsLoaded(*(UWorld **)(*(longlong *)pFVar58 + 0x2c0));
      if (!bVar15) break;
      pFVar58 = pFVar58 + 8;
    }
    bVar14 = false;
  }
LAB_148d963df:
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  this_01 = GWorld;
  if (GNewWorldToMetersScale != 0.0) {
    if ((GWorld.World != (UWorld *)0x0) &&
       (pAVar38 = UWorld::GetWorldSettings(GWorld.World,false,true), fVar67 = GNewWorldToMetersScale
       , GNewWorldToMetersScale != pAVar38->WorldToMeters)) {
      pAVar38 = UWorld::GetWorldSettings(this_01.World,false,true);
      pAVar38->WorldToMeters = fVar67;
    }
    GNewWorldToMetersScale = 0.0;
  }
  this_03 = FPlatformFileManager::Get();
  FPlatformFileManager::TickActivePlatformFile(this_03);
  FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnSamplingInput");
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnSamplingInput);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5807,"FCoreDelegates::OnSamplingInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x16af);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5807);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnSamplingInput);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) && (!bVar14)) {
    if (__CsvProfilerStat5814 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("Input");
      __CsvProfilerStat5814 = true;
    }
    FCsvProfiler::BeginExclusiveStat("Input","CSV_Input");
    FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_SlateInput");
    bVar66 = -1 < CpuChannel->Enabled;
    if (bVar66) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5816,"Tick_SlateInput",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x16b8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5816);
    }
    FLLMScope::FLLMScope(&local_6cc,UI,false,None,Default,true);
    FMemScope::FMemScope(&local_5c8,UI,true);
    pFVar39 = FSlateApplication::Get();
    if (CpuChannel->Enabled < 0) {
      FSlateApplication::PollGameDeviceState(pFVar39);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5821,"PollGameDeviceState",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x16bd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5821);
      FSlateApplication::PollGameDeviceState(pFVar39);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (CpuChannel->Enabled < 0) {
      FSlateApplication::FinishedInputThisFrame(pFVar39);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5826,"FinishedInputThisFrame",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x16c2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5826);
      FSlateApplication::FinishedInputThisFrame(pFVar39);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_5c8);
    FLLMScope::~FLLMScope(&local_6cc);
    if (bVar66) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    FCsvProfiler::EndExclusiveStat("Input");
  }
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_Engine");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5832,"Tick_Engine",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x16c8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5832);
  }
  (**(code **)(GEngine->_padding_ + 0x2f8))(GEngine,(float)(double)FApp::DeltaTime);
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  pFVar40 = FPreLoadScreenManager::Get();
  if (pFVar40 == (FPreLoadScreenManager *)0x0) {
    bVar66 = IsMoviePlayerEnabled();
    if (bVar66) {
      if (CpuChannel->Enabled < 0) {
        pIVar22 = GetMoviePlayer();
        (**(code **)((longlong)*pIVar22 + 0x58))(pIVar22,1);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId5876,"WaitForMovieToFinish",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x16f4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5876);
        pIVar22 = GetMoviePlayer();
        (**(code **)((longlong)*pIVar22 + 0x58))(pIVar22,1);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  else {
    pFVar40 = FPreLoadScreenManager::Get();
    bVar66 = FPreLoadScreenManager::HasRegisteredPreLoadScreenType(pFVar40,EngineLoadingScreen);
    if (bVar66) {
      pFVar40 = FPreLoadScreenManager::Get();
      bVar66 = FPreLoadScreenManager::HasActivePreLoadScreenType(pFVar40,EngineLoadingScreen);
      if (bVar66) {
        pFVar40 = FPreLoadScreenManager::Get();
        FPreLoadScreenManager::WaitForEngineLoadingScreenToFinish(pFVar40);
      }
      pUVar9 = GEngine;
      if (GEngine != (UEngine *)0x0) {
        pUVar41 = Z_Construct_UClass_UGameEngine_NoRegister();
        lVar34 = pUVar9->_padding_;
        iVar59 = (int)pUVar41->_padding_;
        if ((iVar59 <= *(int *)(lVar34 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar59 * 8) ==
            &pUVar41->_padding_)) {
          UGameEngine::SwitchGameWindowToUseGameViewport((UGameEngine *)pUVar9);
        }
      }
    }
    bVar66 = IsMoviePlayerEnabled();
    if (bVar66) {
      pIVar22 = GetMoviePlayer();
      cVar13 = (**(code **)((longlong)*pIVar22 + 0x68))(pIVar22);
      if (cVar13 == '\0') {
        pFVar39 = FSlateApplication::Get();
        lVar34 = *(longlong *)&pFVar39->field_0x60;
        if (lVar34 != 0) {
          pIVar22 = GetMoviePlayer();
          pcVar6 = *(code **)((longlong)*pIVar22 + 8);
          pFVar40 = FPreLoadScreenManager::Get();
          FPreLoadScreenManager::GetRenderWindow(pFVar40,&local_3a8);
          (*pcVar6)(pIVar22,lVar34);
        }
      }
    }
    FPreLoadScreenManager::Destroy();
  }
  this_04 = FAssetCompilingManager::Get();
  FAssetCompilingManager::ProcessAsyncTasks(this_04,true);
  FMoviePlayerProxy::BlockingForceFinished();
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) && (!bVar14)) {
    FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"ProcessLocalPlayerSlateOperations");
    if (CpuChannel->Enabled < 0) {
      ProcessLocalPlayerSlateOperations((FEngineLoop *)local_718);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5889,"ProcessLocalPlayerSlateOperations",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1701);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5889);
      ProcessLocalPlayerSlateOperations((FEngineLoop *)local_718);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    pFVar39 = FSlateApplication::Get();
    FSlateApplication::Tick(pFVar39,PlatformAndInput);
  }
  pUVar42 = (UDemoNetDriver *)0x0;
  local_730 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0;
  local_6f0 = (UDemoNetDriver *)0x0;
  local_727 = (**(code **)(GEngine->_padding_ + 0x550))();
  pUVar4 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if ((pUVar4 == (UGameViewportClient *)0x0) ||
     (lVar34 = (**(code **)(pUVar4->_padding_ + 0x180))(), lVar34 == 0)) {
    local_6d8 = (UDemoNetDriver *)0x0;
    this_08 = pUVar42;
LAB_148d96931:
    bVar66 = false;
  }
  else {
    this_08 = *(UDemoNetDriver **)(lVar34 + 0x140);
    local_6d8 = this_08;
    if ((this_08 == (UDemoNetDriver *)0x0) ||
       (iVar59 = TConsoleVariableData<int>::GetValueOnGameThread
                           (CVarDoAsyncEndOfFrameTasksValidateReplicatedProperties.Ref), iVar59 == 0
       )) goto LAB_148d96931;
    bVar66 = true;
  }
  if (((local_727 == '\0') ||
      (fVar67 = (float)(double)FApp::DeltaTime, this_08 == (UDemoNetDriver *)0x0)) ||
     (bVar15 = UDemoNetDriver::ShouldTickFlushAsyncEndOfFrame(this_08), !bVar15)) {
LAB_148d96b4b:
    local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6e8.ArrayNum = 0;
    local_6e8.ArrayMax = 0;
    if (!bVar66) goto LAB_148d96bd2;
  }
  else {
    pUVar42 = (UDemoNetDriver *)FGenericPlatformProcess::GetSynchEventFromPool(false);
    local_6f0 = pUVar42;
    if ((pUVar42 == (UDemoNetDriver *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ConcurrentTaskCompleteEvent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                            ,0x171e,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_5a0.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_518.CurrentDemoNetDriver = this_08;
    local_518.DeltaSeconds = fVar67;
    pTVar43 = TGraphTask<FExecuteConcurrentWithSlateTickTask>::FConstructor::
              ConstructAndHoldImpl<_FEngineLoop::Tick_::__l127::<lambda_4>,FEvent_*_&>
                        (&local_5a0,&local_518,(FEvent **)&local_6f0);
    if (pTVar43 == (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConcurrentTask.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                          ,0x172e,L"");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      LOCK();
      *(int *)&pTVar43->_padding_ = (int)pTVar43->_padding_ + 1;
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar43,0x120);
    }
    local_730 = pTVar43;
    if (!bVar66) goto LAB_148d96b4b;
    if (__CsvProfilerStat5939 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/ConcurrentWithSlate");
      __CsvProfilerStat5939 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/ConcurrentWithSlate","CsvEventWait/ConcurrentWithSlate",
               "CsvEventWait/ConcurrentWithSlate (Non-CP)");
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5941,"ConcurrentWithSlateTickTasks_Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1735);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5941);
    }
    if ((pUVar42 == (UDemoNetDriver *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ConcurrentTaskCompleteEvent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                            ,0x1736,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)pUVar42 + 0x20))(pUVar42,0xffffffff);
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)pUVar42);
    pUVar42 = (UDemoNetDriver *)0x0;
    local_6f0 = (UDemoNetDriver *)0x0;
    if (pTVar43 != (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
      local_730 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0;
      LOCK();
      plVar32 = &pTVar43->_padding_;
      lVar34 = *plVar32;
      *(int *)plVar32 = (int)*plVar32 + -1;
      UNLOCK();
      if ((int)lVar34 == 1) {
        (**(code **)pTVar43->_padding_)(pTVar43,1);
      }
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FCsvProfiler::EndSetWaitStat();
  }
  local_6e8.ArrayNum = 0;
  local_6e8.ArrayMax = 0;
  local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar44 = UDemoNetDriver::SavePropertyState(local_6d8,&local_5b0);
  if (&local_6e8 != pTVar44) {
    DestructItems<FDemoSavedRepObjectState,int>
              ((FDemoSavedRepObjectState *)local_6e8.AllocatorInstance.Data,local_6e8.ArrayNum);
    if ((FDemoSavedRepObjectState *)local_6e8.AllocatorInstance.Data !=
        (FDemoSavedRepObjectState *)0x0) {
      FMemory::Free(local_6e8.AllocatorInstance.Data);
    }
    local_6e8.AllocatorInstance.Data = (pTVar44->AllocatorInstance).Data;
    (pTVar44->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_6e8.ArrayNum = pTVar44->ArrayNum;
    local_6e8.ArrayMax = pTVar44->ArrayMax;
    pTVar44->ArrayNum = 0;
    pTVar44->ArrayMax = 0;
  }
  DestructItems<FDemoSavedRepObjectState,int>
            ((FDemoSavedRepObjectState *)local_5b0.AllocatorInstance.Data,local_5b0.ArrayNum);
  if ((FDemoSavedRepObjectState *)local_5b0.AllocatorInstance.Data !=
      (FDemoSavedRepObjectState *)0x0) {
    FMemory::Free(local_5b0.AllocatorInstance.Data);
  }
LAB_148d96bd2:
  pTVar43 = local_730;
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) && (!bVar14)) {
    cVar13 = (**(code **)(GEngine->_padding_ + 0x338))();
    FMoviePlayerProxy::SetIsSlateThreadAllowed(false);
    pFVar39 = FSlateApplication::Get();
    EVar55 = TimeAndWidgets;
    if (cVar13 != '\0') {
      EVar55 = Time;
    }
    FSlateApplication::Tick(pFVar39,EVar55);
    FMoviePlayerProxy::SetIsSlateThreadAllowed(true);
  }
  if (((bVar66) && (bVar66 = UDemoNetDriver::ComparePropertyState(local_6d8,&local_6e8), bVar66)) &&
     (4 < (byte)LogInit._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (local_730 != (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
    if (__CsvProfilerStat5982 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/ConcurrentWithSlate");
      __CsvProfilerStat5982 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/ConcurrentWithSlate","CsvEventWait/ConcurrentWithSlate",
               "CsvEventWait/ConcurrentWithSlate (Non-CP)");
    bVar66 = -1 < CpuChannel->Enabled;
    if (bVar66) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5984,"ConcurrentWithSlateTickTasks_Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1760);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5984);
    }
    if ((pUVar42 == (UDemoNetDriver *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ConcurrentTaskCompleteEvent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                            ,0x1761,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)pUVar42 + 0x20))(pUVar42,0xffffffff);
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)pUVar42);
    local_6f0 = (UDemoNetDriver *)0x0;
    local_730 = (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0;
    LOCK();
    plVar32 = &pTVar43->_padding_;
    lVar34 = *plVar32;
    *(int *)plVar32 = (int)*plVar32 + -1;
    UNLOCK();
    if ((int)lVar34 == 1) {
      (**(code **)pTVar43->_padding_)(pTVar43,1);
    }
    if (bVar66) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FCsvProfiler::EndSetWaitStat();
  }
  ClearPendingStatGroups();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_AutomationWorker");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6014,"Tick_AutomationWorker",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x177e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6014);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&AutomationWorkerModuleName,L"AutomationWorker");
    _Init_thread_footer(&::_TSS1);
  }
  pFVar45 = FModuleManager::Get();
  bVar14 = FModuleManager::IsModuleLoaded(pFVar45,AutomationWorkerModuleName);
  if (bVar14) {
    local_6a0 = AutomationWorkerModuleName;
    pFVar45 = FModuleManager::Get();
    bVar14 = FModuleManager::IsModuleLoaded(pFVar45,local_6a0);
    if (!bVar14) {
      ::FName::ToString(&local_6a0,&local_470);
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ModuleManager.IsModuleLoaded(ModuleName)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                          ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar46 = FModuleManager::GetModule(pFVar45,local_6a0);
    (**(code **)((longlong)*pIVar46 + 0x40))(pIVar46);
  }
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Render_UpdateFrame");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6024,"Render_UpdateFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1788);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6024);
  }
  UE::RenderCommandPipe::StopRecording(&local_e8);
  if (local_e8.AllocatorInstance.SecondaryData.Data != (uint *)0x0) {
    puVar62 = local_e8.AllocatorInstance.SecondaryData.Data + -2;
    MemoryTrace_Free((ulong64)puVar62,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar18 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar18 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar18,Default,puVar62,FMalloc,true);
    }
    piVar63 = (int *)((longlong)puVar62 - (ulonglong)*puVar62);
    LOCK();
    iVar59 = *piVar63;
    *piVar63 = *piVar63 + -1;
    UNLOCK();
    if (iVar59 == 1) {
      lVar34 = *(longlong *)(piVar63 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar63,0,0);
      if (lVar34 - (longlong)piVar63 == 0x10000) {
        this_05 = FPageAllocator::Get();
        FPageAllocator::Free(this_05,piVar63);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar63);
      }
    }
  }
  pIVar31 = GetRendererModule();
  plVar32 = (longlong *)(**(code **)((longlong)*pIVar31 + 0xc0))(pIVar31);
  local_608._padding_._4_4_ = 1;
  local_608.UnvisitedBitMask = 0xffffffff;
  pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar32 + 2);
  local_608._padding_._0_4_ = 0;
  local_608.CurrentBitIndex = 0;
  local_608.BaseBitIndex = 0;
  local_608.Array = pTVar8;
  if ((int)plVar32[5] != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
  }
  TStack_570._padding_ = CONCAT44(local_608._padding_._4_4_,(undefined4)local_608._padding_);
  TStack_570.CurrentBitIndex = local_608.CurrentBitIndex;
  TStack_570.UnvisitedBitMask = local_608.UnvisitedBitMask;
  TStack_570._28_4_ = local_608._28_4_;
  TStack_570.BaseBitIndex = local_608.BaseBitIndex;
  local_4b0 = (int)plVar32[1] - *(int *)((longlong)plVar32 + 0x34);
  local_4d8._16_8_ = local_608.Array;
  uStack_550 = CONCAT44(uStack_4ac,local_4b0);
  TStack_570.Array = local_608.Array;
  local_578 = plVar32;
  local_4d8._0_8_ = plVar32;
  local_4d8._8_8_ = TStack_570._padding_;
  local_4d8._24_8_ = TStack_570._16_8_;
  local_4d8._32_8_ = TStack_570._24_8_;
  pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_4d8,pTVar8,
                       (int)plVar32[5]);
  uVar7._0_4_ = pTVar33->UnvisitedBitMask;
  uVar7._4_4_ = pTVar33->CurrentBitIndex;
  lStack_648 = *(longlong *)&pTVar33->BaseBitIndex;
  pcStack_660 = (char *)pTVar33->_padding_;
  pTVar8 = pTVar33->Array;
  local_6d8 = (UDemoNetDriver *)CONCAT44(local_6d8._4_4_,uVar7._4_4_);
  local_658 = pTVar8;
  uStack_650 = uVar7;
  while( true ) {
    plVar11 = local_578;
    if ((int)local_578[1] - *(int *)((longlong)local_578 + 0x34) != (int)uStack_550) {
      local_726[0] = 0;
      `TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_726);
    }
    if (((TStack_570.CurrentBitIndex == uVar7._4_4_) && (TStack_570.Array == pTVar8)) &&
       (plVar11 == plVar32)) break;
    local_310 = (undefined ***)0x0;
    local_328[0] = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FEngineLoop::Tick'::`206'::<lambda_5>,1,0>::_vftable_;
    local_338[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FEngineLoop::Tick'::__l206::<lambda_5>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_328[1] = *(undefined ***)(*plVar11 + (longlong)TStack_570.CurrentBitIndex * 0x10);
    pFVar28 = FRenderCommandList::GetInstanceTLS();
    if (pFVar28 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l206::TSTR_FScene_EndFrame6030>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_338);
    }
    else {
      pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
      local_1f8._0_8_ = local_338[0];
      local_338[0] = (code *)0x0;
      local_1d0 = local_310;
      local_310 = (undefined ***)0x0;
      local_1e8[0] = local_328[0];
      local_1e8[1] = local_328[1];
      local_1e8[2] = local_328[2];
      local_1c8 = 2;
      pFVar30 = (FRenderCommandTag *)
                TRenderCommandTag<`FEngineLoop::Tick'::__l206::TSTR_FScene_EndFrame6030>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_1f8,pFVar30);
      uVar56 = (ulonglong)local_1c8;
      if ((2 < uVar56) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar56] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_1f8._0_8_ != (code *)0x0) {
          pppuVar54 = (undefined ***)(local_1f8 + 0x10);
          if (local_1d0 != (undefined ***)0x0) {
            pppuVar54 = local_1d0;
          }
          (*(code *)(*pppuVar54)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar56])(local_1f8);
      }
    }
    if (local_338[0] != (code *)0x0) {
      pppuVar54 = local_328;
      if (local_310 != (undefined ***)0x0) {
        pppuVar54 = local_310;
      }
      (*(code *)(*pppuVar54)[2])();
    }
    TStack_570.UnvisitedBitMask = TStack_570.UnvisitedBitMask & ~TStack_570._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_570);
  }
  FVar48 = StatPtr_STAT_RHITickTime;
  if (StatPtr_STAT_RHITickTime == (FThreadSafeStaticStat<FStat_STAT_RHITickTime>)0x0) {
    pFVar47 = ::FName::FName(local_400,"STAT_RHITickTime");
    FVar48 = (FThreadSafeStaticStat<FStat_STAT_RHITickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITickTime,*pFVar47,
                        L"RHI Game Tick","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_710.ComparisonIndex.Value = 0;
  local_710.Number = 0;
  local_708 = 0;
  FVar5 = *(FName *)FVar48;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6a8._s_0,(char *)*(FName *)((longlong)FVar48 + 0x10));
      local_708 = local_708 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_638.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_638.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_638,(wchar_t *)*(FName *)((longlong)FVar48 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x1796);
        local_708 = local_708 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_710 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_708 = local_708 | 4;
    }
  }
  fVar67 = (float)(double)FApp::DeltaTime;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `void___cdecl_RHITick(float)'::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`void___cdecl_RHITick(float)'::__l2::_thread_safe_static_guard_0__),
     `void___cdecl_RHITick(float)'::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`void___cdecl_RHITick(float)'::__l2::LLMScope_Name1333,L"RHIMisc/RHITick");
    _Init_thread_footer(&`void___cdecl_RHITick(float)'::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (&local_6c8,`void___cdecl_RHITick(float)'::__l2::LLMScope_Name1333,false,None,Default,
             true);
  FMemScope::FMemScope(&local_5d8,&`void___cdecl_RHITick(float)'::__l2::LLMScope_Name1333,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x338))(GDynamicRHI,fVar67);
  FMemScope::~FMemScope(&local_5d8);
  FLLMScope::~FLLMScope(&local_6c8);
  if ((local_708 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_708 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar5 = local_710;
  if (((((local_708 & 4) != 0) && (local_710 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar49 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar49 == (FThreadStats *)0x0) {
      pFVar50 = FThreadStatsPool::Get();
      pFVar49 = FThreadStatsPool::GetFromPool(pFVar50);
    }
    if (pFVar49->bWaitForExplicitFlush < pFVar49->ScopeCount) {
      local_5e8.NameAndInfo.Index = FVar5.ComparisonIndex.Value;
      local_5e8.NameAndInfo.Number = FVar5.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_5d0);
      local_5e8.StatData.Pad[4] = '\0';
      local_5e8.StatData.Pad[5] = '\0';
      local_5e8.StatData.Pad[6] = '\0';
      local_5e8.StatData.Pad[7] = '\0';
      local_5e8.StatData.Pad[0] = local_5d0.s.LowPart._0_1_;
      local_5e8.StatData.Pad[1] = local_5d0.s.LowPart._1_1_;
      local_5e8.StatData.Pad[2] = local_5d0.s.LowPart._2_1_;
      local_5e8.StatData.Pad[3] = local_5d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar49,&local_5e8);
      piVar63 = &pFVar49->ScopeCount;
      *piVar63 = *piVar63 + -1;
      if (*piVar63 == 0) {
        FThreadStats::Flush(pFVar49,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar49,false,false);
      }
    }
  }
  local_708 = 0;
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  UEngine::SetSimulationLatencyMarkerEnd(local_698);
  FVar5 = local_718;
  if (5 < GFrameCounter) {
    *(double *)((longlong)local_718 + 0x18) =
         (double)FApp::DeltaTime + *(double *)((longlong)local_718 + 0x18);
  }
  this_00 = *(FPendingCleanupObjects **)((longlong)local_718 + 0x38);
  pFVar51 = GetPendingCleanupObjects();
  *(FPendingCleanupObjects **)((longlong)FVar5 + 0x38) = pFVar51;
  FFrameEndSync::Sync(EndFrame);
  FVar52 = StatPtr_STAT_DeferredTickTime;
  if (StatPtr_STAT_DeferredTickTime == (FThreadSafeStaticStat<FStat_STAT_DeferredTickTime>)0x0) {
    pFVar47 = ::FName::FName(&local_408,"STAT_DeferredTickTime");
    FVar52 = (FThreadSafeStaticStat<FStat_STAT_DeferredTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeferredTickTime,*pFVar47,
                        L"Deferred Tick Time","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_700.ComparisonIndex.Value = 0;
  local_700.Number = 0;
  local_6f8 = 0;
  FVar5 = *(FName *)FVar52;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6a4._s_0,(char *)*(FName *)((longlong)FVar52 + 0x10));
      local_6f8 = local_6f8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_720.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_720.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_720,(wchar_t *)*(FName *)((longlong)FVar52 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x17af);
        local_6f8 = local_6f8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_718 = FVar5;
      local_700 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_6f8 = local_6f8 | 4;
    }
  }
  if (__CsvProfilerStat6064 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("DeferredTickTime");
    __CsvProfilerStat6064 = true;
  }
  FCsvProfiler::BeginExclusiveStat("DeferredTickTime","CSV_DeferredTickTime");
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"DeletePendingCleanupObjects");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6068,"DeletePendingCleanupObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x17b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6068);
  }
  if (this_00 != (FPendingCleanupObjects *)0x0) {
    FPendingCleanupObjects::~FPendingCleanupObjects(this_00);
    ::operator_delete(this_00,0x10);
  }
  DeleteLoaders();
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_Core");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6077,"Tick_Core",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x17bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6077);
  }
  this_06 = FTSTicker::GetCoreTicker();
  FTSTicker::Tick(this_06,(float)(double)FApp::DeltaTime);
  this_07 = FThreadManager::Get();
  FThreadManager::Tick(this_07);
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_DeferredCommands");
  if (CpuChannel->Enabled < 0) {
    UEngine::TickDeferredCommands(GEngine);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6083,"Tick_DeferredCommands",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x17c3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6083);
    UEngine::TickDeferredCommands(GEngine);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FCsvProfiler::EndExclusiveStat("DeferredTickTime");
  if ((local_6f8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_6f8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_6f8 & 4) != 0) {
    FThreadStats::AddMessage(local_700,CycleScopeEnd);
  }
  local_6f8 = 0;
  FMoviePlayerProxy::BlockingForceFinished();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&MediaModuleName,L"Media");
    _Init_thread_footer(&::_TSS3);
  }
  FVar5 = MediaModuleName;
  pFVar45 = FModuleManager::Get();
  pIVar46 = FModuleManager::LoadModule(pFVar45,FVar5,None);
  if (pIVar46 != (IModuleInterface *)0x0) {
    FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Tick_PostRender");
    if (CpuChannel->Enabled < 0) {
      (**(code **)((longlong)*pIVar46 + 0xe8))(pIVar46);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6095,"Tick_PostRender",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x17cf);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6095);
      (**(code **)((longlong)*pIVar46 + 0xe8))(pIVar46);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnEndFrame");
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnEndFrame);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6101,"FCoreDelegates::OnEndFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x17d5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6101);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnEndFrame);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  GFrameCounter = GFrameCounter + 1;
  local_2c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FEngineLoop::Tick'::`61'::<lambda_6>,1,0>::_vftable_;
  local_2d8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FEngineLoop::Tick'::__l61::<lambda_6>,void,FRHICommandListImmediate_&>
                 ::Call;
  local_2b0 = (undefined ***)0x0;
  uStack_2c0 = GFrameCounter;
  pFVar28 = FRenderCommandList::GetInstanceTLS();
  if (pFVar28 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l61::TSTR_FrameCounter6108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_2d8);
  }
  else {
    pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
    local_1b8._0_8_ = local_2d8[0];
    local_2d8[0] = (code *)0x0;
    local_190 = local_2b0;
    local_1a8 = local_2c8;
    uStack_1a0 = uStack_2c0;
    local_198 = local_2b8;
    local_188 = 2;
    pFVar30 = (FRenderCommandTag *)
              TRenderCommandTag<`FEngineLoop::Tick'::__l61::TSTR_FrameCounter6108>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_1b8,pFVar30);
    uVar56 = (ulonglong)local_188;
    if ((2 < uVar56) &&
       (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar66)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar56] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_1b8._0_8_ != (code *)0x0) {
        pppuVar54 = (undefined ***)(local_1b8 + 0x10);
        if (local_190 != (undefined ***)0x0) {
          pppuVar54 = local_190;
        }
        (*(code *)(*pppuVar54)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar56])(local_1b8);
    }
  }
  if (local_2d8[0] != (code *)0x0) {
    pppuVar54 = &local_2c8;
    if (local_2b0 != (undefined ***)0x0) {
      pppuVar54 = local_2b0;
    }
    (*(code *)(*pppuVar54)[2])();
  }
  UpdateCoreCsvStats_EndFrame();
  FGenericPlatformMisc::BeginNamedEvent(&SystemColor,"Render_EndFrame");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6123,"Render_EndFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x17eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6123);
  }
  UE::RenderCore::DumpGPU::TickEndFrame();
  UEngine::EmitDynamicResolutionEvent(GEngine,EndFrame);
  local_280 = (undefined ***)0x0;
  local_298 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FEngineLoop::Tick'::`222'::<lambda_7>,1,0>::_vftable_;
  uStack_290 = local_698;
  local_2a8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FEngineLoop::Tick'::__l222::<lambda_7>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFVar28 = FRenderCommandList::GetInstanceTLS();
  if (pFVar28 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FEngineLoop::Tick_::__l222::TSTR_EndFrame6138>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_2a8);
  }
  else {
    pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
    local_178._0_8_ = local_2a8[0];
    local_2a8[0] = (code *)0x0;
    local_150 = local_280;
    local_168 = local_298;
    uStack_160 = uStack_290;
    local_158 = local_288;
    local_148 = 2;
    pFVar30 = (FRenderCommandTag *)
              TRenderCommandTag<`FEngineLoop::Tick'::__l222::TSTR_EndFrame6138>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_178,pFVar30);
    uVar56 = (ulonglong)local_148;
    if ((2 < uVar56) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar56] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_178._0_8_ != (code *)0x0) {
        pppuVar54 = (undefined ***)(local_178 + 0x10);
        if (local_150 != (undefined ***)0x0) {
          pppuVar54 = local_150;
        }
        (*(code *)(*pppuVar54)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar56])(local_178);
    }
  }
  if (local_2a8[0] != (code *)0x0) {
    pppuVar54 = &local_298;
    if (local_280 != (undefined ***)0x0) {
      pppuVar54 = local_280;
    }
    (*(code *)(*pppuVar54)[2])();
  }
  if (bVar66) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FWindowsPlatformTime::GetCPUTime();
  if (FThreadStats::bPrimaryEnable != false) {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_CPUTimePct,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_CPUTimePct,1> *)
                        &StatPtr_STAT_CPUTimePct);
    FVar5 = *(FName *)(TVar26.StatIdPtr)->Name;
    local_720.ComparisonIndex = FVar5.ComparisonIndex.Value;
    local_720.Number = FVar5.Number;
    FThreadStats::AddMessage<double>(FVar5,Set,(double)local_630,false);
    if (FThreadStats::bPrimaryEnable != false) {
      TVar26 = FThreadSafeStaticStatInner<FStat_STAT_CPUTimePctRelative,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_CPUTimePctRelative,1> *)
                          &StatPtr_STAT_CPUTimePctRelative);
      FVar5 = *(FName *)(TVar26.StatIdPtr)->Name;
      uVar17 = FVar5.Number;
      FVar61 = FVar5.ComparisonIndex.Value;
      local_720.ComparisonIndex.Value = FVar61.Value;
      local_720.Number = uVar17;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar49 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar49 == (FThreadStats *)0x0) {
          pFVar50 = FThreadStatsPool::Get();
          pFVar49 = FThreadStatsPool::GetFromPool(pFVar50);
        }
        local_588.NameAndInfo.Number = uVar17 & 0xffff8fff | 0x8000;
        local_690 = FVar5;
        local_588.StatData.Pad = (uchar  [8])(double)local_62c;
        local_588.NameAndInfo.Index.Value = FVar61.Value;
        FThreadStats::AddStatMessage(pFVar49,&local_588);
        FStatsTrace::Set(&local_690,(double)local_62c);
        if (pFVar49->ScopeCount == 0) {
          FThreadStats::Flush(pFVar49,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar49,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar53 = StatPtr_STAT_Hash_NumObjects;
        if (StatPtr_STAT_Hash_NumObjects == (FThreadSafeStaticStat<FStat_STAT_Hash_NumObjects>)0x0)
        {
          pFVar47 = ::FName::FName(local_460,"STAT_Hash_NumObjects");
          FVar53 = (FThreadSafeStaticStat<FStat_STAT_Hash_NumObjects>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_NumObjects,*pFVar47,
                              L"NumObjects","STATGROUP_UObjectHash","STATCAT_Advanced",
                              L"UObject Hash",false,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar53;
        FVar61 = FVar5.ComparisonIndex.Value;
        uVar17 = FVar5.Number;
        local_690 = (FName)(longlong)
                           (GUObjectArray.ObjObjects.NumElements -
                           GUObjectArray.ObjAvailableListEstimateCount);
        local_720.ComparisonIndex.Value = FVar61.Value;
        local_720.Number = uVar17;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar49 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar49 == (FThreadStats *)0x0) {
            pFVar50 = FThreadStatsPool::Get();
            pFVar49 = FThreadStatsPool::GetFromPool(pFVar50);
          }
          FVar10 = local_690;
          local_598.NameAndInfo.Number = uVar17 & 0xffff8fff | 0x8000;
          local_598.StatData.Pad = (uchar  [8])local_690;
          local_5c0 = FVar5;
          local_598.NameAndInfo.Index.Value = FVar61.Value;
          FThreadStats::AddStatMessage(pFVar49,&local_598);
          FStatsTrace::Set(&local_5c0,(long64)FVar10);
          if (pFVar49->ScopeCount == 0) {
            FThreadStats::Flush(pFVar49,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar49,false,false);
          }
        }
      }
    }
  }
  DestructItems<FDemoSavedRepObjectState,int>
            ((FDemoSavedRepObjectState *)local_6e8.AllocatorInstance.Data,local_6e8.ArrayNum);
  if ((FDemoSavedRepObjectState *)local_6e8.AllocatorInstance.Data !=
      (FDemoSavedRepObjectState *)0x0) {
    FMemory::Free(local_6e8.AllocatorInstance.Data);
  }
  if (local_730 != (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
    LOCK();
    plVar32 = &local_730->_padding_;
    lVar34 = *plVar32;
    *(int *)plVar32 = (int)*plVar32 + -1;
    UNLOCK();
    if ((int)lVar34 == 1) {
      (**(code **)local_730->_padding_)(local_730,1);
    }
  }
  if ((local_680 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_680 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_680 & 4) != 0) {
    FThreadStats::AddMessage(local_688,CycleScopeEnd);
  }
  local_680 = 0;
  FMiscTrace::OutputEndFrame(TraceFrameType_Game);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((char)local_6d0 == '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar65) {
    uVar36 = UE::Trace::Private::TimeGetTimestamp();
    lVar57 = uVar36 - UE::Trace::Private::GStartCycle;
    lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar34 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar24 = *(FWriteBuffer **)(lVar34 + 0x20);
    if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 8) {
      pFVar24 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar24->Cursor = lVar57 * 0x100 + 0x12;
    pFVar24->Cursor = pFVar24->Cursor + 8;
    pFVar24->Committed = pFVar24->Cursor;
  }
  FMemScope::~FMemScope(&local_5b8);
  FLLMScope::~FLLMScope(&local_6c4);
  FScopedSampleMallocChurn::~FScopedSampleMallocChurn(&local_c8);
  if (bVar64) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ClearPendingCleanupObjects @ 148d98170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FEngineLoop::ClearPendingCleanupObjects(FEngineLoop *this)

{
  FPendingCleanupObjects *this_00;
  
  FlushRenderingCommands();
  this_00 = this->PendingCleanupObjects;
  if (this_00 != (FPendingCleanupObjects *)0x0) {
    FPendingCleanupObjects::~FPendingCleanupObjects(this_00);
    ::operator_delete(this_00,0x10);
  }
  this->PendingCleanupObjects = (FPendingCleanupObjects *)0x0;
  return;
}

// <lambda_invoker_cdecl> @ 148d98200

void __cdecl
`FEngineLoop::PostInitRHI'::__l7::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x000148d98223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x90));
  return;
}

// <lambda_invoker_cdecl> @ 148d98230

void __cdecl
`FEngineLoop::Tick'::__l61::<lambda_3>::<lambda_invoker_cdecl>(FRHICommandListImmediate *param_1)

{
  FDeferredUpdateResource::bNeedsUpdate = true;
  return;
}

// <lambda_invoker_cdecl> @ 148d98240

void __cdecl
`FEngineLoop::PreInitPreStartupScreen'::__l2::<lambda_8>::<lambda_invoker_cdecl>
          (FPackageLocalizationManager *param_1)

{
  FEnginePackageLocalizationCache *this;
  TRawPtrProxy<FEnginePackageLocalizationCache> local_res10 [3];
  TSharedRef<IPackageLocalizationCache,1> local_18;
  
  this = ::operator_new(0xc0);
  local_res10[0].Object = (FEnginePackageLocalizationCache *)0x0;
  if (this != (FEnginePackageLocalizationCache *)0x0) {
    local_res10[0].Object = FEnginePackageLocalizationCache::FEnginePackageLocalizationCache(this);
  }
  TSharedRef<IPackageLocalizationCache,1>::
  TSharedRef<IPackageLocalizationCache,1><FEnginePackageLocalizationCache>(&local_18,local_res10);
  FPackageLocalizationManager::InitializeFromCache(param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// FEngineLoop @ 148d9bfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FEngineLoop * __thiscall FEngineLoop::FEngineLoop(FEngineLoop *this)

{
  this->_padding_ = (longlong)&___7FEngineLoop__6B_;
  (this->FrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTimes).ArrayNum = 0;
  (this->FrameTimes).ArrayMax = 0;
  this->EngineService = (FEngineService *)0x0;
  (this->SessionService).Object = (ISessionService *)0x0;
  (this->SessionService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreInitContext).bDumpEarlyConfigReads = false;
  (this->PreInitContext).bDumpEarlyPakFileReads = false;
  (this->PreInitContext).bForceQuitAfterEarlyReads = false;
  (this->PreInitContext).bWithConfigPatching = false;
  (this->PreInitContext).bDisableDisregardForGC = false;
  (this->PreInitContext).bHasEditorToken = false;
  (this->PreInitContext).bIsRegularClient = false;
  (this->PreInitContext).bTokenDoesNotHaveDash = false;
  (this->PreInitContext).bIsPossiblyUnrecognizedCommandlet = false;
  (this->PreInitContext).Token.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreInitContext).Token.Data.ArrayNum = 0;
  (this->PreInitContext).Token.Data.ArrayMax = 0;
  (this->PreInitContext).CommandletCommandLine.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreInitContext).CommandletCommandLine.Data.ArrayNum = 0;
  (this->PreInitContext).CommandletCommandLine.Data.ArrayMax = 0;
  (this->PreInitContext).SlowTaskPtr = (FScopedSlowTask *)0x0;
  (this->PreInitContext).SlateRenderer.Object = (FSlateRenderer *)0x0;
  (this->PreInitContext).SlateRenderer.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FEngineLoop @ 148d9ca80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FEngineLoop::~FEngineLoop(FEngineLoop *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FEngineLoop__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreInitContext).SlateRenderer.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PreInitContext).CommandletCommandLine.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreInitContext).Token.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionService).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->FrameTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 148d9dc60

void __thiscall
`FEngineLoop::PreInitPreStartupScreen'::__l2::<lambda_3>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 local_res8 [8];
  FString local_38;
  
  puVar9 = *(undefined8 **)((longlong)this + 0x30);
  if ((((*(char *)*puVar9 != '\0') || (*(char *)puVar9[1] != '\0')) || (*(char *)puVar9[2] != '\0'))
     || (*(char *)puVar9[3] != '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsModeSelected()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0x880,
                       L"SetIsRunningAsCommandlet should not be called after mode has been selected."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar8 = param_1->DataPtr;
  **(undefined1 **)((longlong)this + 0x10) = 1;
  ::FString::AssignRange(*(FString **)((longlong)this + 0x38),pwVar8,(int)uVar1);
  GIsClient = true;
  GIsServer = true;
  bVar7 = UE::Stats::FStats::EnabledForCommandlet();
  if (!bVar7) {
    FThreadStats::bPrimaryDisableForever = true;
    FThreadStats::CheckEnable();
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar7 = true;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  lVar6 = plVar2[1];
  puVar9 = (undefined8 *)*plVar2;
  puVar10 = puVar9 + (longlong)(int)lVar6 * 2;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar9 == puVar10) break;
    if (bVar7) {
      bVar7 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L" ",1);
    }
    iVar11 = *(int *)(puVar9 + 1) + -1;
    if (*(int *)(puVar9 + 1) == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)*puVar9,iVar11);
    puVar9 = puVar9 + 2;
  }
  pFVar3 = *(FString **)this;
  if (pFVar3 != &local_38) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  PRIVATE_GIsRunningCommandlet = true;
  pwVar8 = FCommandLine::Get();
  PRIVATE_GAllowCommandletRendering = FParse::Param(pwVar8,L"AllowCommandletRendering");
  pwVar8 = FCommandLine::Get();
  PRIVATE_GAllowCommandletAudio = FParse::Param(pwVar8,L"AllowCommandletAudio");
  return;
}

// operator() @ 148d9df10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FEngineLoop::Tick'::__l127::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  uint uVar4;
  
  pTVar2 = CVarDoAsyncEndOfFrameTasksRandomize.Ref;
  bVar3 = IsInActualRenderingThread();
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6e9,"!IsInActualRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < pTVar2->ShadowedValue[0]) {
    uVar4 = rand();
    FWindowsPlatformProcess::Sleep((float)(uVar4 & 0x7fff) * ___real_33c49d2f);
  }
  if (*(UDemoNetDriver **)this != (UDemoNetDriver *)0x0) {
    UDemoNetDriver::TickFlushAsyncEndOfFrame
              (*(UDemoNetDriver **)this,*(float *)((longlong)this + 8));
  }
  return;
}

// operator() @ 148d9dfb0

bool __thiscall
`FEngineLoop::PreInitPreStartupScreen'::__l212::<lambda_6>::operator()(void *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  FString local_28;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  bVar4 = false;
  bVar3 = false;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  if (iVar7 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x2d) {
LAB_148d9e061:
    bVar5 = false;
  }
  else {
    pFVar8 = FProjectDescriptor::GetExtension(&local_18);
    pFVar9 = FPaths::GetExtension(&local_28,param_1,false);
    iVar7 = (pFVar8->Data).ArrayNum;
    bVar4 = true;
    bVar3 = true;
    iVar1 = (pFVar9->Data).ArrayNum;
    if (iVar1 == iVar7) {
      if (1 < iVar1) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
        bVar5 = iVar7 == 0;
        goto LAB_148d9e055;
      }
    }
    else {
      bVar5 = iVar7 + iVar1 == 1;
LAB_148d9e055:
      if (!bVar5) goto LAB_148d9e061;
    }
    bVar5 = true;
  }
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// operator() @ 148d9e0b0

bool __thiscall
`FEngineLoop::PreInitPreStartupScreen'::__l409::<lambda_7>::operator()(void *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(short *)(param_1->Data).AllocatorInstance.Data != 0x2d;
}

// AppExit @ 148d9eaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FEngineLoop::AppExit(void)

{
  FOutputDeviceRedirector *pFVar1;
  
  if (!bCalledOnce) {
    bCalledOnce = true;
    if (4 < (byte)LogExit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExit);
    }
    FGenericPlatformApplicationMisc::TearDown();
    FWindowsPlatformMisc::PlatformTearDown();
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::Exit(GConfig);
      if (GConfig != (FConfigCacheIni *)0x0) {
        (**(code **)GConfig->_padding_)(GConfig,1);
      }
      GConfig = (FConfigCacheIni *)0x0;
    }
    pFVar1 = GetGlobalLogSingleton();
    if (pFVar1 != (FOutputDeviceRedirector *)0x0) {
      pFVar1 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::TearDown(pFVar1);
    }
    FTextLocalizationManager::TearDown();
    FInternationalization::TearDown();
    FTraceAuxiliary::Shutdown();
    return;
  }
  return;
}

// AppInit @ 148d9ed40

bool __cdecl FEngineLoop::AppInit(void)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  FDateTime FVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  FPageAllocator *this;
  wchar_t *pwVar9;
  FEngineVersion *this_00;
  undefined8 *puVar10;
  IPluginManager *pIVar11;
  IProjectManager *pIVar12;
  FLogSuppressionInterface *pFVar13;
  FAutomationTestFramework *pFVar14;
  wchar_t *pwVar15;
  bool bVar16;
  bool local_res8 [8];
  bool local_res10 [8];
  bool local_res18 [8];
  FLLMScope local_res20 [2];
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FScopedBootTiming local_58;
  
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_58,"BeginInitTextLocalization");
    BeginInitTextLocalization();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6418,"BeginInitTextLocalization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1912);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6418);
    FScopedBootTiming::FScopedBootTiming(&local_58,"BeginInitTextLocalization");
    BeginInitTextLocalization();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
    FCpuProfilerTrace::OutputEndEvent();
  }
  wcscpy(GErrorHist,L"Fatal error!\r\n\r\n");
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformMisc::PlatformPreInit");
    FWindowsPlatformMisc::PlatformPreInit();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6429,"FPlatformMisc::PlatformPreInit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x191d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6429);
    FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformMisc::PlatformPreInit");
    FWindowsPlatformMisc::PlatformPreInit();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformApplicationMisc::PreInit");
    FWindowsPlatformApplicationMisc::PreInit();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6434,"FPlatformApplicationMisc::PreInit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1922);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6434);
    FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformApplicationMisc::PreInit");
    FWindowsPlatformApplicationMisc::PreInit();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar6 = FDateTime::Now();
  pFVar7 = FDateTime::ToString((FDateTime *)FVar6.Ticks,&local_88);
  if (pFVar7 != &GSystemStartTime) {
    if (GSystemStartTime.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GSystemStartTime.Data.AllocatorInstance.Data);
    }
    GSystemStartTime.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GSystemStartTime.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GSystemStartTime.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if ((FMemScope)local_88.Data.AllocatorInstance.Data != (FMemScope)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6448,"IFileManager::Get().ProcessCommandLineOptions()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1930);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6448);
  }
  FScopedBootTiming::FScopedBootTiming(&local_58,"IFileManager::Get().ProcessCommandLineOptions()");
  pIVar8 = IFileManager::Get();
  (**(code **)*pIVar8)(pIVar8);
  FScopedBootTiming::~FScopedBootTiming(&local_58);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this = FPageAllocator::Get();
  FPageAllocator::LatchProtectedMode(this);
  pwVar9 = FCommandLine::Get();
  bVar16 = FParse::Param(pwVar9,L"purgatorymallocproxy");
  if (bVar16) {
    FMemory::EnablePurgatoryTests();
  }
  pwVar9 = FCommandLine::Get();
  bVar16 = FParse::Param(pwVar9,L"poisonmallocproxy");
  if (bVar16) {
    FMemory::EnablePoisonTests();
  }
  pwVar9 = FCommandLine::Get();
  bVar16 = FParse::Param(pwVar9,L"BUILDMACHINE");
  if (bVar16) {
    GIsBuildMachine = true;
    FCommandLine::AddToSubprocessCommandLine(L" -buildmachine",AllContexts);
  }
  pIVar8 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x60);
  pFVar7 = FPaths::ProjectLogDir(&local_88);
  pwVar9 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar8,pwVar15,1);
  if ((FMemScope)local_88.Data.AllocatorInstance.Data != (FMemScope)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x108);
  FVar6 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)FVar6.Ticks,&local_58.Message);
  this_00 = FEngineVersion::Current();
  FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_00);
  FPaths::ProjectLogDir(&local_68);
  ::FString::PrintfImpl(&local_88,L"%sunreal-v%i-%s.dmp");
  puVar10 = (undefined8 *)(*pcVar1)(pIVar8,local_78);
  if (*(int *)(puVar10 + 1) != 0) {
    pwVar9 = (wchar_t *)*puVar10;
  }
  wcscpy(MiniDumpFilenameW,pwVar9);
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  if ((FMemScope)local_88.Data.AllocatorInstance.Data != (FMemScope)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Message.Data.AllocatorInstance.Data);
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformOutputDevices::SetupOutputDevices");
    FGenericPlatformOutputDevices::SetupOutputDevices();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6483,"FPlatformOutputDevices::SetupOutputDevices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1953);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6483);
    FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformOutputDevices::SetupOutputDevices");
    FGenericPlatformOutputDevices::SetupOutputDevices();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6489,"FConfigCacheIni::InitializeConfigSystem",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1959);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6489);
  }
  FScopedBootTiming::FScopedBootTiming(&local_58,"FConfigCacheIni::InitializeConfigSystem");
  FLLMScope::FLLMScope(local_res20,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_88,ConfigSystem,true);
  FConfigCacheIni::InitializeConfigSystem();
  FMemScope::~FMemScope((FMemScope *)&local_88);
  FLLMScope::~FLLMScope(local_res20);
  FScopedBootTiming::~FScopedBootTiming(&local_58);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_58,"ConfigUtilities::ApplyCVarsFromBootHotfix");
    UE::ConfigUtilities::ApplyCVarsFromBootHotfix();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6510,"ConfigUtilities::ApplyCVarsFromBootHotfix",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x196e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6510);
    FScopedBootTiming::FScopedBootTiming(&local_58,"ConfigUtilities::ApplyCVarsFromBootHotfix");
    UE::ConfigUtilities::ApplyCVarsFromBootHotfix();
    FScopedBootTiming::~FScopedBootTiming(&local_58);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pwVar9 = FCommandLine::Get();
  FTraceAuxiliary::InitializePresets(pwVar9);
  FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates(IniSystemReady);
  pIVar11 = IPluginManager::Get();
  pIVar12 = IProjectManager::Get();
  cVar4 = (**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,0);
  if ((cVar4 != '\0') &&
     (cVar4 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,0), cVar4 != '\0')) {
    FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates
              (EarliestPossiblePluginsLoaded);
    if (CpuChannel->Enabled < 0) {
      FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformStackWalk::Init");
      FGenericPlatformStackWalk::Init();
      FScopedBootTiming::~FScopedBootTiming(&local_58);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6531,"FPlatformStackWalk::Init",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1983);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6531);
      FScopedBootTiming::FScopedBootTiming(&local_58,"FPlatformStackWalk::Init");
      FGenericPlatformStackWalk::Init();
      FScopedBootTiming::~FScopedBootTiming(&local_58);
      FCpuProfilerTrace::OutputEndEvent();
    }
    CheckForPrintTimesOverride();
    pFVar13 = FLogSuppressionInterface::Get();
    (**(code **)((longlong)*pFVar13 + 0x10))(pFVar13);
    if (GLogConsole != (FOutputDeviceConsole *)0x0) {
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"LOG");
      if (bVar16) {
        (**(code **)(GLogConsole->_padding_ + 0x58))(GLogConsole,1);
      }
    }
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6764,"Load pre-init plugin modules",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1a6c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6764);
    }
    FScopedBootTiming::FScopedBootTiming(&local_58,"Load pre-init plugin modules");
    FEngineTrackedActivityScope::FEngineTrackedActivityScope
              ((FEngineTrackedActivityScope *)local_res20,L"Loading Plugins (PreInit)");
    cVar4 = (**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,1);
    if ((cVar4 != '\0') &&
       (cVar4 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,1), cVar4 != '\0')) {
      FEngineTrackedActivityScope::~FEngineTrackedActivityScope
                ((FEngineTrackedActivityScope *)local_res20);
      FScopedBootTiming::~FScopedBootTiming(&local_58);
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FEmbeddedCommunication::ForceTick(0x11,__real_3dcccccd,__real_3f000000);
      local_res8[0] = false;
      FConfigCacheIni::GetBool
                (GConfig,L"Engine.ErrorHandling",L"bPromptForRemoteDebugging",local_res8,&GEngineIni
                );
      local_res18[0] = false;
      FConfigCacheIni::GetBool
                (GConfig,L"Engine.ErrorHandling",L"bPromptForRemoteDebugOnEnsure",local_res18,
                 &GEngineIni);
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"PROMPTREMOTEDEBUG");
      if (bVar16) {
        local_res8[0] = true;
      }
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"PROMPTREMOTEDEBUGENSURE");
      if (bVar16) {
        local_res8[0] = true;
        local_res18[0] = true;
      }
      FGenericPlatformMisc::bShouldPromptForRemoteDebugging = local_res8[0];
      FGenericPlatformMisc::bPromptForRemoteDebugOnEnsure = local_res18[0];
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"WARNINGSASERRORS");
      if (bVar16) {
        GWarn->TreatWarningsAsErrors = true;
      }
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"ERRORSASWARNINGS");
      if (bVar16) {
        GWarn->TreatErrorsAsWarnings = true;
      }
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"SILENT");
      if (bVar16) {
        GIsSilent = true;
      }
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"RUNNINGUNATTENDEDSCRIPT");
      if (bVar16) {
        GIsRunningUnattendedScript = true;
      }
      FApp::PrintStartupLogMessages();
      pwVar9 = FCommandLine::Get();
      bVar16 = FParse::Param(pwVar9,L"MULTIPROCESS");
      if (!bVar16) {
        FMaintenance::DeleteOldLogs();
      }
      if (CpuChannel->Enabled < 0) {
        FScopedBootTiming::FScopedBootTiming(&local_58,"FApp::InitializeSession");
        FApp::InitializeSession();
        FScopedBootTiming::~FScopedBootTiming(&local_58);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId6836,"FApp::InitializeSession",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x1ab4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6836);
        FScopedBootTiming::FScopedBootTiming(&local_58,"FApp::InitializeSession");
        FApp::InitializeSession();
        FScopedBootTiming::~FScopedBootTiming(&local_58);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FColorList::CreateColorMap(&GColorList);
      local_res10[0] = false;
      FConfigCacheIni::GetBool
                (GConfig,L"AutomationTesting",L"bForceSmokeTests",local_res10,&GEngineIni);
      bVar16 = local_res10[0];
      pwVar9 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar9,L"bForceSmokeTests");
      local_res10[0] = (bool)(bVar5 | bVar16);
      pFVar14 = FAutomationTestFramework::Get();
      fVar3 = __real_3dcccccd;
      fVar2 = __real_3f000000;
      pFVar14->bForceSmokeTests = local_res10[0];
      FEmbeddedCommunication::ForceTick(0x12,fVar3,fVar2);
      if (CpuChannel->Enabled < 0) {
        FScopedBootTiming::FScopedBootTiming(&local_58,"FCoreDelegates::OnInit");
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&FCoreDelegates::OnInit);
        FScopedBootTiming::~FScopedBootTiming(&local_58);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&DAT_155264178,"FCoreDelegates::OnInit",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x1adf);
        FCpuProfilerTrace::OutputBeginEvent(DAT_155264178);
        FScopedBootTiming::FScopedBootTiming(&local_58,"FCoreDelegates::OnInit");
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&FCoreDelegates::OnInit);
        FScopedBootTiming::~FScopedBootTiming(&local_58);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FEmbeddedCommunication::ForceTick(0x13,__real_3dcccccd,__real_3f000000);
      return true;
    }
    FEngineTrackedActivityScope::~FEngineTrackedActivityScope
              ((FEngineTrackedActivityScope *)local_res20);
    FScopedBootTiming::~FScopedBootTiming(&local_58);
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return false;
}

// AppPreExit @ 148d9f7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FEngineLoop::AppPreExit(void)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  bool bVar3;
  FShaderCompilerStats *lpCriticalSection;
  int iVar4;
  wchar_t *pwVar5;
  FString *this;
  FDerivedDataCacheInterface *pFVar6;
  bool bVar7;
  FString local_38;
  FScopedBootTiming local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6901,"AppPreExit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1af5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6901);
  }
  FScopedBootTiming::FScopedBootTiming(&local_28,"AppPreExit");
  if (4 < (byte)LogExit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExit);
  }
  FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnPreExit");
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnPreExit);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6906,"FCoreDelegates::OnPreExit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1afa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6906);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnPreExit);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  pwVar5 = FCommandLine::Get();
  this = ::FString::FString(&local_38,pwVar5);
  iVar4 = ::FString::Find(this,L"CreatePak",9,IgnoreCase,FromStart,-1);
  if ((iVar4 == -1) || (pFVar6 = GetDerivedDataCache(), pFVar6 == (FDerivedDataCacheInterface *)0x0)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (3 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar6 = GetDerivedDataCacheRef();
    (**(code **)((longlong)*pFVar6 + 0x98))(pFVar6,CONCAT71(SUB87(*pFVar6,1),1));
  }
  FGenericPlatformMisc::BeginNamedEvent(&CoreDelegatesColor,"FCoreDelegates::OnExit");
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnExit);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6924,"FCoreDelegates::OnExit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1b0c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6924);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnExit);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  GFrameNumberRenderThread = 0xffffffff;
  if (GIOThreadPool != (FQueuedThreadPool *)0x0) {
    (**(code **)((longlong)*GIOThreadPool + 0x10))();
  }
  if (GShaderCompilingManager != (FShaderCompilingManager *)0x0) {
    (**(code **)(GShaderCompilingManager->_padding_ + 0x50))(GShaderCompilingManager,1);
    GShaderCompilingManager = (FShaderCompilingManager *)0x0;
  }
  lpCriticalSection = GShaderCompilerStats;
  if (GShaderCompilerStats != (FShaderCompilerStats *)0x0) {
    DestructItems<FShaderCompilerStats::FWorkerDiagnosticsInfo,int>
              ((FWorkerDiagnosticsInfo *)
               (GShaderCompilerStats->WorkerDiagnostics).AllocatorInstance.Data,
               (GShaderCompilerStats->WorkerDiagnostics).ArrayNum);
    pFVar1 = (lpCriticalSection->WorkerDiagnostics).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(lpCriticalSection->ShaderTimings).field_0x48 = 0;
    pvVar2 = *(void **)&(lpCriticalSection->ShaderTimings).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&lpCriticalSection->ShaderTimings);
    pFVar1 = (lpCriticalSection->JobLifeTimeIntervals).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
    ::
    ~TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
              (&lpCriticalSection->CompileStats);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x1e8);
    GShaderCompilerStats = (FShaderCompilerStats *)0x0;
  }
  if (GODSCManager != (FODSCManager *)0x0) {
    (**(code **)GODSCManager->_padding_)(GODSCManager,1);
    GODSCManager = (FODSCManager *)0x0;
  }
  FScopedBootTiming::~FScopedBootTiming(&local_28);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CleanupPreInitContext @ 148da0780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FEngineLoop::CleanupPreInitContext(FEngineLoop *this)

{
  FPreInitContext::Cleanup(&this->PreInitContext);
  return;
}

// Exit @ 148da2580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEngineLoop::Exit(FEngineLoop *this)

{
  FName FVar1;
  longlong lVar2;
  FEngineService *pFVar3;
  FTraceService *pFVar4;
  ISessionService *pIVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FPreLoadScreenManager *pFVar10;
  FVisualLogger *pFVar11;
  FAssetCompilingManager *this_02;
  FStreamingManagerCollection *pFVar12;
  FModuleManager *pFVar13;
  IModuleInterface *pIVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStackY_10c8 [32];
  FBoolConfigValueHelper local_1068 [8];
  FScopedBootTiming local_1060;
  FName local_1048;
  undefined8 local_1040;
  FSharedReferencer<1> aFStack_1038 [2];
  uchar local_1028 [4096];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_10c8;
  pFVar8 = ::FName::FName(&local_1048,L"EngineLoop.Exit");
  FVar1 = *pFVar8;
  FVar9 = StatPtr_STAT_NamedMarker;
  if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_1060,"STAT_NamedMarker");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar8,L"NamedMarker"
                       ,"STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true,false,ST_FName
                       ,false,false,MCR_Invalid);
  }
  lVar2 = *(longlong *)FVar9;
  uVar15 = (uint)lVar2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  local_1060.Message.Data.AllocatorInstance.Data._0_4_ = uVar15;
  local_1060.Message.Data.AllocatorInstance.Data._4_4_ = uVar7;
  if (((lVar2 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_1060.Message.Data.AllocatorInstance.Data._0_4_ = FVar1.ComparisonIndex.Value;
    local_1060.Message.Data.ArrayMax = uVar7 & 0xffff7fff | 0x7000;
    local_1060.Message.Data.AllocatorInstance.Data._4_4_ = FVar1.Number;
    local_1060.Message.Data.ArrayNum = uVar15;
    FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_1060);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  FGenericPlatformMisc::BeginNamedEvent(&FrameColor,"FEngineLoop::Exit");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4928,"FEngineLoop::Exit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1340);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4928);
  }
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint4929 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint4929,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0x1341,L"EngineLoop.Exit");
      __BookmarkPoint4929 = true;
    }
    uVar7 = CallstackTrace_GetCurrentId();
    local_1028[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint4929,uVar7,1,local_1028);
  }
  (**(code **)(this->_padding_ + 0x10))(this);
  GIsRunning = false;
  GLogConsole = (FOutputDeviceConsole *)0x0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &IInstallBundleManager::InstallBundleCompleteDelegate,this);
  pFVar10 = FPreLoadScreenManager::Get();
  if (pFVar10 != (FPreLoadScreenManager *)0x0) {
    pFVar10 = FPreLoadScreenManager::Get();
    bVar6 = FPreLoadScreenManager::HasActivePreLoadScreenType(pFVar10,EngineLoadingScreen);
    if (bVar6) {
      pFVar10 = FPreLoadScreenManager::Get();
      FPreLoadScreenManager::SetEngineLoadingComplete(pFVar10,true);
      pFVar10 = FPreLoadScreenManager::Get();
      FPreLoadScreenManager::WaitForEngineLoadingScreenToFinish(pFVar10);
    }
    FPreLoadScreenManager::Destroy();
  }
  pFVar11 = FVisualLogger::Get();
  (**(code **)(pFVar11->_padding_ + 0x28))(pFVar11);
  this_02 = FAssetCompilingManager::Get();
  FAssetCompilingManager::Shutdown(this_02);
  pFVar3 = this->EngineService;
  if (pFVar3 != (FEngineService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->MessageEndpoint).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar3,0x10);
  }
  pFVar4 = this->TraceService;
  this->EngineService = (FEngineService *)0x0;
  if (pFVar4 != (FTraceService *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pIVar5 = (this->SessionService).Object;
  this->TraceService = (FTraceService *)0x0;
  if (pIVar5 != (ISessionService *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
    local_1040 = 0;
    aFStack_1038[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SessionService != (TSharedPtr<ISessionService,1> *)&local_1040) {
      (this->SessionService).Object = (ISessionService *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SessionService).SharedReferenceCount,aFStack_1038);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_1038[0].ReferenceController);
  }
  if (GDistanceFieldAsyncQueue != (FDistanceFieldAsyncQueue *)0x0) {
    (**(code **)(GDistanceFieldAsyncQueue->_padding_ + 0x50))(GDistanceFieldAsyncQueue,1);
    GDistanceFieldAsyncQueue = (FDistanceFieldAsyncQueue *)0x0;
  }
  if (GCardRepresentationAsyncQueue != (FCardRepresentationAsyncQueue *)0x0) {
    (**(code **)(GCardRepresentationAsyncQueue->_padding_ + 0x50))(GCardRepresentationAsyncQueue,1);
    GCardRepresentationAsyncQueue = (FCardRepresentationAsyncQueue *)0x0;
  }
  FlushAsyncLoading(-1);
  if ((GEngine != (UEngine *)0x0) &&
     ((**(code **)(GEngine->_padding_ + 0x2e0))(), GEngine != (UEngine *)0x0)) {
    (**(code **)(GEngine->_padding_ + 0x2e8))();
  }
  if ((GConfig == (FConfigCacheIni *)0x0) ||
     (FBoolConfigValueHelper::FBoolConfigValueHelper
                (local_1068,L"/Script/Engine.StreamingSettings",L"s.FlushStreamingOnExit",
                 &GEngineIni), local_1068[0].bValue != false)) {
    FlushAsyncLoading(-1);
  }
  else {
    CancelAsyncLoading();
  }
  SetAsyncLoadingAllowed(false);
  bVar6 = IStreamingManager::HasShutdown();
  if (!bVar6) {
    UTexture::CancelPendingTextureStreaming();
    pFVar12 = IStreamingManager::Get_Concurrent();
    if (pFVar12 != (FStreamingManagerCollection *)0x0) {
      (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12,0,0);
    }
  }
  FAudioDeviceManager::Shutdown();
  FSlateApplication::Shutdown(true);
  bVar6 = FEngineFontServices::IsInitialized();
  if (bVar6) {
    FEngineFontServices::Destroy();
  }
  pFVar13 = FModuleManager::Get();
  pFVar8 = ::FName::FName(&local_1048,"WorldBrowser");
  FModuleManager::UnloadModule(pFVar13,*pFVar8,true,true);
  ClearMaterialPSORequests();
  PipelineStateCache::WaitForAllTasks();
  AppPreExit();
  TermGamePhys();
  IPackageResourceManager::Shutdown();
  pFVar13 = FModuleManager::Get();
  pFVar8 = ::FName::FName(&local_1048,"AssetRegistry");
  FModuleManager::UnloadModule(pFVar13,*pFVar8,true,true);
  ShutdownRenderingThread();
  FShaderPipelineCache::Shutdown();
  ShutdownGlobalShaderMap();
  FShaderCodeLibrary::Shutdown();
  FIoDispatcher::Shutdown();
  pFVar13 = FModuleManager::Get();
  pFVar8 = ::FName::FName(&local_1048,"IoStoreOnDemandCore");
  FModuleManager::UnloadModule(pFVar13,*pFVar8,true,true);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_IHotReloadInterface*___ptr64___cdecl_IHotReloadInterface::GetPtr(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IHotReloadInterface*___ptr64___cdecl_IHotReloadInterface::GetPtr(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IHotReloadInterface*___ptr64___cdecl_IHotReloadInterface::GetPtr(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IHotReloadInterface*___ptr64___cdecl_IHotReloadInterface::GetPtr(void)'
                    ::__l2::HotReload,"HotReload");
    _Init_thread_footer(&`public:_static_class_IHotReloadInterface*___ptr64___cdecl_IHotReloadInterface::GetPtr(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pIVar14 = FModuleManager::GetModulePtr_Internal
                      (`public:_static_class_IHotReloadInterface*___ptr64___cdecl_IHotReloadInterface::GetPtr(void)'
                       ::__l2::HotReload);
  if (pIVar14 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
  }
  if (CpuChannel->Enabled < 0) {
    FScopedBootTiming::FScopedBootTiming(&local_1060,"UnloadModulesAtShutdown");
    pFVar13 = FModuleManager::Get();
    FModuleManager::UnloadModulesAtShutdown(pFVar13);
    FScopedBootTiming::~FScopedBootTiming(&local_1060);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5127,"UnloadModulesAtShutdown",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0x1407);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5127);
    FScopedBootTiming::FScopedBootTiming(&local_1060,"UnloadModulesAtShutdown");
    pFVar13 = FModuleManager::Get();
    FModuleManager::UnloadModulesAtShutdown(pFVar13);
    FScopedBootTiming::~FScopedBootTiming(&local_1060);
    FCpuProfilerTrace::OutputEndEvent();
  }
  IStreamingManager::Shutdown();
  DestroyMoviePlayer();
  FThreadStats::StopThread();
  if (GThreadPool != (FQueuedThreadPool *)0x0) {
    (**(code **)((longlong)*GThreadPool + 0x10))();
  }
  if (GBackgroundPriorityThreadPool != (FQueuedThreadPool *)0x0) {
    (**(code **)((longlong)*GBackgroundPriorityThreadPool + 0x10))();
  }
  RHIExit();
  FTaskGraphInterface::Shutdown();
  UE::Trace::Exit();
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// InitTime @ 148da4810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FEngineLoop::InitTime(FEngineLoop *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  float local_res8 [2];
  float local_res10 [2];
  LARGE_INTEGER local_res18 [2];
  
  QueryPerformanceCounter(local_res18);
  FApp::CurrentTime =
       (atomic<double>)
       ((double)CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart) *
        FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000);
  this->MaxFrameCounter = 0;
  this->MaxTickTime = 0.0;
  this->TotalTickTime = 0.0;
  QueryPerformanceCounter(local_res18);
  this->LastFrameCycles = local_res18[0].s.LowPart;
  local_res8[0] = 0.0;
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"SECONDS=",local_res8);
  this->MaxTickTime = (double)local_res8[0];
  if (FApp::bIsBenchmarking != false) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar2,L"BENCHMARKSECONDS=",local_res8);
    if ((bVar1) && (local_res8[0] != 0.0)) {
      this->MaxTickTime = (double)local_res8[0];
    }
  }
  local_res10[0] = 0.0;
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"FPS=",local_res10);
  if (0.0 < local_res10[0]) {
    FApp::FixedDeltaTime = (atomic<double>)(double)(__real_3f800000 / local_res10[0]);
  }
  this->MaxFrameCounter = (longlong)(this->MaxTickTime / (double)FApp::FixedDeltaTime);
  return;
}

// LoadCoreModules @ 148da7450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FEngineLoop::LoadCoreModules(FEngineLoop *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  IModuleInterface *pIVar2;
  FName local_res10 [3];
  
  RegisterModularObjectsProcessing();
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,L"CoreUObject");
  pIVar2 = FModuleManager::LoadModule(this_00,*pFVar1,None);
  return pIVar2 != (IModuleInterface *)0x0;
}

// LoadPreInitModules @ 148da74a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FEngineLoop::LoadPreInitModules(FEngineLoop *this)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_void___cdecl_FEngineLoop::LoadPreInitModules(void)_::_2_::FStat_STAT_PreInitModules>
  FVar7;
  FModuleManager *pFVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_28;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_PreInitModules ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FEngineLoop::LoadPreInitModules(void)_::_2_::FStat_STAT_PreInitModules>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res10.s,"STAT_PreInitModules");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreInitModules,*pFVar6,
                   L"Loading PreInit Modules","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_PreInitModules;
  if (StatPtr_STAT_PreInitModules ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FEngineLoop::LoadPreInitModules(void)_::_2_::FStat_STAT_PreInitModules>
       )0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_PreInitModules");
    FVar7 = (FThreadSafeStaticStat<_public:_void___cdecl_FEngineLoop::LoadPreInitModules(void)_::_2_::FStat_STAT_PreInitModules>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreInitModules,*pFVar6,
                         L"Loading PreInit Modules","STATGROUP_LoadTime","STATCAT_Advanced",
                         L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x1123);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar10.Value;
      goto LAB_148da761c;
    }
  }
  bVar4 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_148da761c:
  pFVar8 = FModuleManager::Get();
  pFVar6 = ::FName::FName((FName *)&local_res10.s,L"Engine");
  FModuleManager::LoadModule(pFVar8,*pFVar6,None);
  pFVar8 = FModuleManager::Get();
  pFVar6 = ::FName::FName((FName *)&local_res10.s,L"Renderer");
  FModuleManager::LoadModule(pFVar8,*pFVar6,None);
  pFVar8 = FModuleManager::Get();
  pFVar6 = ::FName::FName((FName *)&local_res10.s,L"AnimGraphRuntime");
  FModuleManager::LoadModule(pFVar8,*pFVar6,None);
  if (GRHIGlobals.UsingNullRHI == false) {
    FModuleManager::Get();
    pFVar6 = ::FName::FName((FName *)&local_res10.s,"SlateRHIRenderer");
    FVar2 = *pFVar6;
    pFVar8 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(pFVar8,FVar2);
  }
  pFVar8 = FModuleManager::Get();
  pFVar6 = ::FName::FName((FName *)&local_res10.s,L"Landscape");
  FModuleManager::LoadModule(pFVar8,*pFVar6,None);
  pFVar8 = FModuleManager::Get();
  pFVar6 = ::FName::FName((FName *)&local_res10.s,L"RHICore");
  FModuleManager::LoadModule(pFVar8,*pFVar6,None);
  pFVar8 = FModuleManager::Get();
  pFVar6 = ::FName::FName((FName *)&local_res10.s,L"RenderCore");
  FModuleManager::LoadModule(pFVar8,*pFVar6,None);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// LoadStartupCoreModules @ 148da78e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FEngineLoop::LoadStartupCoreModules(FEngineLoop *this)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  FFeedbackContext *pFVar7;
  bool bVar8;
  FText *pFVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_bool___cdecl_FEngineLoop::LoadStartupCoreModules(void)_::_2_::FStat_STAT_StartupModules>
  FVar11;
  FModuleManager *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_98;
  FSlowTask local_88;
  
  pFVar7 = GWarn;
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::FSlowTask(&local_88,__real_42c80000,pFVar9,true,pFVar7);
  FSlowTask::Initialize(&local_88);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  FVar16.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StartupModules ==
          (FThreadSafeStaticStat<_public:_bool___cdecl_FEngineLoop::LoadStartupCoreModules(void)_::_2_::FStat_STAT_StartupModules>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_res10.s,"STAT_StartupModules");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartupModules,*pFVar10,
                   L"Loading Startup Modules","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_StartupModules;
  if (StatPtr_STAT_StartupModules ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FEngineLoop::LoadStartupCoreModules(void)_::_2_::FStat_STAT_StartupModules>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_StartupModules");
    FVar11 = (FThreadSafeStaticStat<_public:_bool___cdecl_FEngineLoop::LoadStartupCoreModules(void)_::_2_::FStat_STAT_StartupModules>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartupModules,*pFVar10,
                          L"Loading Startup Modules","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar14.Value;
        local_res10.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0x1160);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar14.Value;
      local_res10.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_148da7a8c;
    }
  }
  bVar4 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_148da7a8c:
  pFVar9 = FText::FText((FText *)&local_98);
  fVar6 = __real_41200000;
  FSlowTask::EnterProgressFrame(&local_88,__real_41200000,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"Core");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"Networking");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"LiveCoding");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::EnterProgressFrame(&local_88,fVar6,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  FWindowsPlatformApplicationMisc::LoadStartupModules();
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::EnterProgressFrame(&local_88,fVar6,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  bVar8 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar8) {
    pFVar10 = ::FName::FName((FName *)&local_res10.s,"Messaging");
    FVar2 = *pFVar10;
    pFVar12 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(pFVar12,FVar2);
  }
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"MRMesh");
  FVar2 = *pFVar10;
  pFVar12 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(pFVar12,FVar2);
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::EnterProgressFrame(&local_88,fVar6,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::EnterProgressFrame(&local_88,fVar6,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"SlateCore");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"Slate");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"SlateReflector");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"UMG");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::EnterProgressFrame(&local_88,__real_41a00000,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"MessageLog");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,"FunctionalTesting");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar9 = FText::FText((FText *)&local_98);
  FSlowTask::EnterProgressFrame(&local_88,__real_41f00000,pFVar9);
  if (local_98.StatData.Pad != (uchar  [8])0x0) {
    (**(code **)(*(longlong *)local_98.StatData.Pad + 0x10))();
  }
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"Overlay");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"MediaAssets");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"ClothingSystemRuntimeNv");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"PacketHandler");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"NetworkReplayStreaming");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  pFVar12 = FModuleManager::Get();
  pFVar10 = ::FName::FName((FName *)&local_res10.s,L"MassEntity");
  FModuleManager::LoadModule(pFVar12,*pFVar10,None);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_98.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res10);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FSlowTask::Destroy(&local_88);
  if (local_88.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_88.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.DefaultMessage.TextData.Reference + 0x10))();
  }
  return true;
}

// LoadStartupModules @ 148da7ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FEngineLoop::LoadStartupModules(FEngineLoop *this)

{
  FFeedbackContext *pFVar1;
  char cVar2;
  FText *pFVar3;
  IProjectManager *pIVar4;
  IPluginManager *pIVar5;
  bool bVar6;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FText local_78;
  FSlowTask local_68;
  
  pFVar1 = GWarn;
  pFVar3 = FText::FText(&local_78);
  FSlowTask::FSlowTask(&local_68,__real_40400000,pFVar3,true,pFVar1);
  FSlowTask::Initialize(&local_68);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name4613,L"Modules");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name4613,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name4613,true);
  pFVar3 = FText::FText(&local_78);
  FSlowTask::EnterProgressFrame(&local_68,__real_3f800000,pFVar3);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pIVar4 = IProjectManager::Get();
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,5);
  if (cVar2 != '\0') {
    pIVar5 = IPluginManager::Get();
    cVar2 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,5);
    if (cVar2 != '\0') {
      pFVar3 = FText::FText(&local_78);
      FSlowTask::EnterProgressFrame(&local_68,__real_3f800000,pFVar3);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      pIVar4 = IProjectManager::Get();
      cVar2 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,6);
      if (cVar2 != '\0') {
        pIVar5 = IPluginManager::Get();
        cVar2 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,6);
        if (cVar2 != '\0') {
          pFVar3 = FText::FText(&local_78);
          FSlowTask::EnterProgressFrame(&local_68,__real_3f800000,pFVar3);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          pIVar4 = IProjectManager::Get();
          cVar2 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,7);
          if (cVar2 != '\0') {
            pIVar5 = IPluginManager::Get();
            cVar2 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,7);
            if (cVar2 != '\0') {
              bVar6 = true;
              goto LAB_148da81e4;
            }
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_148da81e4:
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  FSlowTask::Destroy(&local_68);
  if (local_68.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_68.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.DefaultMessage.TextData.Reference + 0x10))();
  }
  return bVar6;
}

// OverrideProjectModule @ 148da84b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FEngineLoop::OverrideProjectModule(FEngineLoop *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != &OriginalProjectModuleName) {
    iVar1 = (param_1->Data).ArrayNum;
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    OriginalProjectModuleName.Data.ArrayNum = iVar1;
    if (((iVar1 != 0) || (OriginalProjectModuleName.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,OriginalProjectModuleName.Data.ArrayMax,
                   (ForAnyElementType *)&OriginalProjectModuleName,iVar1,
                   &OriginalProjectModuleName.Data.ArrayMax), iVar1 != 0)) {
      memcpy(OriginalProjectModuleName.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
  }
  if (param_2 != &ReplacementProjectModuleName) {
    iVar1 = (param_2->Data).ArrayNum;
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    ReplacementProjectModuleName.Data.ArrayNum = iVar1;
    if (((iVar1 != 0) || (ReplacementProjectModuleName.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,ReplacementProjectModuleName.Data.ArrayMax,
                   (ForAnyElementType *)&ReplacementProjectModuleName,iVar1,
                   &ReplacementProjectModuleName.Data.ArrayMax), iVar1 != 0)) {
      memcpy(ReplacementProjectModuleName.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
  }
  FGenericPlatformMisc::LowLevelOutputDebugStringf
            (
            L"OverrideProjectModule : OriginalProjectModuleName=%s, ReplacementProjectModuleName=%s\n"
            );
  return;
}

// PostInitRHI @ 148da88e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FEngineLoop::PostInitRHI(void)

{
  int iVar1;
  code *pcVar2;
  EShaderPlatform EVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  wchar_t *pwVar6;
  undefined ***pppuVar7;
  uint uVar8;
  ulonglong uVar10;
  int *piVar11;
  undefined1 auStackY_e8 [32];
  FStereoShaderAspects local_b8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b0;
  code *local_98 [2];
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  ulonglong uVar9;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar9 = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x5e,&local_b0.AllocatorInstance,&local_b0.ArrayNum,&local_b0.ArrayMax);
  piVar11 = &GPixelFormats[0].BlockBytes;
  uVar10 = uVar9;
  do {
    iVar1 = *piVar11;
    if (local_b0.ArrayNum <= (int)uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    piVar11 = piVar11 + 0xc;
    *(int *)(local_b0.AllocatorInstance.Data + uVar10) = iVar1;
    uVar10 = uVar10 + 4;
  } while ((int)uVar8 < 0x5e);
  RHIPostInit(&local_b0);
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
  EVar3 = GMaxRHIShaderPlatform;
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
              (local_b8,GMaxRHIShaderPlatform);
    UE::StereoRenderUtils::LogISRInit(local_b8);
    UE::StereoRenderUtils::VerifyISRConfig(local_b8,EVar3);
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_80 = `FEngineLoop::PostInitRHI'::__l7::<lambda_1>::<lambda_invoker_cdecl>;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                  ::Call;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FEngineLoop::PostInitRHI_::__l7::TSTR_InitializeSystemTextures7039>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pcStack_50 = pcStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FEngineLoop::PostInitRHI'::__l7::TSTR_InitializeSystemTextures7039>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar10 = (ulonglong)local_38;
      if (2 < uVar10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar7 = local_40;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar7 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar7 = local_70;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// PreInit @ 148da8bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FEngineLoop::PreInit(FEngineLoop *this,int param_1,wchar_t **param_2,wchar_t *param_3)

{
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  FCommandLine::BuildFromArgV(&local_18,(wchar_t *)0x0,param_1,param_2,param_3);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  FBootProfiling::InitCounters();
  iVar1 = PreInitPreStartupScreen(&GEngineLoop,(wchar_t *)FVar2.Data);
  if (iVar1 == 0) {
    iVar1 = PreInitPostStartupScreen(&GEngineLoop,(wchar_t *)FVar2.Data);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FPreInitContext::Cleanup(&GEngineLoop.PreInitContext);
    }
  }
  else {
    FPreInitContext::Cleanup(&GEngineLoop.PreInitContext);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1;
}

// PreInit @ 148da8c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall FEngineLoop::PreInit(FEngineLoop *this,wchar_t *param_1)

{
  int iVar1;
  
  FBootProfiling::InitCounters();
  iVar1 = PreInitPreStartupScreen(this,param_1);
  if (iVar1 == 0) {
    iVar1 = PreInitPostStartupScreen(this,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FPreInitContext::Cleanup(&this->PreInitContext);
  return iVar1;
}

// PreInitHMDDevice @ 148da8cf0

void __cdecl FEngineLoop::PreInitHMDDevice(void)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  IModularFeatures *pIVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  longlong *plVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 local_res10 [8];
  IModularFeatures *local_res18;
  ulonglong local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  FString local_60;
  void *local_50 [3];
  
  pwVar10 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar10,L"nohmd");
  if (!bVar4) {
    pwVar10 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar10,L"emulatestereo");
    if (!bVar4) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                        ::__l2::HMDFeatureName,L"HMD");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar3 = `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
              ::__l2::HMDFeatureName;
      pIVar11 = IModularFeatures::Get();
      uVar19 = 0;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      iStack_64 = 0;
      local_res18 = pIVar11;
      iVar7 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,FVar3);
      uVar16 = uVar19;
      if (0 < iVar7) {
        do {
          lVar12 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar3,uVar16);
          local_88 = lVar12 - 8;
          if (lVar12 == 0) {
            local_88 = uVar19;
          }
          if (((local_70.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < local_70.Data + (longlong)iStack_64 * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_68 == iStack_64) {
            local_68 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_70,&iStack_64);
          }
          iVar9 = local_68 + 1;
          uVar15 = (int)uVar16 + 1;
          *(ulonglong *)(local_70.Data + (longlong)local_68 * 8) = local_88;
          uVar16 = (ulonglong)uVar15;
          local_68 = iVar9;
        } while ((int)uVar15 < iVar7);
      }
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
      pwVar10 = FCommandLine::Get();
      bVar4 = FParse::Value(pwVar10,L"hmd=",&local_60,true,(wchar_t **)0x0);
LAB_148da8ed0:
      uVar15 = (uint)uVar19;
      if ((-1 < (int)uVar15) && ((int)uVar15 < local_68)) {
        uVar8 = 0;
        if ((int)uVar15 < local_68) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)(local_70.Data + (longlong)(int)uVar15 * 8);
        if (bVar4) {
          local_80.Data = (FScriptContainerElement *)0x0;
          local_78 = 0;
          (**(code **)(*plVar1 + 0x48))(plVar1,&local_80);
          pFVar13 = (FScriptContainerElement *)(**(code **)(*plVar1 + 0x40))(plVar1,local_50);
          if (((local_80.Data <= pFVar13) &&
              (pFVar13 < local_80.Data + (longlong)local_78._4_4_ * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = (int)local_78;
          if ((int)local_78 == local_78._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_80,(int *)((longlong)&local_78 + 4));
          }
          local_78 = CONCAT44(local_78._4_4_,iVar7 + 1);
          pFVar14 = local_80.Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar14 = 0;
          *(undefined8 *)pFVar14 = *(undefined8 *)pFVar13;
          *(undefined8 *)pFVar13 = 0;
          *(int *)(pFVar14 + 8) = *(int *)(pFVar13 + 8);
          *(int *)(pFVar14 + 0xc) = *(int *)(pFVar13 + 0xc);
          *(undefined8 *)(pFVar13 + 8) = 0;
          if (local_50[0] != (void *)0x0) {
            FMemory::Free(local_50[0]);
          }
          iVar7 = (int)local_78;
          bVar5 = true;
          pFVar13 = local_80.Data + (longlong)(int)local_78 * 0x10;
          FVar17.Data = local_80.Data;
          iVar9 = local_60.Data.ArrayNum;
          do {
            if ((int)local_78 != iVar7) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
              iVar9 = local_60.Data.ArrayNum;
            }
            if (FVar17.Data == pFVar13) goto LAB_148da90a4;
            if (iVar9 == *(int *)(FVar17.Data + 8)) {
              if (iVar9 < 2) goto LAB_148da9094;
              iVar9 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_60.Data.AllocatorInstance.Data,
                                 *(wchar_t **)FVar17.Data);
              bVar20 = iVar9 == 0;
              iVar9 = local_60.Data.ArrayNum;
            }
            else {
              bVar20 = *(int *)(FVar17.Data + 8) + iVar9 == 1;
            }
            if (bVar20) goto LAB_148da9094;
            FVar17.Data = FVar17.Data + 0x10;
          } while( true );
        }
        cVar6 = (**(code **)(*plVar1 + 0x50))(plVar1);
        bVar5 = cVar6 == '\0';
        goto LAB_148da90c6;
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
  }
  return;
LAB_148da9094:
  cVar6 = (**(code **)(*plVar1 + 0x50))(plVar1);
  bVar5 = cVar6 == '\0';
LAB_148da90a4:
  DestructItems<FString,int>((FString *)local_80.Data,(int)local_78);
  pIVar11 = local_res18;
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
    pIVar11 = local_res18;
  }
LAB_148da90c6:
  if (bVar5) {
    plVar18 = plVar1 + 1;
    if (plVar1 == (longlong *)0x0) {
      plVar18 = (longlong *)0x0;
    }
    (**(code **)((longlong)*pIVar11 + 0x30))(pIVar11,FVar3,plVar18);
    uVar19 = (ulonglong)(uVar15 + 1);
  }
  else {
    uVar19 = (ulonglong)(uVar15 + 1);
  }
  goto LAB_148da8ed0;
}

// PreInitPostStartupScreen @ 148da91b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall FEngineLoop::PreInitPostStartupScreen(FEngineLoop *this,wchar_t *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateRenderer *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FFeedbackContext *pFVar12;
  UEngine *pUVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  DWORD DVar18;
  int iVar19;
  int iVar20;
  HMODULE pHVar21;
  longlong lVar22;
  HANDLE hFile;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats> FVar24;
  IProjectManager *pIVar25;
  IPluginManager *pIVar26;
  IInstallBundleManager *pIVar27;
  FPreLoadScreenManager *pFVar28;
  IGameMoviePlayer *pIVar29;
  TSharedPtr<SWindow,1> *pTVar30;
  FString *pFVar31;
  size_t sVar32;
  FThreadSafeStaticStat<_public:_int___cdecl_FEngineLoop::PreInitPostStartupScreen(wchar_t_const_*)_::_18_::FStat_STAT_InitialUObjectLoad>
  FVar33;
  FText *pFVar34;
  FModuleManager *pFVar35;
  FTextLocalizationManager *this_00;
  FPackageLocalizationManager *pFVar36;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FSlateApplication *pFVar37;
  UOnlineEngineInterface *pUVar38;
  undefined8 *puVar39;
  ulong64 uVar40;
  UClass *pUVar41;
  UClass *pUVar42;
  TStringView<wchar_t> *pTVar43;
  FOutputDeviceRedirector *pFVar44;
  FILE *_File;
  UPackage *pUVar45;
  FAutomationTestFramework *pFVar46;
  UObject *pUVar47;
  FUObjectItem *this_03;
  void *pvVar48;
  FTrackedActivity *pFVar49;
  wchar_t *pwVar50;
  ulonglong uVar51;
  FHighResScreenshotConfig *this_04;
  IModuleInterface *pIVar52;
  SWindow *pSVar53;
  longlong *plVar54;
  ulonglong uVar55;
  FStaticBasicLogRecord *pFVar56;
  FScriptContainerElement *pFVar57;
  FSlowTask *this_05;
  int iVar58;
  ForAnyElementType FVar59;
  wchar_t *pwVar60;
  FEngineLoop *this_06;
  char cVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auStackY_db8 [32];
  bool local_d56;
  bool local_d55;
  bool local_d54;
  char local_d53;
  char local_d52;
  char local_d51;
  bool local_d50;
  FEngineTrackedActivityScope local_d4f;
  undefined1 local_d4e;
  FEngineTrackedActivityScope local_d4d;
  FEngineTrackedActivityScope local_d4c;
  char local_d4b;
  char local_d4a;
  undefined1 local_d49;
  undefined1 local_d48;
  char local_d47;
  FColor_u_0 local_d44;
  FName local_d40;
  byte local_d38;
  uint local_d30;
  FString local_d28;
  FName local_d18;
  byte local_d10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d08;
  TArray<FString,TSizedDefaultAllocator<32>_> local_cf8;
  FName local_ce8;
  FName local_cd8;
  int local_cd0 [2];
  ForAnyElementType local_cc8;
  undefined8 local_cc0;
  FLLMScope local_cb8;
  FLLMScope local_cb4;
  FString local_cb0;
  FEngineLoop *local_ca0;
  FColor_u_0 local_c98 [2];
  TSharedPtr<IInstallBundleManager,1> local_c90;
  UObject *local_c80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c78;
  undefined8 local_c68;
  FName local_c60;
  FName local_c58;
  undefined8 local_c50;
  FSlowTask *local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 local_c28;
  undefined1 local_c20 [8];
  FDelegateAllocation local_c18;
  FMemScope local_c08;
  undefined1 local_c00 [8];
  IGameMoviePlayer *local_bf8;
  FMemScope local_bf0;
  LARGE_INTEGER local_be8;
  FName local_be0;
  FString local_bd8;
  FStatMessage local_bc8;
  FScriptContainerElement *local_bb8;
  int iStack_bb0;
  undefined4 uStack_bac;
  FString local_ba8;
  wchar_t *local_b98;
  undefined8 uStack_b90;
  FName local_b88;
  FTrackedActivityScope local_b80;
  FName local_b78;
  FString local_b70;
  FString local_b60;
  FScriptContainerElement *local_b48;
  int iStack_b40;
  undefined4 uStack_b3c;
  FString local_b38;
  FString local_b28;
  int *local_b18;
  TSharedPtr<SWindow,1> local_b10;
  FString local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  SWindow *local_a70;
  TReferenceControllerBase<1> *local_a68;
  FScopedBootTiming local_a60;
  FScopedBootTiming local_a48;
  FScopedBootTiming local_a30;
  FScopedBootTiming local_a18;
  FScopedBootTiming local_a00;
  FScopedBootTiming local_9e8;
  FScopedBootTiming local_9d0;
  TStringView<wchar_t> local_9b8;
  wchar_t *local_9a8;
  undefined4 local_9a0;
  FDestructionSentinel local_998;
  FDelegateAllocation *local_980;
  FName local_978;
  TSharedPtr<SWindow,1> local_970;
  FString local_960;
  FString local_950;
  FString local_940;
  FText local_930;
  FText local_920;
  FText local_910;
  FText local_900;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  FText local_8e0;
  FText local_8d0;
  TStringView<wchar_t> local_8b8;
  TStringView<wchar_t> local_8a8;
  FString local_898;
  FString local_888;
  TStringView<wchar_t> local_878;
  TStringView<wchar_t> local_868;
  TStringView<wchar_t> local_858;
  FName local_848;
  undefined1 local_840 [8];
  FName local_838;
  FName local_830;
  FName local_828;
  undefined1 local_820 [8];
  FName local_818;
  undefined1 local_810 [8];
  FScopedBootTiming local_808;
  FScopedBootTiming local_7f0;
  FScopedBootTiming local_7d8;
  FScopedBootTiming local_7c0;
  FScopedBootTiming local_7a8;
  FScopedBootTiming local_790;
  <lambda_2> local_778 [8];
  FName local_770;
  FScopedBootTiming local_768;
  FScopedBootTiming local_750;
  FScopedBootTiming local_738;
  FReadAccessScope local_720;
  FScopedBootTiming local_708;
  FScopedBootTiming local_6f0;
  FScopedBootTiming local_6d8;
  FScopedBootTiming local_6c0;
  FScopedBootTiming local_6a8;
  FScopedBootTiming local_690;
  FScopedBootTiming local_678;
  FScopedBootTiming local_660;
  FString local_648;
  FString local_638;
  TSharedPtr<SWindow,1> local_628;
  TStringView<wchar_t> local_618;
  FString local_608;
  TStringView<wchar_t> local_5f8;
  undefined1 local_5e8 [128];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_568;
  TStringBuilderBase<wchar_t> local_518;
  wchar_t local_4f8 [512];
  TStringView<wchar_t> local_f8;
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  TStringView<wchar_t> local_c8;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_db8;
  iVar19 = 0;
  iVar58 = 0;
  local_d44.Bits = 0;
  bVar62 = CpuChannel->Enabled < 0;
  local_ca0 = this;
  if (bVar62) {
    local_d53 = '\0';
  }
  else {
    local_d53 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3396,"FEngineLoop::PreInitPostStartupScreen",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
               ,0xd44);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3396);
  }
  cVar61 = !bVar62;
  FScopedBootTiming::FScopedBootTiming(&local_678,"FEngineLoop::PreInitPostStartupScreen");
  FLLMScope::FLLMScope(&local_cb8,EnginePreInitMemory,false,None,Default,true);
  FMemScope::FMemScope(&local_c08,EnginePreInitMemory,true);
  if (GIsRequestingExit != false) goto LAB_148dac421;
  pHVar21 = GetModuleHandleW((LPCWSTR)0x0);
  lVar22 = ImageNtHeader(pHVar21);
  if (lVar22 == 0) {
    hFile = GetStdHandle(0xfffffff5);
    DVar18 = GetFileType(hFile);
    GIsConsoleExecutable = DVar18 == 2;
  }
  else {
    GIsConsoleExecutable = *(short *)(lVar22 + 0x5c) == 3;
  }
  FVar24 = StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats;
  if (StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats ==
      (FThreadSafeStaticStat<FStat_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats>)0x0) {
    pFVar23 = ::FName::FName(&local_818,"STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FEngineLoop_PreInitPostStartupScreen_AfterStats,*pFVar23,
                        L"FEngineLoop::PreInitPostStartupScreen.AfterStats","STATGROUP_LoadTime",
                        "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d40.ComparisonIndex.Value = 0;
  local_d40.Number = 0;
  local_d38 = 0;
  FVar3 = *(FName *)FVar24;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c98[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      local_d38 = local_d38 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_c60.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_c60.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c60,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0xd5d);
        local_d38 = local_d38 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d40 = FVar3;
      local_cd8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_d38 = local_d38 | 4;
    }
  }
  local_d55 = (this->PreInitContext).bDumpEarlyConfigReads;
  local_d28.Data.ArrayNum = (this->PreInitContext).Token.Data.ArrayNum;
  lVar22 = (longlong)local_d28.Data.ArrayNum;
  pFVar57 = (this->PreInitContext).Token.Data.AllocatorInstance.Data;
  local_d56 = (this->PreInitContext).bDumpEarlyPakFileReads;
  bVar62 = (this->PreInitContext).bForceQuitAfterEarlyReads;
  local_d54 = (this->PreInitContext).bWithConfigPatching;
  local_d4b = (this->PreInitContext).bHasEditorToken;
  local_d4a = (this->PreInitContext).bIsRegularClient;
  local_d47 = (this->PreInitContext).bIsPossiblyUnrecognizedCommandlet;
  local_d28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d28.Data.ArrayNum == 0) {
    local_d28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d28.Data.ArrayNum,0,(ForAnyElementType *)&local_d28,local_d28.Data.ArrayNum
               ,&local_d28.Data.ArrayMax);
    memcpy(local_d28.Data.AllocatorInstance.Data,pFVar57,lVar22 * 2);
  }
  if ((this->PreInitContext).CommandletCommandLine.Data.ArrayNum == 0) {
    local_cd8 = (FName)0x15060d16c;
  }
  else {
    local_cd8 = (FName)(this->PreInitContext).CommandletCommandLine.Data.AllocatorInstance.Data;
  }
  if (((this->PreInitContext).SlowTaskPtr == (FScopedSlowTask *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreInitContext.SlowTaskPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                          ,0xd6e,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    iVar19 = (*pcVar6)();
    return iVar19;
  }
  local_c48 = (FSlowTask *)(this->PreInitContext).SlowTaskPtr;
  IInstallBundleManager::GetPlatformInstallBundleManager(&local_c90);
  if (PRIVATE_GIsRunningCommandlet == false) {
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3448,"PreInitPostStartupScreen_StartupGraphics",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xd78);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3448);
    }
    FScopedBootTiming::FScopedBootTiming(&local_7f0,"PreInitPostStartupScreen_StartupGraphics");
    local_ce8 = (FName)(this->PreInitContext).SlateRenderer.Object;
    pTVar4 = (this->PreInitContext).SlateRenderer.SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_ce8 == (FName)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      iVar19 = (*pcVar6)();
      return iVar19;
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_ce8 == (FName)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      iVar19 = (*pcVar6)();
      return iVar19;
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3454,
                 "LoadModulesForProject(ELoadingPhase::PreEarlyLoadingScreen)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xd7e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3454);
    }
    FScopedBootTiming::FScopedBootTiming
              (&local_808,"LoadModulesForProject(ELoadingPhase::PreEarlyLoadingScreen)");
    pIVar25 = IProjectManager::Get();
    cVar16 = (**(code **)((longlong)*pIVar25 + 0x18))(pIVar25,3);
    if (cVar16 == '\0') {
LAB_148da9a3c:
      FScopedBootTiming::~FScopedBootTiming(&local_808);
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FScopedBootTiming::~FScopedBootTiming(&local_7f0);
      goto LAB_148dac3cb;
    }
    pIVar26 = IPluginManager::Get();
    cVar16 = (**(code **)((longlong)*pIVar26 + 0x20))(pIVar26,3);
    if (cVar16 == '\0') goto LAB_148da9a3c;
    FScopedBootTiming::~FScopedBootTiming(&local_808);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_c90.Object != (IInstallBundleManager *)0x0) {
      pIVar27 = TSharedPtr<IInstallBundleManager,1>::operator->(&local_c90);
      cVar16 = (**(code **)(*(longlong *)pIVar27 + 0x150))(pIVar27);
      if (cVar16 == '\0') {
        TMulticastDelegateRegistration<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
        ::AddStatic<bool_&,bool_&,bool_&,bool_&>
                  ((TMulticastDelegateRegistration<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
                    *)&IInstallBundleManager::InstallBundleCompleteDelegate,
                   (_func___cdecl_void_FInstallBundleRequestResultInfo_bool_bool_bool_bool *)
                   local_810,(bool *)OnStartupContentMounted,&local_d55,&local_d56,&local_d54);
      }
    }
    bVar15 = false;
    FEngineTrackedActivityScope::FEngineTrackedActivityScope(&local_d4f,L"Play Preload Screen");
    bVar63 = -1 < CpuChannel->Enabled;
    if (bVar63) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3475,"PlayFirstPreLoadScreen",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xd93);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3475);
    }
    FScopedBootTiming::FScopedBootTiming(&local_738,"PlayFirstPreLoadScreen");
    pFVar28 = FPreLoadScreenManager::Get();
    if (pFVar28 != (FPreLoadScreenManager *)0x0) {
      bVar64 = -1 < CpuChannel->Enabled;
      if (bVar64) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3479,
                   "PlayFirstPreLoadScreen - FPreLoadScreenManager::Get()->Initialize",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0xd97);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3479);
      }
      FScopedBootTiming::FScopedBootTiming
                (&local_660,"PlayFirstPreLoadScreen - FPreLoadScreenManager::Get()->Initialize");
      pFVar28 = FPreLoadScreenManager::Get();
      FPreLoadScreenManager::Initialize(pFVar28,(FSlateRenderer *)local_ce8);
      pFVar28 = FPreLoadScreenManager::Get();
      bVar15 = FPreLoadScreenManager::HasRegisteredPreLoadScreenType(pFVar28,EarlyStartupScreen);
      if (bVar15) {
LAB_148da97cf:
        bVar15 = true;
      }
      else {
        pFVar28 = FPreLoadScreenManager::Get();
        bVar15 = FPreLoadScreenManager::HasRegisteredPreLoadScreenType(pFVar28,EngineLoadingScreen);
        if (bVar15) goto LAB_148da97cf;
        bVar15 = false;
      }
      pFVar28 = FPreLoadScreenManager::Get();
      bVar17 = FPreLoadScreenManager::HasRegisteredPreLoadScreenType(pFVar28,EarlyStartupScreen);
      if (bVar17) {
        pFVar28 = FPreLoadScreenManager::Get();
        TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
        AddLambda<_FEngineLoop::PreInitPostStartupScreen_::__l34::<lambda_2>_>
                  ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                   &pFVar28->IsResponsibleForRenderingDelegate,local_778);
        pFVar28 = FPreLoadScreenManager::Get();
        FPreLoadScreenManager::PlayFirstPreLoadScreen(pFVar28,EarlyStartupScreen);
      }
      FScopedBootTiming::~FScopedBootTiming(&local_660);
      if (bVar64) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar64 = IsMoviePlayerEnabled();
    if ((bVar64) && (!bVar15)) {
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3510,"GetMoviePlayer()->SetupLoadingScreenFromIni",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0xdb6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3510);
      }
      FScopedBootTiming::FScopedBootTiming(&local_768,"GetMoviePlayer()->SetupLoadingScreenFromIni")
      ;
      pIVar29 = GetMoviePlayer();
      (**(code **)((longlong)*pIVar29 + 0x78))(pIVar29);
      FScopedBootTiming::~FScopedBootTiming(&local_768);
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar15 = IsMoviePlayerEnabled();
    if (bVar15) {
      pIVar29 = GetMoviePlayer();
      cVar16 = (**(code **)((longlong)*pIVar29 + 0x30))(pIVar29);
      if (cVar16 != '\0') {
        bVar15 = -1 < CpuChannel->Enabled;
        if (bVar15) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId3518,"EarlyStartupMovie",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                     ,0xdbe);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3518);
        }
        FScopedBootTiming::FScopedBootTiming(&local_750,"EarlyStartupMovie");
        local_bf8 = GetMoviePlayer();
        local_c80 = *(UObject **)((longlong)*local_bf8 + 8);
        pFVar28 = FPreLoadScreenManager::Get();
        if (pFVar28 == (FPreLoadScreenManager *)0x0) {
          local_b10.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_d30 = 2;
          pTVar30 = &local_b10;
          local_a70 = (SWindow *)0x0;
        }
        else {
          pFVar28 = FPreLoadScreenManager::Get();
          local_d30 = 1;
          pTVar30 = FPreLoadScreenManager::GetRenderWindow(pFVar28,&local_970);
          local_a70 = pTVar30->Object;
        }
        local_a68 = (pTVar30->SharedReferenceCount).ReferenceController;
        (pTVar30->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar30->Object = (SWindow *)0x0;
        (*(code *)local_c80)(local_bf8,local_ce8,&local_a70);
        if ((local_d30 & 2) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b10.SharedReferenceCount.ReferenceController);
        }
        if ((local_d30 & 1) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_970.SharedReferenceCount.ReferenceController);
        }
        pIVar29 = GetMoviePlayer();
        (**(code **)((longlong)*pIVar29 + 0x38))(pIVar29);
        FScopedBootTiming::~FScopedBootTiming(&local_750);
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    FScopedBootTiming::~FScopedBootTiming(&local_738);
    if (bVar63) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FEngineTrackedActivityScope::~FEngineTrackedActivityScope(&local_d4f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FScopedBootTiming::~FScopedBootTiming(&local_7f0);
LAB_148da9b12:
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_c90.Object == (IInstallBundleManager *)0x0) {
LAB_148da9b55:
      bVar14 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                          &FCoreDelegates::OnMountAllPakFiles);
      if ((bVar14) && (bVar14 = FPaths::HasProjectPersistentDownloadDir(), bVar14)) {
        bVar14 = -1 < CpuChannel->Enabled;
        if (bVar14) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId3578,"MountPaksAfterEarlyStartupScreen",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                     ,0xdfa);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3578);
        }
        FScopedBootTiming::FScopedBootTiming(&local_708,"MountPaksAfterEarlyStartupScreen");
        pFVar31 = FPaths::ProjectPersistentDownloadDir(&local_960);
        if ((pFVar31->Data).ArrayNum == 0) {
          local_c8.DataPtr = L"";
        }
        else {
          local_c8.DataPtr = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
        local_c8.Size = iVar58;
        if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
          sVar32 = wcslen(local_c8.DataPtr);
          local_c8.Size = (int)sVar32;
        }
        local_b8 = L"InstalledContent";
        local_b0 = 0x10;
        local_a8 = GInternalProjectName;
        sVar32 = wcslen(GInternalProjectName);
        local_a0 = (undefined4)sVar32;
        local_98 = L"Content";
        local_88 = L"Paks";
        local_90 = 7;
        local_80 = 4;
        FPaths::CombineInternal(&local_af0,&local_c8,5);
        if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_960.Data.AllocatorInstance.Data);
        }
        pFVar31 = FPaths::ProjectPersistentDownloadDir(&local_950);
        if ((pFVar31->Data).ArrayNum == 0) {
          local_9b8.DataPtr = L"";
        }
        else {
          local_9b8.DataPtr = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
        local_9b8.Size = iVar58;
        if ((FScriptContainerElement *)local_9b8.DataPtr != (FScriptContainerElement *)0x0) {
          sVar32 = wcslen(local_9b8.DataPtr);
          local_9b8.Size = (int)sVar32;
        }
        local_9a8 = L"InstalledContent";
        local_9a0 = 0x10;
        FPaths::CombineInternal(&local_b00,&local_9b8,2);
        FGenericPlatformMisc::AddAdditionalRootDirectory(&local_b00);
        if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b00.Data.AllocatorInstance.Data);
        }
        if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_950.Data.AllocatorInstance.Data);
        }
        local_cc8.Data = (FScriptContainerElement *)0x0;
        local_cc0 = 0;
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_cc8,(int *)((longlong)&local_cc0 + 4));
        local_cc0 = CONCAT44(local_cc0._4_4_,iVar19 + 1);
        ::FString::FString((FString *)(local_cc8.Data + (longlong)iVar19 * 0x10),&local_af0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreDelegates::OnMountAllPakFiles,&local_720);
        pSVar53 = (SWindow *)0x0;
        if (FCoreDelegates::OnMountAllPakFiles._16_4_ != 0) {
          pSVar53 = (SWindow *)FCoreDelegates::OnMountAllPakFiles._8_8_;
        }
        (**(code **)(pSVar53->_padding_ + 0x60))(pSVar53,&local_cc8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_720);
        pIVar26 = IPluginManager::Get();
        (**(code **)((longlong)*pIVar26 + 8))(pIVar26);
        pIVar26 = IPluginManager::Get();
        (**(code **)((longlong)*pIVar26 + 0x20))(pIVar26,3);
        DestructItems<FString,int>((FString *)local_cc8.Data,(int)local_cc0);
        if (local_cc8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_cc8.Data);
        }
        if (local_af0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_af0.Data.AllocatorInstance.Data);
        }
        FScopedBootTiming::~FScopedBootTiming(&local_708);
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      DumpEarlyReads(local_d55,local_d56,bVar62);
      if (local_d54 != false) {
        if (CpuChannel->Enabled < 0) {
          FScopedBootTiming::FScopedBootTiming
                    (&local_a60,"ReapplyCVarsFromIniAfterEarlyStartupScreen");
          UE::ConfigUtilities::ReapplyRecordedCVarSettingsFromIni();
          UE::ConfigUtilities::DeleteRecordedCVarSettingsFromIni();
          FScopedBootTiming::~FScopedBootTiming(&local_a60);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId3597,"ReapplyCVarsFromIniAfterEarlyStartupScreen",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                     ,0xe0d);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3597);
          FScopedBootTiming::FScopedBootTiming
                    (&local_a60,"ReapplyCVarsFromIniAfterEarlyStartupScreen");
          UE::ConfigUtilities::ReapplyRecordedCVarSettingsFromIni();
          UE::ConfigUtilities::DeleteRecordedCVarSettingsFromIni();
          FScopedBootTiming::~FScopedBootTiming(&local_a60);
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      FLLMScope::FLLMScope(&local_cb4,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_bf0,Shaders,true);
      bVar62 = -1 < CpuChannel->Enabled;
      if (bVar62) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3604,"FShaderCodeLibrary::OpenLibrary",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0xe14);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3604);
      }
      FScopedBootTiming::FScopedBootTiming(&local_6f0,"FShaderCodeLibrary::OpenLibrary");
      pFVar31 = FPaths::ProjectContentDir(&local_940);
      ::FString::FString(&local_ae0,GInternalProjectName);
      FShaderCodeLibrary::OpenLibrary(&local_ae0,pFVar31,false);
      if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
      }
      if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_940.Data.AllocatorInstance.Data);
      }
      FGenericPlatformMisc::GetAdditionalRootDirectories(&local_c78);
      iVar19 = local_c78.ArrayNum;
      pFVar57 = local_c78.AllocatorInstance.Data + (longlong)local_c78.ArrayNum * 0x10;
      FVar59.Data = local_c78.AllocatorInstance.Data;
      while( true ) {
        if (local_c78.ArrayNum != iVar19) {
          local_d4e = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_d4e);
        }
        if (FVar59.Data == pFVar57) break;
        local_f8.DataPtr = *(wchar_t **)FVar59.Data;
        local_e8 = GInternalProjectName;
        local_f8.Size = *(int *)(FVar59.Data + 8) + -1;
        if (*(int *)(FVar59.Data + 8) == 0) {
          local_f8.Size = iVar58;
        }
        sVar32 = wcslen(GInternalProjectName);
        local_e0 = (undefined4)sVar32;
        local_d8 = L"Content";
        local_d0 = 7;
        FPaths::CombineInternal(&local_ac0,&local_f8,3);
        ::FString::FString(&local_ad0,GInternalProjectName);
        FShaderCodeLibrary::OpenLibrary(&local_ad0,&local_ac0,false);
        if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
        }
        if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
        }
        FVar59.Data = FVar59.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_c78.AllocatorInstance.Data,local_c78.ArrayNum);
      cVar61 = local_d53;
      if (local_c78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c78.AllocatorInstance.Data);
      }
      FShaderPipelineCache::OpenPipelineFileCache(GMaxRHIShaderPlatform);
      FScopedBootTiming::~FScopedBootTiming(&local_6f0);
      if (bVar62) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_bf0);
      FLLMScope::~FLLMScope(&local_cb4);
    }
    else {
      pIVar27 = TSharedPtr<IInstallBundleManager,1>::operator->(&local_c90);
      cVar16 = (**(code **)(*(longlong *)pIVar27 + 0x150))(pIVar27);
      if (cVar16 != '\0') goto LAB_148da9b55;
      pIVar27 = TSharedPtr<IInstallBundleManager,1>::operator->(&local_c90);
      cVar16 = (**(code **)(*(longlong *)pIVar27 + 0x148))(pIVar27);
      if (cVar16 == '\0') goto LAB_148da9b55;
    }
    pwVar50 = L"";
    InitGameTextLocalization();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_InitialUObjectLoad ==
          (FThreadSafeStaticStat<_public:_int___cdecl_FEngineLoop::PreInitPostStartupScreen(wchar_t_const_*)_::_18_::FStat_STAT_InitialUObjectLoad>
           )0x0) {
        pFVar23 = ::FName::FName(&local_770,"STAT_InitialUObjectLoad");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitialUObjectLoad,*pFVar23,
                   L"Initial UObject load","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                   true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      else {
        _Init_thread_footer(&::_TSS1);
      }
    }
    FVar33 = StatPtr_STAT_InitialUObjectLoad;
    if (StatPtr_STAT_InitialUObjectLoad ==
        (FThreadSafeStaticStat<_public:_int___cdecl_FEngineLoop::PreInitPostStartupScreen(wchar_t_const_*)_::_18_::FStat_STAT_InitialUObjectLoad>
         )0x0) {
      pFVar23 = ::FName::FName(&local_978,"STAT_InitialUObjectLoad");
      FVar33 = (FThreadSafeStaticStat<_public:_int___cdecl_FEngineLoop::PreInitPostStartupScreen(wchar_t_const_*)_::_18_::FStat_STAT_InitialUObjectLoad>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitialUObjectLoad,*pFVar23,
                            L"Initial UObject load","STATGROUP_LoadTime","STATCAT_Advanced",
                            L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_d18.ComparisonIndex.Value = 0;
    local_d18.Number = 0;
    local_d10 = 0;
    FVar3 = *(FName *)FVar33;
    if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_d44.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_d44._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
        local_d10 = local_d10 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_c58.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
          local_c58.Number = FVar3.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_c58,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                     ,0xe31);
          local_d10 = local_d10 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_d18 = FVar3;
        local_ce8 = FVar3;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        local_d10 = local_d10 | 4;
      }
    }
    FPackageName::RegisterShortPackageNamesForUObjectModules();
    pFVar34 = FText::FText(&local_930);
    this_05 = local_c48;
    fVar10 = __real_40a00000;
    FSlowTask::EnterProgressFrame(local_c48,__real_40a00000,pFVar34);
    if (local_930.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_930.TextData.Reference + 0x10))();
    }
    bVar62 = -1 < CpuChannel->Enabled;
    if (bVar62) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3643,"LoadAssetRegistryModule",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xe3b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3643);
    }
    FScopedBootTiming::FScopedBootTiming(&local_6d8,"LoadAssetRegistryModule");
    FEngineTrackedActivityScope::FEngineTrackedActivityScope(&local_d4d,L"Loading AssetRegistry");
    pFVar35 = FModuleManager::Get();
    pFVar23 = ::FName::FName(&local_848,"AssetRegistry");
    FModuleManager::LoadModule(pFVar35,*pFVar23,None);
    FEngineTrackedActivityScope::~FEngineTrackedActivityScope(&local_d4d);
    FScopedBootTiming::~FScopedBootTiming(&local_6d8);
    if (bVar62) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    IPackageResourceManager::Initialize();
    fVar11 = __real_3dcccccd;
    fVar9 = __real_3f000000;
    FEmbeddedCommunication::ForceTick(5,__real_3dcccccd,__real_3f000000);
    FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates(PreObjectSystemReady);
    FEngineTrackedActivityScope::FEngineTrackedActivityScope
              (&local_d4c,L"Initializing UObject Classes");
    local_c50 = 0;
    ProcessNewlyLoadedUObjects((FName)0x0,true);
    FEngineTrackedActivityScope::~FEngineTrackedActivityScope(&local_d4c);
    this_00 = FTextLocalizationManager::Get();
    FTextLocalizationManager::WaitForAsyncTasks(this_00);
    FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates(ObjectSystemReady);
    FEmbeddedCommunication::ForceTick(6,fVar11,fVar9);
    if (CpuChannel->Enabled < 0) {
      FScopedBootTiming::FScopedBootTiming
                (&local_a48,"FPackageLocalizationManager::Get().PerformLazyInitialization()");
      pFVar36 = FPackageLocalizationManager::Get();
      FPackageLocalizationManager::PerformLazyInitialization(pFVar36);
      FScopedBootTiming::~FScopedBootTiming(&local_a48);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3707,
                 "FPackageLocalizationManager::Get().PerformLazyInitialization()",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xe7b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3707);
      FScopedBootTiming::FScopedBootTiming
                (&local_a48,"FPackageLocalizationManager::Get().PerformLazyInitialization()");
      pFVar36 = FPackageLocalizationManager::Get();
      FPackageLocalizationManager::PerformLazyInitialization(pFVar36);
      FScopedBootTiming::~FScopedBootTiming(&local_a48);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (CpuChannel->Enabled < 0) {
      FScopedBootTiming::FScopedBootTiming(&local_a30,"InitDefaultMaterials etc");
      UMaterialInterface::InitDefaultMaterials();
      UMaterialInterface::AssertDefaultMaterialsExist();
      UMaterialInterface::AssertDefaultMaterialsPostLoaded();
      FScopedBootTiming::~FScopedBootTiming(&local_a30);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3715,"InitDefaultMaterials etc",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xe83);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3715);
      FScopedBootTiming::FScopedBootTiming(&local_a30,"InitDefaultMaterials etc");
      UMaterialInterface::InitDefaultMaterials();
      UMaterialInterface::AssertDefaultMaterialsExist();
      UMaterialInterface::AssertDefaultMaterialsPostLoaded();
      FScopedBootTiming::~FScopedBootTiming(&local_a30);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_d10 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_d10 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FVar3 = local_d18;
    if (((((local_d10 & 4) != 0) && (local_d18 != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_bc8.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
        local_bc8.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_be8);
        local_bc8.StatData.Pad[4] = '\0';
        local_bc8.StatData.Pad[5] = '\0';
        local_bc8.StatData.Pad[6] = '\0';
        local_bc8.StatData.Pad[7] = '\0';
        local_bc8.StatData.Pad[0] = local_be8.s.LowPart._0_1_;
        local_bc8.StatData.Pad[1] = local_be8.s.LowPart._1_1_;
        local_bc8.StatData.Pad[2] = local_be8.s.LowPart._2_1_;
        local_bc8.StatData.Pad[3] = local_be8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_bc8);
        piVar1 = &this_01->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    local_d10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c90.SharedReferenceCount.ReferenceController);
    if (CpuChannel->Enabled < 0) {
      FScopedBootTiming::FScopedBootTiming(&local_a18,"IStreamingManager::Get()");
      IStreamingManager::Get();
      FScopedBootTiming::~FScopedBootTiming(&local_a18);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3725,"IStreamingManager::Get()",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xe8d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3725);
      FScopedBootTiming::FScopedBootTiming(&local_a18,"IStreamingManager::Get()");
      IStreamingManager::Get();
      FScopedBootTiming::~FScopedBootTiming(&local_a18);
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar34 = FText::FText(&local_920);
    FSlowTask::EnterProgressFrame(this_05,fVar10,pFVar34);
    if (local_920.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_920.TextData.Reference + 0x10))();
    }
    pFVar35 = FModuleManager::Get();
    FModuleManager::StartProcessingNewlyLoadedObjects(pFVar35);
    FEmbeddedCommunication::ForceTick(7,fVar11,fVar9);
    pFVar34 = FText::FText(&local_910);
    fVar8 = __real_41200000;
    FSlowTask::EnterProgressFrame(this_05,__real_41200000,pFVar34);
    if (local_910.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_910.TextData.Reference + 0x10))();
    }
    bVar62 = -1 < CpuChannel->Enabled;
    if (bVar62) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3740,"LoadStartupCoreModules",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xe9c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3740);
    }
    FScopedBootTiming::FScopedBootTiming(&local_7d8,"LoadStartupCoreModules");
    this_06 = local_ca0;
    bVar14 = LoadStartupCoreModules(local_ca0);
    if (bVar14) {
      FScopedBootTiming::~FScopedBootTiming(&local_7d8);
      if (bVar62) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar34 = FText::FText(&local_900);
      FSlowTask::EnterProgressFrame(this_05,fVar8,pFVar34);
      if (local_900.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_900.TextData.Reference + 0x10))();
      }
      bVar62 = -1 < CpuChannel->Enabled;
      if (bVar62) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3752,
                   "IProjectManager::Get().LoadModulesForProject(ELoadingPhase::PreLoadingScreen)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                   ,0xea8);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3752);
      }
      FScopedBootTiming::FScopedBootTiming
                (&local_7a8,
                 "IProjectManager::Get().LoadModulesForProject(ELoadingPhase::PreLoadingScreen)");
      pIVar25 = IProjectManager::Get();
      cVar16 = (**(code **)((longlong)*pIVar25 + 0x18))(pIVar25,4);
      if (cVar16 != '\0') {
        pIVar26 = IPluginManager::Get();
        cVar16 = (**(code **)((longlong)*pIVar26 + 0x20))(pIVar26,4);
        if (cVar16 != '\0') {
          FScopedBootTiming::~FScopedBootTiming(&local_7a8);
          if (bVar62) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          bVar62 = IsMoviePlayerEnabled();
          if (bVar62) {
            pIVar29 = GetMoviePlayer();
            cVar16 = (**(code **)((longlong)*pIVar29 + 0x68))(pIVar29);
            if (cVar16 == '\0') {
              bVar62 = -1 < CpuChannel->Enabled;
              if (bVar62) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId3764,
                           "FPreLoadScreenManager::Get()->Initialize etc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                           ,0xeb4);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3764);
              }
              FScopedBootTiming::FScopedBootTiming
                        (&local_6c0,"FPreLoadScreenManager::Get()->Initialize etc");
              pFVar37 = FSlateApplication::Get();
              pFVar5 = *(FSlateRenderer **)&pFVar37->field_0x60;
              if (pFVar5 != (FSlateRenderer *)0x0) {
                pFVar28 = FPreLoadScreenManager::Get();
                if (pFVar28 == (FPreLoadScreenManager *)0x0) {
                  pIVar29 = GetMoviePlayer();
                  local_8f0 = 0;
                  uStack_8e8 = 0;
                  (**(code **)((longlong)*pIVar29 + 8))(pIVar29,pFVar5,&local_8f0);
                }
                else {
                  pFVar28 = FPreLoadScreenManager::Get();
                  bVar14 = FPreLoadScreenManager::HasRegisteredPreLoadScreenType
                                     (pFVar28,EngineLoadingScreen);
                  if (bVar14) {
                    pFVar28 = FPreLoadScreenManager::Get();
                    FPreLoadScreenManager::Initialize(pFVar28,pFVar5);
                  }
                  else {
                    pIVar29 = GetMoviePlayer();
                    pcVar6 = *(code **)((longlong)*pIVar29 + 8);
                    pFVar28 = FPreLoadScreenManager::Get();
                    pTVar30 = FPreLoadScreenManager::GetRenderWindow(pFVar28,&local_628);
                    (*pcVar6)(pIVar29,pFVar5,pTVar30);
                    this_05 = local_c48;
                  }
                }
              }
              FScopedBootTiming::~FScopedBootTiming(&local_6c0);
              this_06 = local_ca0;
              if (bVar62) {
                FCpuProfilerTrace::OutputEndEvent();
                this_06 = local_ca0;
              }
            }
          }
          if (CpuChannel->Enabled < 0) {
            FScopedBootTiming::FScopedBootTiming(&local_a00,"FPlatformApplicationMisc::PostInit");
            FGenericPlatformApplicationMisc::PostInit();
            FScopedBootTiming::~FScopedBootTiming(&local_a00);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId3788,"FPlatformApplicationMisc::PostInit",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0xecc);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3788);
            FScopedBootTiming::FScopedBootTiming(&local_a00,"FPlatformApplicationMisc::PostInit");
            FGenericPlatformApplicationMisc::PostInit();
            FScopedBootTiming::~FScopedBootTiming(&local_a00);
            FCpuProfilerTrace::OutputEndEvent();
          }
          pFVar34 = FText::FText(&local_8e0);
          FSlowTask::EnterProgressFrame(this_05,fVar10,pFVar34);
          if (local_8e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
          }
          bVar62 = IsMoviePlayerEnabled();
          if (bVar62) {
            pIVar29 = GetMoviePlayer();
            cVar16 = (**(code **)((longlong)*pIVar29 + 0x68))(pIVar29);
            if (cVar16 == '\0') {
              bVar62 = -1 < CpuChannel->Enabled;
              if (bVar62) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId3807,"PlayFirstPreLoadScreen etc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                           ,0xedf);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3807);
              }
              FScopedBootTiming::FScopedBootTiming(&local_6a8,"PlayFirstPreLoadScreen etc");
              pFVar28 = FPreLoadScreenManager::Get();
              if (pFVar28 == (FPreLoadScreenManager *)0x0) {
LAB_148daaa48:
                pIVar29 = GetMoviePlayer();
                (**(code **)((longlong)*pIVar29 + 0x48))(pIVar29);
              }
              else {
                pFVar28 = FPreLoadScreenManager::Get();
                bVar14 = FPreLoadScreenManager::HasRegisteredPreLoadScreenType
                                   (pFVar28,EngineLoadingScreen);
                if (!bVar14) goto LAB_148daaa48;
                pFVar28 = FPreLoadScreenManager::Get();
                FPreLoadScreenManager::PlayFirstPreLoadScreen(pFVar28,EngineLoadingScreen);
                pFVar28 = FPreLoadScreenManager::Get();
                FPreLoadScreenManager::SetEngineLoadingComplete(pFVar28,false);
              }
              FScopedBootTiming::~FScopedBootTiming(&local_6a8);
              if (bVar62) {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
          bVar62 = -1 < CpuChannel->Enabled;
          if (bVar62) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId3822,"PlatformHandleSplashScreen etc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0xeee);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3822);
          }
          FScopedBootTiming::FScopedBootTiming(&local_690,"PlatformHandleSplashScreen etc");
          bVar14 = IsMoviePlayerEnabled();
          if (bVar14) {
            pIVar29 = GetMoviePlayer();
            (**(code **)((longlong)*pIVar29 + 0x68))(pIVar29);
          }
          FScopedBootTiming::~FScopedBootTiming(&local_690);
          if (bVar62) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy,
                     (_func___cdecl_void *)local_820);
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::PostGarbageCollectConditionalBeginDestroy,
                     (_func___cdecl_void *)local_840);
          bVar62 = -1 < CpuChannel->Enabled;
          if (bVar62) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId3851,"LoadStartupModules",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                       ,0xf0b);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3851);
          }
          FScopedBootTiming::FScopedBootTiming(&local_7c0,"LoadStartupModules");
          bVar14 = LoadStartupModules(this_06);
          if (bVar14) {
            FScopedBootTiming::~FScopedBootTiming(&local_7c0);
            if (bVar62) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (GUObjectArray.OpenForDisregardForGC != false) {
              if (CpuChannel->Enabled < 0) {
                FScopedBootTiming::FScopedBootTiming(&local_9e8,"CloseDisregardForGC");
                FUObjectArray::CloseDisregardForGC(&GUObjectArray);
                FScopedBootTiming::~FScopedBootTiming(&local_9e8);
              }
              else {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId3868,"CloseDisregardForGC",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                           ,0xf1c);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3868);
                FScopedBootTiming::FScopedBootTiming(&local_9e8,"CloseDisregardForGC");
                FUObjectArray::CloseDisregardForGC(&GUObjectArray);
                FScopedBootTiming::~FScopedBootTiming(&local_9e8);
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            NotifyRegistrationComplete();
            FReferencerFinder::NotifyRegistrationComplete();
            pUVar38 = UOnlineEngineInterface::Get();
            local_c40 = 0;
            cVar16 = (**(code **)(*(longlong *)pUVar38 + 0x2b0))(pUVar38,0);
            if (cVar16 != '\0') {
              local_c20 = (undefined1  [8])0x0;
              local_c18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_c18.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c20,
                         (FWriteAccessScope *)&local_998);
              local_980 = &local_c18;
              puVar39 = UE::Core::Private::DelegateAllocate(0x20,&local_c18);
              if (puVar39 != (undefined8 *)0x0) {
                *puVar39 = &
                           ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar40 = FDelegateHandle::GenerateNewID();
                puVar39[2] = uVar40;
                *puVar39 = &
                           ___7__TBaseStaticDelegateInstance___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                puVar39[3] = IsServerDelegateForOSS;
              }
              if (local_998.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_998.Accessor,&local_998);
              }
              SetIsServerForOnlineSubsystemsDelegate
                        ((TDelegate<bool___cdecl(FName),FDefaultDelegateUserPolicy> *)local_c20);
            }
            pFVar34 = FText::FText(&local_8d0);
            FSlowTask::EnterProgressFrame(this_05,fVar10,pFVar34);
            if (local_8d0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_8d0.TextData.Reference + 0x10))();
            }
            if (local_d4b == '\0') {
              iVar19 = 0;
              if (local_d4a == '\0') {
                if ((PRIVATE_GIsRunningCommandlet == false) &&
                   (bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PRIVATE_GIsRunningCommandlet",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                        ,0xf31,
                                        L"This should have been set in PreInitPreStartupScreen"),
                   bVar62)) {
                  pcVar6 = (code *)swi(3);
                  iVar19 = (*pcVar6)();
                  return iVar19;
                }
                if (local_d28.Data.ArrayNum == 0) {
                  local_bb8 = (FScriptContainerElement *)0x15060d16c;
LAB_148daadaa:
                  sVar32 = wcslen((wchar_t *)local_bb8);
                  iStack_bb0 = (int)sVar32;
                }
                else {
                  local_bb8 = local_d28.Data.AllocatorInstance.Data;
                  iStack_bb0 = iVar19;
                  if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  goto LAB_148daadaa;
                }
                pUVar41 = Z_Construct_UClass_UClass_NoRegister();
                local_8b8._12_4_ = uStack_bac;
                local_8b8.Size = iStack_bb0;
                local_8b8.DataPtr = (wchar_t *)local_bb8;
                pUVar41 = (UClass *)
                          StaticFindFirstObject
                                    (pUVar41,&local_8b8,None,Warning,L"looking for commandlet");
                if (pUVar41 != (UClass *)0x0) {
                  pUVar42 = Z_Construct_UClass_UClass_NoRegister();
                  iVar58 = (int)pUVar42->_padding_;
                  if ((iVar58 <= *(int *)(pUVar41->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar58 * 8) ==
                      &pUVar42->_padding_)) {
LAB_148daaf10:
                    if (GIsConsoleExecutable == false) {
                      if ((GLogConsole != (FOutputDeviceConsole *)0x0) && (GIsSilent == false)) {
                        (**(code **)(GLogConsole->_padding_ + 0x58))(GLogConsole,1);
                      }
                    }
                    else {
                      if ((GLogConsole != (FOutputDeviceConsole *)0x0) &&
                         (cVar16 = (**(code **)(GLogConsole->_padding_ + 0x68))(), cVar16 != '\0'))
                      {
                        pFVar44 = GetGlobalLogSingleton();
                        FOutputDeviceRedirector::RemoveOutputDevice
                                  (pFVar44,(FOutputDevice *)GLogConsole);
                      }
                      FWindowsPlatformMisc::SetGracefulTerminationHandler();
                    }
                    _File = (FILE *)__acrt_iob_func(1);
                    setvbuf(_File,(char *)0x0,4,0);
                    if (4 < (byte)LogInit._0_1_) {
                      UObjectBaseUtility::GetFullName
                                ((UObjectBaseUtility *)pUVar41,&local_898,(UObject *)0x0,None);
                      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_898.Data.AllocatorInstance.Data);
                      }
                    }
                    if ((pUVar41->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                      UClass::InternalCreateDefaultObjectWrapper(pUVar41);
                    }
                    pUVar47 = (pUVar41->ClassDefaultObject).field0_0x0.DebugPtr;
                    if (pUVar47 == (UObject *)0x0) {
                      pFVar31 = GetTypeName<UCommandlet>(&local_608);
                      if ((pFVar31->Data).ArrayNum != 0) {
                        pwVar50 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
                      }
                    /* WARNING: Subroutine does not return */
                      CastLogError(L"nullptr",pwVar50);
                    }
                    pUVar42 = Z_Construct_UClass_UCommandlet_NoRegister();
                    iVar19 = (int)pUVar42->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar47->field_0x10 + 0x38) < iVar19) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar47->field_0x10 + 0x30) +
                         (longlong)iVar19 * 8) != &pUVar42->_padding_)) {
                      pFVar31 = GetTypeName<UCommandlet>(&local_648);
                      if ((pFVar31->Data).ArrayNum == 0) {
                        pwVar60 = L"";
                      }
                      else {
                        pwVar60 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
                      }
                      pFVar31 = GetFullNameForCastLogError<UObject>(&local_638,pUVar47);
                      if ((pFVar31->Data).ArrayNum != 0) {
                        pwVar50 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
                      }
                    /* WARNING: Subroutine does not return */
                      CastLogError(pwVar50,pwVar60);
                    }
                    if (GIsRequestingExit != false) goto LAB_148dac128;
                    GIsClient = (bool)((byte)(*(uint *)(pUVar47 + 3) >> 1) & 1);
                    GIsServer = (bool)(*(byte *)(pUVar47 + 3) & 1);
                    if ((*(uint *)(pUVar47 + 3) & 4) != 0) {
                      if (1 < (byte)LogInit._0_1_) {
                        UObjectBaseUtility::GetFullName
                                  ((UObjectBaseUtility *)pUVar41,&local_888,(UObject *)0x0,None);
                        UE::Logging::Private::BasicLog<2>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                        if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_888.Data.AllocatorInstance.Data);
                        }
                      }
                      RequestEngineExit(L"Tried to run commandlet in non-editor build");
                      iVar19 = 1;
                      goto LAB_148dac3de;
                    }
                    if ((*(uint *)(pUVar47 + 3) & 8) == 0) {
                      pFVar44 = GetGlobalLogSingleton();
                      FOutputDeviceRedirector::RemoveOutputDevice
                                (pFVar44,(FOutputDevice *)GLogConsole);
                    }
                    if ((pUVar41->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                      UClass::InternalCreateDefaultObjectWrapper(pUVar41);
                    }
                    pUVar47 = (pUVar41->ClassDefaultObject).field0_0x0.DebugPtr;
                    pUVar42 = Z_Construct_UClass_UCommandlet_NoRegister();
                    iVar19 = (int)pUVar42->_padding_;
                    if (((*(int *)(*(longlong *)&pUVar47->field_0x10 + 0x38) < iVar19) ||
                        ((longlong *)
                         *(undefined1 **)
                          (*(longlong *)(*(longlong *)&pUVar47->field_0x10 + 0x30) +
                          (longlong)iVar19 * 8) != &pUVar42->_padding_)) &&
                       (bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Ret->IsA(T::StaticClass())",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                            ,0x1181,L""), bVar62)) {
                      pcVar6 = (code *)swi(3);
                      iVar19 = (*pcVar6)();
                      return iVar19;
                    }
                    pcVar6 = *(code **)(*(longlong *)pUVar47 + 0x2b8);
                    ::FString::FString(&local_ab0,(wchar_t *)local_cd8);
                    (*pcVar6)(pUVar47,&local_ab0);
                    if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
                    }
                    if (GEngine == (UEngine *)0x0) {
                      local_cb0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_cb0.Data.ArrayNum = 0;
                      local_cb0.Data.ArrayMax = 0;
                      FConfigCacheIni::GetString
                                (GConfig,L"/Script/Engine.Engine",L"GameEngine",&local_cb0,
                                 &GEngineIni);
                      uStack_b90._0_4_ = 0;
                      uStack_b90._4_4_ = 0;
                      FVar59.Data = (FScriptContainerElement *)L"";
                      if (local_cb0.Data.ArrayNum != 0) {
                        FVar59.Data = local_cb0.Data.AllocatorInstance.Data;
                      }
                      local_b98 = (wchar_t *)0x0;
                      pTVar43 = TStringView<wchar_t>::TStringView<wchar_t>
                                          (&local_5f8,(wchar_t *)FVar59.Data);
                      pwVar50 = pTVar43->DataPtr;
                      uVar7._0_4_ = pTVar43->Size;
                      uVar7._4_4_ = *(undefined4 *)&pTVar43->field_0xc;
                      pUVar42 = Z_Construct_UClass_UEngine_NoRegister();
                      local_878.DataPtr = local_b98;
                      local_878.Size = (int)uStack_b90;
                      local_878._12_4_ = uStack_b90._4_4_;
                      local_868.DataPtr = pwVar50;
                      local_868._8_8_ = uVar7;
                      pUVar42 = StaticLoadClass(pUVar42,(UObject *)0x0,&local_868,&local_878,0,
                                                (UPackageMap *)0x0);
                      if (pUVar42 == (UClass *)0x0) {
                        UE::Logging::Private::BasicFatalLog
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      }
                      local_c28 = 0;
                      pUVar45 = GetTransientPackage();
                      GEngine = NewObject<UEngine>((UObject *)pUVar45,pUVar42,(FName)0x0,RF_NoFlags,
                                                   (UObject *)0x0,false,
                                                   (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                      if ((GEngine == (UEngine *)0x0) &&
                         (bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                             ("GEngine",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                              ,4000,L""), bVar62)) {
                        pcVar6 = (code *)swi(3);
                        iVar19 = (*pcVar6)();
                        return iVar19;
                      }
                      UEngine::ParseCommandline(GEngine);
                      if (4 < (byte)LogInit._0_1_) {
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      }
                      (**(code **)(GEngine->_padding_ + 0x2d0))(GEngine,this_06);
                      if (4 < (byte)LogInit._0_1_) {
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      }
                      if (local_cb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_cb0.Data.AllocatorInstance.Data);
                      }
                    }
                    FGenericPlatformMisc::BeginNamedEvent
                              (&CoreDelegatesColor,"FCoreDelegates::OnPostEngineInit");
                    if (CpuChannel->Enabled < 0) {
                      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                                (&FCoreDelegates::OnPostEngineInit);
                    }
                    else {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId4012,"FCoreDelegates::OnPostEngineInit",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                 ,0xfac);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4012);
                      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                                (&FCoreDelegates::OnPostEngineInit);
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    FGenericPlatformMisc::EndNamedEvent();
                    pIVar25 = IProjectManager::Get();
                    cVar16 = (**(code **)((longlong)*pIVar25 + 0x18))(pIVar25);
                    if ((cVar16 == '\0') &&
                       (bVar62 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<6766178825421197233>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                            ,0xfb1,
                                            "IProjectManager::Get().LoadModulesForProject(ELoadingPhase::PostEngineInit)"
                                           ), bVar62)) {
                      pcVar6 = (code *)swi(3);
                      iVar19 = (*pcVar6)();
                      return iVar19;
                    }
                    pIVar26 = IPluginManager::Get();
                    cVar16 = (**(code **)((longlong)*pIVar26 + 0x20))(pIVar26);
                    if ((cVar16 == '\0') &&
                       (bVar62 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<6766178825421197234>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                            ,0xfb2,
                                            "IPluginManager::Get().LoadModulesForEnabledPlugins(ELoadingPhase::PostEngineInit)"
                                           ), bVar62)) {
                      pcVar6 = (code *)swi(3);
                      iVar19 = (*pcVar6)();
                      return iVar19;
                    }
                    SetEngineStartupModuleLoadingComplete();
                    pFVar44 = GetGlobalLogSingleton();
                    FOutputDeviceRedirector::EnableBacklog(pFVar44,false);
                    pFVar46 = FAutomationTestFramework::Get();
                    FAutomationTestFramework::RunSmokeTests(pFVar46);
                    local_c38 = 0;
                    pUVar45 = GetTransientPackage();
                    local_c30 = 0;
                    FObjectInitializer::AssertIfInConstructor
                              ((UObject *)pUVar45,
                               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                              );
                    pUVar42 = Z_Construct_UClass_UCommandlet_NoRegister();
                    CheckIsClassChildOf_Internal(pUVar42,pUVar41);
                    FStaticConstructObjectParameters::FStaticConstructObjectParameters
                              ((FStaticConstructObjectParameters *)local_5e8,pUVar41);
                    local_5e8._48_8_ = (FObjectInstancingGraph *)0x0;
                    local_5e8._56_8_ = (UPackage *)0x0;
                    local_5e8._16_4_ = 0;
                    local_5e8._20_4_ = 0;
                    local_5e8._24_4_ = RF_NoFlags;
                    local_5e8._40_8_ = (UObject *)0x0;
                    local_5e8[0x20] = false;
                    local_5e8._8_8_ = pUVar45;
                    pUVar47 = StaticConstructObject_Internal
                                        ((FStaticConstructObjectParameters *)local_5e8);
                    local_c80 = pUVar47;
                    if (local_5e8._64_8_ != 0) {
                      plVar54 = (longlong *)(local_5e8 + 0x50);
                      if ((longlong *)local_5e8._104_8_ != (longlong *)0x0) {
                        plVar54 = (longlong *)local_5e8._104_8_;
                      }
                      (**(code **)(*plVar54 + 0x10))();
                    }
                    if ((pUVar47 == (UObject *)0x0) &&
                       (bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Commandlet",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                            ,0xfbf,L""), bVar62)) {
                      pcVar6 = (code *)swi(3);
                      iVar19 = (*pcVar6)();
                      return iVar19;
                    }
                    this_03 = FUObjectArray::IndexToObject
                                        (&GUObjectArray,*(int *)&pUVar47->field_0xc);
                    FUObjectItem::ThisThreadAtomicallySetFlag(this_03,RootSet);
                    dVar65 = FWindowsPlatformTime::Seconds();
                    FVar3 = local_cd8;
                    UObject::ParseParms(pUVar47,(wchar_t *)local_cd8);
                    if ((local_d38 & 1) != 0) {
                      FGenericPlatformMisc::EndNamedEvent();
                    }
                    if ((local_d38 & 2) != 0) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    if ((local_d38 & 4) != 0) {
                      FThreadStats::AddMessage(local_d40,CycleScopeEnd);
                    }
                    local_d38 = 0;
                    local_d40.ComparisonIndex.Value = 0;
                    local_d40.Number = 0;
                    local_c68 = 0;
                    UE::Stats::FStats::TickCommandletStats();
                    PRIVATE_GRunningCommandletClass = pUVar41;
                    FGenericPlatformMisc::BeginNamedEvent
                              (&CoreDelegatesColor,"FCoreDelegates::OnCommandletPreMain");
                    if (CpuChannel->Enabled < 0) {
                      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                                (&FCoreDelegates::OnCommandletPreMain);
                    }
                    else {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId4051,"FCoreDelegates::OnCommandletPreMain"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                 ,0xfd3);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4051);
                      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                                (&FCoreDelegates::OnCommandletPreMain);
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    FGenericPlatformMisc::EndNamedEvent();
                    local_be0.ComparisonIndex.Value = *(uint *)&pUVar47->field_0x18;
                    local_be0.Number = *(uint *)&pUVar47->field_0x1c;
                    local_518.Base = local_4f8;
                    local_518.bIsDynamic = false;
                    local_518.bIsExternal = false;
                    local_518.CurPos = local_4f8;
                    local_518.End = (wchar_t *)&local_f8;
                    pvVar48 = FGenericPlatformString::Memcpy(local_4f8,L"Commandlet Main ",0x20);
                    local_518.CurPos = (wchar_t *)((longlong)pvVar48 + 0x20);
                    ::FName::AppendString(&local_be0,&local_518);
                    if (local_518.End < (TStringView<wchar_t> *)(local_518.CurPos + 1)) {
                      TStringBuilderBase<wchar_t>::Extend(&local_518,1);
                    }
                    *local_518.CurPos = L'\0';
                    bVar62 = -1 < CpuChannel->Enabled;
                    if (bVar62) {
                      FCpuProfilerTrace::OutputBeginDynamicEvent
                                (local_518.Base,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                 ,0xfd9);
                    }
                    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_518);
                    local_b88.ComparisonIndex.Value = *(uint *)&pUVar47->field_0x18;
                    local_b88.Number = *(uint *)&pUVar47->field_0x1c;
                    ::FName::ToString(&local_b88,&local_b70);
                    ::FString::PrintfImpl(&local_bd8,L"Running %s");
                    FVar59.Data = (FScriptContainerElement *)L"";
                    if (local_bd8.Data.ArrayNum != 0) {
                      FVar59.Data = local_bd8.Data.AllocatorInstance.Data;
                    }
                    pFVar49 = FTrackedActivity::GetEngineActivity();
                    FTrackedActivityScope::FTrackedActivityScope
                              (&local_b80,pFVar49,(wchar_t *)FVar59.Data,false,Green);
                    if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
                    }
                    if (local_b70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b70.Data.AllocatorInstance.Data);
                    }
                    pcVar6 = *(code **)(*(longlong *)pUVar47 + 0x2b0);
                    ::FString::FString(&local_aa0,(wchar_t *)FVar3);
                    iVar19 = (*pcVar6)(pUVar47,&local_aa0);
                    if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
                    }
                    FTrackedActivityScope::~FTrackedActivityScope(&local_b80);
                    if (bVar62) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    FGenericPlatformMisc::BeginNamedEvent
                              (&CoreDelegatesColor,"FCoreDelegates::OnCommandletPostMain");
                    if (CpuChannel->Enabled < 0) {
                      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                                (&FCoreDelegates::OnCommandletPostMain);
                    }
                    else {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId4063,
                                 "FCoreDelegates::OnCommandletPostMain",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                                 ,0xfdf);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4063);
                      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                                (&FCoreDelegates::OnCommandletPostMain);
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    FGenericPlatformMisc::EndNamedEvent();
                    PRIVATE_GRunningCommandletClass = (UClass *)0x0;
                    UE::Stats::FStats::TickCommandletStats();
                    local_b78.ComparisonIndex.Value = *(uint *)&pUVar47->field_0x18;
                    local_b78.Number = *(uint *)&pUVar47->field_0x1c;
                    ::FName::ToString(&local_b78,&local_b60);
                    ::FString::PrintfImpl
                              (&local_a90,L"Commandlet %s finished execution (result %d)");
                    RequestEngineExit(&local_a90);
                    if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a90.Data.AllocatorInstance.Data);
                    }
                    if (local_b60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b60.Data.AllocatorInstance.Data);
                    }
                    pFVar12 = GWarn;
                    if ((*(byte *)(pUVar47 + 3) & 0x10) == 0) {
                      if (3 < (byte)LogInit._0_1_) {
                        UE::Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      }
                    }
                    else {
                      local_d08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_d08.ArrayNum = 0;
                      local_d08.ArrayMax = 0;
                      local_cf8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      pFVar2 = &GWarn->WarningsAndErrorsCritical;
                      local_cf8.ArrayNum = 0;
                      local_cf8.ArrayMax = 0;
                      if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
LAB_148dac5d5:
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
                      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                                (&local_d08,&pFVar12->Errors);
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
                      pFVar12 = GWarn;
                      pFVar2 = &GWarn->WarningsAndErrorsCritical;
                      if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_148dac5d5;
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
                      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                                (&local_cf8,&pFVar12->Warnings);
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
                      if (local_d08.ArrayNum == 0) {
                        local_cd0[0] = 0;
                        if (local_cf8.ArrayNum != 0) goto LAB_148dab917;
                      }
                      else {
LAB_148dab917:
                        UE::Logging::Private::BasicLog<64>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                        if (((3 < (byte)LogInit._0_1_) &&
                            (UE::Logging::Private::BasicLog<4>
                                       (&::LOG_Static,(FLogCategoryBase *)&LogInit),
                            3 < (byte)LogInit._0_1_)) &&
                           (UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogInit),
                           3 < (byte)LogInit._0_1_)) {
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                        }
                        if (GIsBuildMachine == false) {
                          pwVar50 = FCommandLine::Get();
                          bVar62 = FParse::Param(pwVar50,L"DUMPALLWARNINGS");
                          if (bVar62) goto LAB_148dab9ad;
                          iVar58 = 0x32;
                        }
                        else {
LAB_148dab9ad:
                          iVar58 = local_cf8.ArrayNum + local_d08.ArrayNum;
                        }
                        local_568.Elements._0_8_ = 0;
                        local_568.Elements._8_8_ = 0;
                        local_568.Elements._32_8_ = 0;
                        local_568.Elements._40_4_ = 0;
                        local_568.Elements._44_4_ = 0x80;
                        local_568.Elements._48_4_ = 0xffffffff;
                        local_568.Elements._52_4_ = 0;
                        local_568.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
                        local_568.HashSize = 0;
                        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Empty
                                  (&local_568,iVar58);
                        UE::Logging::Private::BasicLog<64>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                        uVar51 = (ulonglong)local_d08.ArrayNum;
                        pFVar57 = local_d08.AllocatorInstance.Data + uVar51 * 0x10;
                        local_d44.Bits = local_d08.ArrayNum;
                        uVar55 = uVar51;
                        FVar59.Data = local_d08.AllocatorInstance.Data;
LAB_148daba40:
                        if ((int)uVar51 != (int)uVar55) {
                          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::
                          operator()(&local_d49);
                        }
                        if (FVar59.Data == pFVar57) goto LAB_148dabb06;
                        local_d52 = '\0';
                        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                        Emplace<FString_const_&>
                                  (&local_568,(FString *)local_c00,(bool *)FVar59.Data);
                        if (local_d52 != '\0') {
LAB_148dabab8:
                          uVar51 = local_d08._8_8_ & 0xffffffff;
                          FVar59.Data = FVar59.Data + 0x10;
                          uVar55 = (ulonglong)local_d44.Bits;
                          goto LAB_148daba40;
                        }
                        if ((int)(local_568.Elements._8_4_ - local_568.Elements._52_4_) <= iVar58) {
                          if (3 < (byte)LogInit._0_1_) {
                            UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                          }
                          goto LAB_148dabab8;
                        }
                        UE::Logging::Private::BasicLog<64>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                        if ((3 < (byte)LogInit._0_1_) && (iVar58 < local_d08.ArrayNum)) {
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                        }
LAB_148dabb06:
                        UE::Logging::Private::BasicLog<64>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Empty
                                  (&local_568,iVar58);
                        uVar51 = (ulonglong)local_cf8.ArrayNum;
                        pFVar57 = local_cf8.AllocatorInstance.Data + uVar51 * 0x10;
                        local_d44.Bits = local_cf8.ArrayNum;
                        uVar55 = uVar51;
                        FVar59.Data = local_cf8.AllocatorInstance.Data;
LAB_148dabb47:
                        if ((int)uVar51 != (int)uVar55) {
                          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::
                          operator()(&local_d48);
                        }
                        if (FVar59.Data == pFVar57) goto LAB_148dabc0d;
                        local_d51 = '\0';
                        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                        Emplace<FString_const_&>
                                  (&local_568,(FString *)(local_c00 + 4),(bool *)FVar59.Data);
                        if (local_d51 != '\0') {
LAB_148dabbbf:
                          uVar51 = local_cf8._8_8_ & 0xffffffff;
                          FVar59.Data = FVar59.Data + 0x10;
                          uVar55 = (ulonglong)local_d44.Bits;
                          goto LAB_148dabb47;
                        }
                        if ((int)(local_568.Elements._8_4_ - local_568.Elements._52_4_) <= iVar58) {
                          if (3 < (byte)LogInit._0_1_) {
                            UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                          }
                          goto LAB_148dabbbf;
                        }
                        UE::Logging::Private::BasicLog<64>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                        if ((3 < (byte)LogInit._0_1_) && (iVar58 < local_cf8.ArrayNum)) {
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                        }
LAB_148dabc0d:
                        local_568.HashSize = 0;
                        if (local_568.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FMemory::Free((void *)local_568.Hash.SecondaryData);
                        }
                        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::
                        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  (&local_568.Elements);
                        pUVar47 = local_c80;
                        local_cd0[0] = local_d08.ArrayNum;
                      }
                      local_d50 = false;
                      FConfigCacheIni::GetBool
                                (GConfig,L"Core.System",L"EnsureCommandletOnError",&local_d50,
                                 &GEngineIni);
                      if ((local_d50 != false) && (local_cd0[0] != 0)) {
                        local_b18 = local_cd0;
                        `ConditionallyEnsureOnCommandletErrors'::__l5::<lambda_1>::operator()
                                  (&local_b18);
                      }
                      if (3 < (byte)LogInit._0_1_) {
                        UE::Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      }
                      if (iVar19 == 0) {
                        if (local_d08.ArrayNum == 0) {
                          UE::Logging::Private::BasicLog<64>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                          if (3 < (byte)LogInit._0_1_) {
                            pFVar56 = &::LOG_Static;
LAB_148dabd5b:
                            UE::Logging::Private::BasicLog<4>(pFVar56,(FLogCategoryBase *)&LogInit);
                          }
                        }
                        else {
                          UE::Logging::Private::BasicLog<64>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                          if (3 < (byte)LogInit._0_1_) {
                            pFVar56 = &::LOG_Static;
                            goto LAB_148dabd5b;
                          }
                        }
                      }
                      else {
                        UE::Logging::Private::BasicLog<64>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                        if ((3 < (byte)LogInit._0_1_) &&
                           (UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogInit),
                           3 < (byte)LogInit._0_1_)) {
                          pFVar56 = &::LOG_Static;
                          goto LAB_148dabd5b;
                        }
                      }
                      UE::Logging::Private::BasicLog<64>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
                      DestructItems<FString,int>
                                ((FString *)local_cf8.AllocatorInstance.Data,local_cf8.ArrayNum);
                      if (local_cf8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_cf8.AllocatorInstance.Data);
                      }
                      DestructItems<FString,int>
                                ((FString *)local_d08.AllocatorInstance.Data,local_d08.ArrayNum);
                      if (local_d08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_d08.AllocatorInstance.Data);
                      }
                    }
                    if ((((*(byte *)(pUVar47 + 3) & 0x80) == 0) && (iVar19 == 0)) &&
                       (iVar19 = 0, 0 < (GWarn->Errors).ArrayNum)) {
                      iVar19 = 1;
                    }
                    dVar66 = FWindowsPlatformTime::Seconds();
                    if (__real_404e000000000000 < dVar66 - dVar65) {
                      auVar67._8_8_ = 0;
                      auVar67._0_8_ =
                           (dVar66 - dVar65) * __real_416312d000000000 + __real_3fe0000000000000;
                      auVar67 = roundpd(auVar67,auVar67,1);
                      if ((int)((double)(longlong)auVar67._0_8_ * ___real_3dbe8abfd59a6108) == 0) {
                        if (3 < (byte)LogInit._0_1_) {
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                        }
                      }
                      else if (3 < (byte)LogInit._0_1_) {
                        UE::Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInit);
                      }
                    }
                    else if (3 < (byte)LogInit._0_1_) {
                      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
                    }
                    if ((*(byte *)(pUVar47 + 3) & 0x40) == 0) {
                      pwVar50 = FCommandLine::Get();
                      bVar62 = FParse::Param(pwVar50,L"fastexit");
                      if (!bVar62) goto LAB_148dac3de;
                    }
                    FWindowsPlatformMisc::RequestExitWithStatus(true,(uchar)iVar19,(wchar_t *)0x0);
                    goto LAB_148dac3de;
                  }
                }
                for (FVar59.Data = local_d28.Data.AllocatorInstance.Data;
                    FVar59.Data !=
                    local_d28.Data.AllocatorInstance.Data + (longlong)local_d28.Data.ArrayNum * 2;
                    FVar59.Data = FVar59.Data + 2) {
                  if (*(wchar_t *)FVar59.Data == L'.') {
                    iVar58 = (int)((longlong)FVar59.Data -
                                   (longlong)local_d28.Data.AllocatorInstance.Data >> 1);
                    if (iVar58 != -1) {
                      pFVar35 = FModuleManager::Get();
                      iVar20 = local_d28.Data.ArrayNum + -1;
                      if (local_d28.Data.ArrayNum == 0) {
                        iVar20 = iVar19;
                      }
                      if (iVar58 < iVar20) {
                        iVar20 = iVar58;
                      }
                      iVar19 = 0;
                      if (0 < iVar20) {
                        iVar19 = iVar20;
                      }
                      FVar59.Data = (FScriptContainerElement *)L"";
                      if (local_d28.Data.ArrayNum != 0) {
                        FVar59.Data = local_d28.Data.AllocatorInstance.Data;
                      }
                      ::FString::ConstructFromPtrSize(&local_ba8,(wchar_t *)FVar59.Data,iVar19);
                      FVar59.Data = (FScriptContainerElement *)L"";
                      if (local_ba8.Data.ArrayNum != 0) {
                        FVar59.Data = local_ba8.Data.AllocatorInstance.Data;
                      }
                      pFVar23 = ::FName::FName(&local_838,(wchar_t *)FVar59.Data);
                      FModuleManager::LoadModule(pFVar35,*pFVar23,None);
                      if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
                      }
                      FVar59.Data = (FScriptContainerElement *)L"";
                      if (local_d28.Data.ArrayNum != 0) {
                        FVar59.Data = local_d28.Data.AllocatorInstance.Data;
                      }
                      pTVar43 = TStringView<wchar_t>::TStringView<wchar_t>
                                          (&local_618,(wchar_t *)FVar59.Data);
                      local_8a8.DataPtr = pTVar43->DataPtr;
                      local_8a8.Size = pTVar43->Size;
                      local_8a8._12_4_ = *(undefined4 *)&pTVar43->field_0xc;
                      pUVar41 = FindFirstObject<UClass>
                                          (&local_8a8,None,Warning,L"Looking for commandlet class");
                      if (pUVar41 != (UClass *)0x0) goto LAB_148daaf10;
                    }
                    break;
                  }
                }
                if ((GLogConsole != (FOutputDeviceConsole *)0x0) && (GIsSilent == false)) {
                  (**(code **)(GLogConsole->_padding_ + 0x58))(GLogConsole,1);
                }
                if (1 < (byte)LogInit._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
                }
                ::FString::PrintfImpl(&local_a80,L"Failed to find commandlet class %s");
                RequestEngineExit(&local_a80);
                if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a80.Data.AllocatorInstance.Data);
                  iVar19 = 1;
                  goto LAB_148dac3de;
                }
                goto LAB_148dac128;
              }
              if (local_d47 == '\0') goto LAB_148dac105;
              ::FString::ConcatFC(&local_b38,&local_d28,L"Commandlet");
              if (local_b38.Data.ArrayNum == 0) {
                local_b48 = (FScriptContainerElement *)0x15060d16c;
LAB_148dac06d:
                sVar32 = wcslen((wchar_t *)local_b48);
                iVar19 = (int)sVar32;
              }
              else {
                local_b48 = local_b38.Data.AllocatorInstance.Data;
                if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                goto LAB_148dac06d;
              }
              local_858._12_4_ = uStack_b3c;
              local_858.Size = iVar19;
              local_858.DataPtr = (wchar_t *)local_b48;
              iStack_b40 = iVar19;
              pUVar41 = FindFirstObject<UClass>
                                  (&local_858,None,Warning,L"Looking for commandlet class");
              if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b38.Data.AllocatorInstance.Data);
              }
              if (pUVar41 != (UClass *)0x0) {
                ::FString::ConcatFC(&local_b28,&local_d28,L"Commandlet");
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
                if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b28.Data.AllocatorInstance.Data);
                }
              }
            }
LAB_148dac105:
            if (GIsRequestingExit == false) {
              FEmbeddedCommunication::ForceTick(8,fVar11,fVar9);
              pwVar50 = FCommandLine::Get();
              bVar62 = FParse::Param(pwVar50,L"DUMPMOVIE");
              if (bVar62) {
                GIsDumpingMovie = -1;
LAB_148dac16d:
                GAreScreenMessagesEnabled = false;
              }
              else {
                if ((GIsDumpingMovie != 0) || (GIsDemoMode != false)) goto LAB_148dac16d;
                GAreScreenMessagesEnabled = true;
              }
              pwVar50 = FCommandLine::Get();
              bVar62 = FParse::Param(pwVar50,L"NOSCREENMESSAGES");
              if (bVar62) {
                GAreScreenMessagesEnabled = false;
              }
              if (GEngine != (UEngine *)0x0) {
                pwVar50 = FCommandLine::Get();
                bVar62 = FParse::Param(pwVar50,L"statunit");
                pUVar13 = GEngine;
                if (bVar62) {
                  pcVar6 = *(code **)(GEngine->_padding_ + 8);
                  pFVar44 = GetGlobalLogSingleton();
                  (*pcVar6)(&pUVar13->_padding_,0,L"stat unit",pFVar44);
                }
              }
              if (FApp::bIsBenchmarking == false) {
                pwVar50 = FCommandLine::Get();
                bVar62 = FParse::Param(pwVar50,L"NOINI");
                if (bVar62) goto LAB_148dac1fc;
              }
              else {
LAB_148dac1fc:
                FConfigCacheIni::Detach(GConfig,&GEngineIni);
                FConfigCacheIni::Detach(GConfig,&GInputIni);
                FConfigCacheIni::Detach(GConfig,&GGameIni);
                FConfigCacheIni::Detach(GConfig,&GEditorIni);
              }
              this_06->PendingCleanupObjects = (FPendingCleanupObjects *)0x0;
              pFVar35 = FModuleManager::Get();
              pFVar23 = ::FName::FName(&local_830,L"ProfileVisualizer");
              FModuleManager::LoadModule(pFVar35,*pFVar23,None);
              this_04 = GetHighResScreenshotConfig();
              FHighResScreenshotConfig::Init(this_04);
              bVar62 = AllowGlobalShaderLoad();
              if (bVar62) {
                PrecacheComputePipelineStatesForGlobalShaders
                          (GMaxRHIFeatureLevel,(ITargetPlatform *)0x0);
              }
              UE::RenderCommandPipe::Initialize();
              if (CpuChannel->Enabled < 0) {
                FScopedBootTiming::FScopedBootTiming(&local_9d0,"RunSmokeTests");
                pFVar46 = FAutomationTestFramework::Get();
                FAutomationTestFramework::RunSmokeTests(pFVar46);
                FScopedBootTiming::~FScopedBootTiming(&local_9d0);
              }
              else {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId4317,"RunSmokeTests",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                           ,0x10dd);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4317);
                FScopedBootTiming::FScopedBootTiming(&local_9d0,"RunSmokeTests");
                pFVar46 = FAutomationTestFramework::Get();
                FAutomationTestFramework::RunSmokeTests(pFVar46);
                FScopedBootTiming::~FScopedBootTiming(&local_9d0);
                FCpuProfilerTrace::OutputEndEvent();
              }
              pFVar35 = FModuleManager::Get();
              pFVar23 = ::FName::FName(&local_828,L"RHITests");
              pIVar52 = FModuleManager::GetModule(pFVar35,*pFVar23);
              if (pIVar52 != (IModuleInterface *)0x0) {
                (**(code **)((longlong)*pIVar52 + 0x40))(pIVar52);
              }
              FEmbeddedCommunication::ForceTick(9,fVar11,fVar9);
              FPreInitContext::Cleanup(&this_06->PreInitContext);
              iVar19 = 0;
              goto LAB_148dac3de;
            }
            if (GEngine != (UEngine *)0x0) {
              (**(code **)(GEngine->_padding_ + 0x2e0))();
            }
            AppPreExit();
          }
          else {
            FScopedBootTiming::~FScopedBootTiming(&local_7c0);
            if (bVar62) {
              FCpuProfilerTrace::OutputEndEvent();
              iVar19 = 1;
              goto LAB_148dac3de;
            }
          }
LAB_148dac128:
          iVar19 = 1;
          goto LAB_148dac3de;
        }
      }
      FScopedBootTiming::~FScopedBootTiming(&local_7a8);
      if (bVar62) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar19 = 1;
    }
    else {
      FScopedBootTiming::~FScopedBootTiming(&local_7d8);
      if (bVar62) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar19 = 1;
    }
  }
  else {
    FEngineFontServices::Create();
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3560,
                 "LoadModulesForProject(ELoadingPhase::PreEarlyLoadingScreen)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                 ,0xde8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3560);
    }
    FScopedBootTiming::FScopedBootTiming
              (&local_790,"LoadModulesForProject(ELoadingPhase::PreEarlyLoadingScreen)");
    pIVar25 = IProjectManager::Get();
    cVar16 = (**(code **)((longlong)*pIVar25 + 0x18))(pIVar25,3);
    if (cVar16 != '\0') {
      pIVar26 = IPluginManager::Get();
      cVar16 = (**(code **)((longlong)*pIVar26 + 0x20))(pIVar26,3);
      if (cVar16 != '\0') {
        FScopedBootTiming::~FScopedBootTiming(&local_790);
        goto LAB_148da9b12;
      }
    }
    FScopedBootTiming::~FScopedBootTiming(&local_790);
LAB_148dac3cb:
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c90.SharedReferenceCount.ReferenceController);
    iVar19 = 1;
  }
LAB_148dac3de:
  if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Data.AllocatorInstance.Data);
  }
  if ((local_d38 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_d38 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_d38 & 4) != 0) {
    FThreadStats::AddMessage(local_d40,CycleScopeEnd);
  }
  local_d38 = 0;
LAB_148dac421:
  FMemScope::~FMemScope(&local_c08);
  FLLMScope::~FLLMScope(&local_cb8);
  FScopedBootTiming::~FScopedBootTiming(&local_678);
  if (cVar61 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FBootProfiling::OnPreInitPostStartupScreenComplete();
  return iVar19;
}

// ProcessLocalPlayerSlateOperations @ 148db1450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEngineLoop::ProcessLocalPlayerSlateOperations(FEngineLoop *this)

{
  undefined1 *this_00;
  UWorld *this_01;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  EVisibility EVar7;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  FSlateApplication *this_02;
  UGameViewportClient *this_03;
  TSharedPtr<SViewport,1> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FReply *pFVar14;
  longlong lVar15;
  ForElementType<FArrangedWidget> FVar16;
  SViewport *pSVar17;
  SViewport *pSVar18;
  undefined1 auStackY_3a8 [32];
  undefined1 local_378 [8];
  TSharedRef<SWidget_const_,1> local_370;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_360;
  TSharedPtr<SViewport,1> local_350;
  int local_340;
  undefined4 uStack_33c;
  SViewport *local_338;
  int *piStack_330;
  undefined8 local_328;
  undefined4 local_320;
  TSharedPtr<SViewport,1> local_318;
  FReply local_308;
  FReply local_250;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  bVar5 = false;
  bVar4 = false;
  local_320 = 0;
  this_02 = FSlateApplication::Get();
  pSVar17 = (SViewport *)(GEngine->WorldList).Array.AllocatorInstance.Data;
  local_350.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&(GEngine->WorldList).Array.ArrayNum;
  local_340 = *(int *)local_350.SharedReferenceCount.ReferenceController;
  lVar15 = (longlong)local_340;
  plVar6 = &pSVar17->_padding_;
  local_328 = CONCAT44(uStack_33c,local_340);
  local_350.Object = pSVar17;
  piStack_330 = (int *)local_350.SharedReferenceCount.ReferenceController;
  while( true ) {
    local_338 = pSVar17;
    if (*piStack_330 != (int)local_328) {
      local_378[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_378);
    }
    if (pSVar17 == (SViewport *)(plVar6 + lVar15)) break;
    this_01 = *(UWorld **)(pSVar17->_padding_ + 0x2c0);
    if ((this_01 != (UWorld *)0x0) && (bVar9 = UWorld::IsGameWorld(this_01), bVar9)) {
      this_03 = UWorld::GetGameViewport(this_01);
      if (this_03 == (UGameViewportClient *)0x0) {
        bVar4 = true;
        local_318.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pSVar18 = (SViewport *)0x0;
        pTVar11 = &local_318;
      }
      else {
        bVar5 = true;
        pTVar11 = UGameViewportClient::GetGameViewportWidget(this_03,&local_350);
        pSVar18 = pTVar11->Object;
      }
      pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
      (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar11->Object = (SViewport *)0x0;
      if (bVar4) {
        bVar4 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.SharedReferenceCount.ReferenceController);
      }
      if (bVar5) {
        bVar5 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_350.SharedReferenceCount.ReferenceController);
      }
      if (pSVar18 != (SViewport *)0x0) {
        FWidgetPath::FWidgetPath(&local_198);
        EVar7 = EVisibility::Visible;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_370.Object = (SWidget *)pSVar18;
        local_370.SharedReferenceCount.ReferenceController = pTVar1;
        FSlateApplication::GeneratePathToWidgetUnchecked(this_02,&local_370,&local_198,EVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        bVar9 = FWidgetPath::IsValid(&local_198);
        if (bVar9) {
          UWorld::GetPlayerControllerIterator(this_01,&local_360);
          for (; (iVar10 = local_360.Index, pTVar8 = local_360.Container, pSVar17 = local_338,
                 -1 < local_360.Index && (local_360.Index < (local_360.Container)->ArrayNum));
              local_360.Index = local_360.Index + 1) {
            if ((local_360.Index < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pTVar8->AllocatorInstance).Data + (longlong)iVar10 * 8))
            ;
            if ((pUVar12 != (UObject *)0x0) &&
               (this_00 = &pUVar12[0x16].field_0x8, *(longlong *)this_00 != 0)) {
              pUVar13 = Z_Construct_UClass_ULocalPlayer_NoRegister();
              bVar9 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
              if ((bVar9) && (lVar2 = *(longlong *)this_00, lVar2 != 0)) {
                iVar10 = FSlateApplication::GetUserIndexForController
                                   (this_02,*(int *)(lVar2 + 0xf0));
                pFVar14 = FReply::FReply(&local_250,(FReply *)(lVar2 + 0x228));
                FSlateApplication::ProcessExternalReply(this_02,&local_198,pFVar14,iVar10,10);
                FReply::FReply(&local_308,false);
                FReply::operator=((FReply *)(lVar2 + 0x228),&local_308);
                FReply::~FReply(&local_308);
              }
            }
          }
        }
        if (local_198.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar16 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
        if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar16 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar16,local_198.Widgets.Array.ArrayNum);
        if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    pSVar17 = (SViewport *)&pSVar17->_padding_;
  }
  return;
}

// ShouldUseIdleMode @ 148db1ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FEngineLoop::ShouldUseIdleMode(FEngineLoop *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar5 = IConsoleManager::Get();
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"t.IdleWhenNotForeground",1);
    pTVar7 = (TConsoleVariableData<int> *)0x0;
    if (plVar6 != (longlong *)0x0) {
      pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    CVarIdleWhenNotForeground = pTVar7;
    _Init_thread_footer(&::_TSS0);
  }
  iVar4 = TConsoleVariableData<int>::GetValueOnGameThread(CVarIdleWhenNotForeground);
  if ((iVar4 != 0) && (bVar3 = FApp::HasFocus(), !bVar3)) {
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    pFVar8 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    iVar4 = *piVar1;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if (*piVar1 != iVar4) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar8 == pFVar2) break;
      bVar3 = UWorld::AreAlwaysLoadedLevelsLoaded(*(UWorld **)(*(longlong *)pFVar8 + 0x2c0));
      if (!bVar3) {
        return false;
      }
      pFVar8 = pFVar8 + 8;
    }
    return true;
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 10

// ~FStreamlineMaxTickRateHandler @ 14de70d00

void __thiscall
FStreamlineMaxTickRateHandler::~FStreamlineMaxTickRateHandler(FStreamlineMaxTickRateHandler *this)

{
  *(undefined ***)this = &___7FStreamlineMaxTickRateHandler__6B_;
  return;
}

// Get @ 14de7a3d0

FStreamlineMaxTickRateHandler * __cdecl FStreamlineMaxTickRateHandler::Get(void)

{
  longlong lVar1;
  TUniquePtr<FStreamlineMaxTickRateHandler,TDefaultDelete<FStreamlineMaxTickRateHandler>_> TVar2;
  TUniquePtr<FStreamlineMaxTickRateHandler,TDefaultDelete<FStreamlineMaxTickRateHandler>_> TVar3;
  
  if (StreamlineMaxTickRateHandler.Ptr == (FStreamlineMaxTickRateHandler *)0x0) {
    TVar3.Ptr = ::operator_new(0x10);
    if (TVar3.Ptr != (FStreamlineMaxTickRateHandler *)0x0) {
      *(undefined8 *)&(TVar3.Ptr)->field_0x8 = 0;
      *(undefined ***)TVar3.Ptr = &___7FStreamlineMaxTickRateHandler__6B_;
    }
    TVar2.Ptr = StreamlineMaxTickRateHandler.Ptr;
    if (StreamlineMaxTickRateHandler.Ptr != (FStreamlineMaxTickRateHandler *)0x0) {
      lVar1 = *(longlong *)StreamlineMaxTickRateHandler.Ptr;
      StreamlineMaxTickRateHandler.Ptr = TVar3.Ptr;
      (**(code **)(lVar1 + 0x38))(TVar2.Ptr,1);
      TVar3.Ptr = StreamlineMaxTickRateHandler.Ptr;
    }
    StreamlineMaxTickRateHandler.Ptr = TVar3.Ptr;
    (*(code *)**(undefined8 **)StreamlineMaxTickRateHandler.Ptr)(StreamlineMaxTickRateHandler.Ptr);
  }
  return StreamlineMaxTickRateHandler.Ptr;
}

// GetAvailable @ 14de7a470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FStreamlineMaxTickRateHandler::GetAvailable(FStreamlineMaxTickRateHandler *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2798 [32];
  wchar_t *local_2778;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2768;
  ReflexState local_2648;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2798;
  bVar2 = FStreamlineLatencyBase::IsStreamlineReflexSupported();
  if (!bVar2) {
    return false;
  }
  sl::ReflexState::ReflexState(&local_2648);
  RVar4 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexState_&),sl::ReflexState_&>
                    (3,"slReflexGetState",&local_2648);
  if (RVar4 != eOk) {
    _Str = sl::getResultAsStr(RVar4);
    local_2768._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_2768.Ptr = (wchar_t *)0x0;
      local_2768.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_2768,_Str,(int)sVar5,Yes);
    }
    local_2778 = local_2768.Ptr;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result == sl::Result::eOk",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                       ,0xf4,L"slReflexGetState failed (%s)");
    if ((void *)local_2768._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2768._padding_);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return local_2648.lowLatencyAvailable;
}

// GetEnabled @ 14de7aff0

bool __thiscall FStreamlineMaxTickRateHandler::GetEnabled(FStreamlineMaxTickRateHandler *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  char cVar4;
  bool bVar5;
  EStreamlineFeatureSupport EVar6;
  DLSSGMode DVar7;
  longlong lVar8;
  longlong lVar9;
  
  cVar4 = (**(code **)(*(longlong *)this + 0x18))();
  pTVar2 = CVarStreamlineReflexEnable.Ref;
  if (cVar4 == '\0') {
    return false;
  }
  bVar5 = IsInParallelGameThread();
  lVar9 = 4;
  if (bVar5) {
LAB_14de7b034:
    lVar8 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_14de7b034;
    lVar8 = 4;
  }
  pTVar3 = CVarStreamlineReflexAuto.Ref;
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar8);
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) goto LAB_14de7b054;
  }
  lVar9 = 0;
LAB_14de7b054:
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar9) != 0) {
    EVar6 = QueryStreamlineDLSSGSupport();
    if (EVar6 == Supported) {
      DVar7 = SLDLSSGModeFromCvar();
      if (DVar7 != eOff) {
        return true;
      }
    }
  }
  return iVar1 != 0;
}

// GetFlags @ 14de7b0a0

uint __thiscall FStreamlineMaxTickRateHandler::GetFlags(FStreamlineMaxTickRateHandler *this)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  EStreamlineFeatureSupport EVar4;
  DLSSGMode DVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar2 = CVarStreamlineReflexMode.Ref;
  bVar3 = IsInParallelGameThread();
  lVar9 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  pTVar1 = CVarStreamlineReflexAuto.Ref;
  iVar8 = *(int *)((longlong)pTVar2->ShadowedValue + lVar6);
  iVar7 = 2;
  if (iVar8 < 2) {
    iVar7 = iVar8;
  }
  iVar8 = 0;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar9 = 0;
  }
  if ((((*(int *)((longlong)pTVar1->ShadowedValue + lVar9) != 0) &&
       (EVar4 = QueryStreamlineDLSSGSupport(), EVar4 == Supported)) &&
      (DVar5 = SLDLSSGModeFromCvar(), DVar5 != eOff)) && (iVar8 == 0)) {
    return 1;
  }
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      return 1;
    }
    if (iVar8 == 2) {
      return 3;
    }
  }
  return 0;
}

// HandleMaxTickRate @ 14de7bf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamlineMaxTickRateHandler::HandleMaxTickRate(FStreamlineMaxTickRateHandler *this,float param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  Result RVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_GameTickReflexWaitTime> FVar15;
  longlong lVar16;
  char *pcVar17;
  size_t sVar18;
  FStreamlineRHI *this_00;
  FrameToken *pFVar19;
  uint *puVar20;
  FTlsAutoCleanup *pFVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar22;
  FName FVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_3a8 [32];
  undefined1 local_348 [4];
  FColor_u_0 local_344;
  LARGE_INTEGER local_340;
  FScopeIdle local_338;
  FName local_330;
  FName local_328;
  LARGE_INTEGER local_318;
  LARGE_INTEGER local_310;
  LARGE_INTEGER local_308;
  FStatMessage local_300;
  code *local_2f0;
  undefined1 *local_2e8;
  FName local_2e0;
  ReflexOptions local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  bVar24 = false;
  bVar8 = FStreamlineLatencyBase::IsStreamlineReflexSupported();
  if (!bVar8) {
    return false;
  }
  FVar15 = StatPtr_STAT_GameTickReflexWaitTime;
  if (StatPtr_STAT_GameTickReflexWaitTime ==
      (FThreadSafeStaticStat<FStat_STAT_GameTickReflexWaitTime>)0x0) {
    pFVar14 = ::FName::FName(&local_2e0,"STAT_GameTickReflexWaitTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_GameTickReflexWaitTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameTickReflexWaitTime,*pFVar14,
                        L"Game thread wait time (Reflex)","STATGROUP_Threading","STATCAT_Advanced",
                        L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar15;
  bVar8 = false;
  bVar5 = false;
  local_328.ComparisonIndex.Value = 0;
  local_328.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar12 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar12 == 0)) {
LAB_14de7c0b0:
    bVar4 = false;
    FVar23 = local_328;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_344.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_344._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_330.ComparisonIndex.Value = FVar22.Value;
        local_330.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_330,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                   ,0x169);
        bVar8 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14de7c0b0;
    local_340.s.LowPart = FVar22.Value;
    local_340.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar4 = true;
  }
  QueryPerformanceCounter(&local_340);
  dVar6 = __real_4170000000000000;
  dVar3 = (double)CONCAT44(local_340.s.HighPart,local_340.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    LastRealTimeAfterSleep = dVar3 - __real_3f1a36e2eb1c432d;
    _Init_thread_footer(&::_TSS0);
  }
  dVar3 = dVar3 - LastRealTimeAfterSleep;
  local_2d8._padding_ = 0;
  local_2d8._padding_._0_4_ = 0xf03af81a;
  local_2d8._padding_._4_4_ = 0x49026d0b;
  local_2d8._padding_._0_4_ = 0x96c451a6;
  local_2d8._padding_._4_4_ = 0x3454215e;
  local_2d8._padding_ = 1;
  local_2d8.mode = eOff;
  local_2d8.virtualKey = 0;
  local_2d8.idThread = 0;
  uVar12 = (**(code **)(*(longlong *)this + 0x28))(this);
  uVar12 = uVar12 & 3;
  if (uVar12 != 0) {
    if (uVar12 == 1) {
      local_2d8.mode = eLowLatency;
    }
    else if (uVar12 == 2) {
      if (1 < (byte)LogStreamline._0_1_) {
        (**(code **)(*(longlong *)this + 0x28))(this);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      }
    }
    else if (uVar12 == 3) {
      local_2d8.mode = eLowLatencyWithBoost;
    }
  }
  pTVar7 = CVarStreamlineReflexHandleMaxTickRate.Ref;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    lVar16 = 1;
    if (!bVar9) goto LAB_14de7c1be;
  }
  lVar16 = 0;
LAB_14de7c1be:
  if (pTVar7->ShadowedValue[lVar16] == false) {
    local_2d8.frameLimitUs = 0;
  }
  else {
    fVar25 = 0.0;
    if (param_1 <= 0.0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = __real_3f800000 / param_1;
    }
    if ((float)dVar3 <= fVar26) {
      fVar25 = fVar26 * __real_49742400;
    }
    local_2d8.frameLimitUs = (uint)fVar25;
    bVar24 = true;
  }
  local_2d8.useMarkersToOptimize = true;
  bVar9 = StreamlineFilterRedundantSetOptionsCalls();
  if (((((!bVar9) || (LastFrameOptions.mode != local_2d8.mode)) ||
       (LastFrameOptions.frameLimitUs != local_2d8.frameLimitUs)) ||
      ((LastFrameOptions.useMarkersToOptimize != local_2d8.useMarkersToOptimize ||
       (LastFrameOptions.virtualKey != local_2d8.virtualKey)))) ||
     (LastFrameOptions.idThread != local_2d8.idThread)) {
    RVar13 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexOptions_const_&),sl::ReflexOptions_const_&>
                       (3,"slReflexSetOptions",&local_2d8);
    if (RVar13 != eOk) {
      pcVar17 = sl::getResultAsStr(RVar13);
      local_2a8._padding_ = 0;
      if (pcVar17 == (char *)0x0) {
        local_2a8.StringLength = 0;
        local_2a8.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar18 = strlen(pcVar17);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_2a8,pcVar17,(int)sVar18,Yes);
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                         ,0x15e,L"slReflexSetOptions failed (%s)");
      if ((void *)local_2a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._padding_);
      }
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
    }
    LastFrameOptions._padding_ = CONCAT44(local_2d8._padding_._4_4_,(undefined4)local_2d8._padding_)
    ;
    LastFrameOptions._padding_ = CONCAT44(local_2d8._padding_._4_4_,(undefined4)local_2d8._padding_)
    ;
    LastFrameOptions._padding_ = local_2d8._padding_;
    LastFrameOptions.frameLimitUs = local_2d8.frameLimitUs;
    LastFrameOptions.mode = local_2d8.mode;
    LastFrameOptions._41_1_ = local_2d8._41_1_;
    LastFrameOptions.useMarkersToOptimize = local_2d8.useMarkersToOptimize;
    LastFrameOptions.virtualKey = local_2d8.virtualKey;
    LastFrameOptions.idThread = local_2d8.idThread;
    LastFrameOptions._padding_ = local_2d8._padding_;
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId408,"ReflexSleep",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
               ,0x198);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId408);
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_338,false);
  this_00 = GetPlatformStreamlineRHI();
  pFVar19 = FStreamlineRHI::GetFrameToken(this_00,GFrameCounter);
  RVar13 = CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::FrameToken_const_&),sl::FrameToken_&>
                     (3,"slReflexSleep",pFVar19);
  if (RVar13 != eOk) {
    pcVar17 = sl::getResultAsStr(RVar13);
    local_188._padding_ = 0;
    if (pcVar17 == (char *)0x0) {
      local_188.Ptr = (wchar_t *)0x0;
      local_188.StringLength = 0;
    }
    else {
      sVar18 = strlen(pcVar17);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_188,pcVar17,(int)sVar18,Yes);
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result == sl::Result::eOk",
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                        ,0x1a0,L"slReflexSleep failed (%s)");
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  QueryPerformanceCounter(&local_318);
  LastRealTimeAfterSleep =
       (double)local_318.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
  if (local_338.bIgnore == false) {
    puVar20 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_2e8 = local_348;
    local_2f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar21 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2f0,puVar20);
    QueryPerformanceCounter(&local_310);
    *(DWORD *)(pFVar21 + 2) = *(int *)(pFVar21 + 2) + (local_310.s.LowPart - local_338.Start);
    if (0 < *(int *)(pFVar21 + 3)) {
      *(DWORD *)&pFVar21[2].field_0x4 =
           *(int *)&pFVar21[2].field_0x4 + (local_310.s.LowPart - local_338.Start);
    }
    pFVar21[3].field_0x4 = 0;
  }
  if (local_338.TraceEventScope.bEnabled != false) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_300.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_300.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_308);
      local_300.StatData.Pad[4] = '\0';
      local_300.StatData.Pad[5] = '\0';
      local_300.StatData.Pad[6] = '\0';
      local_300.StatData.Pad[7] = '\0';
      local_300.StatData.Pad[0] = local_308.s.LowPart._0_1_;
      local_300.StatData.Pad[1] = local_308.s.LowPart._1_1_;
      local_300.StatData.Pad[2] = local_308.s.LowPart._2_1_;
      local_300.StatData.Pad[3] = local_308.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_300);
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
  return bVar24;
}

// Initialize @ 14de7c820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStreamlineMaxTickRateHandler::Initialize(FStreamlineMaxTickRateHandler *this)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58 [2];
  ReflexOptions local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar3 = FStreamlineLatencyBase::IsStreamlineReflexSupported();
  lVar2 = CVarStreamlineReflexEnable._padding_;
  if (bVar3) {
    local_48._padding_ = 0;
    local_48.mode = eOff;
    local_48.frameLimitUs = 0;
    local_48.useMarkersToOptimize = false;
    local_48.virtualKey = 0;
    local_48.idThread = 0;
    local_48._padding_ = 0x49026d0bf03af81a;
    local_48._padding_._0_4_ = 0x96c451a6;
    local_48._padding_._4_4_ = 0x3454215e;
    local_48._padding_ = 1;
    CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexOptions_const_&),sl::ReflexOptions_const_&>
              (3,"slReflexSetOptions",&local_48);
    return;
  }
  local_58[0] = 0;
  local_48._padding_ = CONCAT35(local_48._padding_._5_3_,0xd000000);
  lVar1 = *(longlong *)CVarStreamlineReflexEnable._padding_;
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = (uint)local_48._padding_ & 0xffffff00;
  local_48._padding_._4_4_ = 0xf000000;
  local_48._padding_ = CONCAT44(local_48._padding_._4_4_,0x1000000);
  uVar4 = (**(code **)(lVar1 + 0xa8))(CVarStreamlineReflexEnable._padding_,local_58,&local_48);
  (**(code **)(lVar1 + 0xb0))(lVar2,&u_0,uVar4);
  return;
}

// Reset @ 14de81cb0

void __cdecl FStreamlineMaxTickRateHandler::Reset(void)

{
  TUniquePtr<FStreamlineMaxTickRateHandler,TDefaultDelete<FStreamlineMaxTickRateHandler>_> TVar1;
  
  TVar1.Ptr = StreamlineMaxTickRateHandler.Ptr;
  if (StreamlineMaxTickRateHandler.Ptr != (FStreamlineMaxTickRateHandler *)0x0) {
    StreamlineMaxTickRateHandler.Ptr = (FStreamlineMaxTickRateHandler *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014de81ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)TVar1.Ptr + 0x38))(TVar1.Ptr,1);
    return;
  }
  return;
}

// SetEnabled @ 14de838f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamlineMaxTickRateHandler::SetEnabled(FStreamlineMaxTickRateHandler *this,bool param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_188 [32];
  undefined8 local_168 [2];
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  cVar3 = (**(code **)(*(longlong *)this + 0x18))();
  if (cVar3 == '\0') {
    param_1 = false;
    if (4 < (byte)LogStreamline._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FStreamlineMaxTickRateHandler::SetEnabled",0x29,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      param_1 = false;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  lVar2 = CVarStreamlineReflexEnable._padding_;
  local_168[0] = 0;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0;
  lVar1 = *(longlong *)CVarStreamlineReflexEnable._padding_;
  local_158 = 0xd000000;
  local_144 = 0xf000000;
  local_140 = 0x1000000;
  uVar4 = (**(code **)(lVar1 + 0xa8))(CVarStreamlineReflexEnable._padding_,local_168,&local_158);
  puVar5 = &u_0;
  if (param_1 != false) {
    puVar5 = &u_1;
  }
  (**(code **)(lVar1 + 0xb0))(lVar2,puVar5,uVar4);
  return;
}

// SetFlags @ 14de83a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FStreamlineMaxTickRateHandler::SetFlags(FStreamlineMaxTickRateHandler *this,uint param_1)

{
  uint uVar1;
  ReflexMode RVar2;
  
  uVar1 = param_1 & 3;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      RVar2 = eLowLatency;
      goto LAB_14de83a5a;
    }
    if (uVar1 == 3) {
      RVar2 = eLowLatencyWithBoost;
      goto LAB_14de83a5a;
    }
    if (1 < (byte)LogStreamline._0_1_) {
      (**(code **)(*(longlong *)this + 0x28))();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    }
  }
  RVar2 = eOff;
LAB_14de83a5a:
  IConsoleVariable::Set<enum_sl::ReflexMode>
            ((IConsoleVariable *)CVarStreamlineReflexMode._padding_,RVar2,ECVF_SetByCommandline,
             (FName)0x0);
  return;
}


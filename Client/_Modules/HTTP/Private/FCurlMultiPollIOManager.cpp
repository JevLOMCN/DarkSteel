// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 6

// FCurlMultiPollIOManager @ 14314cc50

FCurlMultiPollIOManager * __thiscall
FCurlMultiPollIOManager::FCurlMultiPollIOManager
          (FCurlMultiPollIOManager *this,IEventLoop *param_1,FParams *param_2)

{
  undefined8 uVar1;
  
  (this->IOAccess).IOManager = this;
  this->_padding_ = (longlong)&___7FCurlMultiPollIOManager__6B_;
  this->EventLoop = param_1;
  (this->Params).MultiHandle = param_2->MultiHandle;
  *(undefined8 *)&(this->Params).ProcessCurlRequests = *(undefined8 *)&param_2->ProcessCurlRequests;
  *(undefined8 *)&(this->Params).ProcessCurlRequests.field_0x28 =
       *(undefined8 *)&(param_2->ProcessCurlRequests).field_0x28;
  *(undefined8 *)&(param_2->ProcessCurlRequests).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_2->ProcessCurlRequests).field_0x18;
  *(undefined8 *)&(this->Params).ProcessCurlRequests.field_0x10 =
       *(undefined8 *)&(param_2->ProcessCurlRequests).field_0x10;
  *(undefined8 *)&(this->Params).ProcessCurlRequests.field_0x18 = uVar1;
  *(undefined8 *)&(this->Params).ProcessCurlRequests.field_0x20 =
       *(undefined8 *)&(param_2->ProcessCurlRequests).field_0x20;
  if (*(longlong *)&(this->Params).ProcessCurlRequests != 0) {
    *(undefined8 *)&param_2->ProcessCurlRequests = 0;
  }
  return this;
}

// ~FCurlMultiPollIOManager @ 1431502c0

void __thiscall FCurlMultiPollIOManager::~FCurlMultiPollIOManager(FCurlMultiPollIOManager *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->Params).ProcessCurlRequests != 0) {
    plVar1 = *(longlong **)&(this->Params).ProcessCurlRequests.field_0x28;
    plVar2 = (longlong *)&(this->Params).ProcessCurlRequests.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001431502d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// Init @ 14316ae40

bool __thiscall FCurlMultiPollIOManager::Init(FCurlMultiPollIOManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&(this->Params).ProcessCurlRequests == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.ProcessCurlRequests",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// Notify @ 1431705a0

void __thiscall FCurlMultiPollIOManager::Notify(FCurlMultiPollIOManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = curl_multi_wakeup((this->Params).MultiHandle);
  if (iVar3 != 0) {
    curl_multi_strerror(iVar3);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Code == CURLM_OK",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                       ,0x40,L"Error in curl_multi operation: %hs");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Poll @ 143171fb0

/* WARNING: Removing unreachable block (ram,0x000143172271) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlMultiPollIOManager::Poll(FCurlMultiPollIOManager *this,FTimespan param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_2_::FStat_STAT_FCurlMultiPollIOManager_Poll>
  FVar16;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_3_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPerform>
  FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  undefined8 uVar20;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_4_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPoll>
  FVar21;
  longlong *plVar22;
  FColor_u_0 FVar23;
  FName FVar24;
  FName FVar25;
  ulonglong uVar26;
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 auVar27 [16];
  FColor_u_0 local_res10 [2];
  FColor_u_0 local_res18;
  uint uStackX_1c;
  undefined4 local_res20 [2];
  FColor_u_0 local_110 [2];
  FColor_u_0 local_108;
  uint local_104;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e0;
  FName local_d0;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  uVar26 = (ulonglong)_tls_index;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FCurlMultiPollIOManager_Poll =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_2_::FStat_STAT_FCurlMultiPollIOManager_Poll>
          )0x0;
    pFVar15 = ::FName::FName(&local_78,"STAT_FCurlMultiPollIOManager_Poll");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlMultiPollIOManager_Poll,*pFVar15,
               L"STAT_FCurlMultiPollIOManager_Poll","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_FCurlMultiPollIOManager_Poll;
  if (StatPtr_STAT_FCurlMultiPollIOManager_Poll ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_2_::FStat_STAT_FCurlMultiPollIOManager_Poll>
       )0x0) {
    pFVar15 = ::FName::FName(&local_70,"STAT_FCurlMultiPollIOManager_Poll");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_2_::FStat_STAT_FCurlMultiPollIOManager_Poll>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlMultiPollIOManager_Poll,
                          *pFVar15,L"STAT_FCurlMultiPollIOManager_Poll","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar23.Bits = (uint)FVar25.ComparisonIndex.Value;
  uVar13 = FVar25.Number;
  if ((FVar23.Bits == 0) && (uVar13 == 0)) {
LAB_1431721ae:
    bVar10 = false;
    FVar25 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar23.Bits;
        local_104 = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                   ,0x2b);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1431721ae;
    local_res18.Bits = FVar23.Bits;
    uStackX_1c = uVar13;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar10 = true;
  }
  local_res20[0] = 0xffffffff;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPerform =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_3_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPerform>
          )0x0;
    pFVar15 = ::FName::FName(&local_68,"STAT_FCurlMultiPollIOManager_Poll_MultiPerform");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPerform,
               *pFVar15,L"STAT_FCurlMultiPollIOManager_Poll_MultiPerform","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar17 = StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPerform;
  if (StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPerform ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_3_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPerform>
       )0x0) {
    pFVar15 = ::FName::FName(&local_60,"STAT_FCurlMultiPollIOManager_Poll_MultiPerform");
    FVar17 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_3_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPerform>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPerform,*pFVar15,
                          L"STAT_FCurlMultiPollIOManager_Poll_MultiPerform","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_1431723ad:
    bVar8 = false;
    FVar24 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_100.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                   ,0x2f);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1431723ad;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar7 = false;
    bVar8 = true;
  }
  iVar14 = curl_multi_perform((this->Params).MultiHandle,local_res20);
  if (iVar14 != 0) {
    curl_multi_strerror(iVar14);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Code == CURLM_OK",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                        ,0x40,L"Error in curl_multi operation: %hs");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_a8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Params).ProcessCurlRequests);
  plVar3 = *(longlong **)&(this->Params).ProcessCurlRequests.field_0x28;
  pcVar4 = *(code **)&(this->Params).ProcessCurlRequests;
  plVar22 = (longlong *)&(this->Params).ProcessCurlRequests.field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar22 = plVar3;
  }
  uVar20 = (**(code **)(*plVar22 + 8))();
  auVar27._0_8_ = (*pcVar4)(uVar20);
  auVar27._8_8_ = extraout_XMM0_Qb;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) < ::_TSS2)
     && (_Init_thread_header(&::_TSS2), auVar27 = extraout_XMM0, ::_TSS2 == -1)) {
    StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPoll =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_4_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPoll>
          )0x0;
    pFVar15 = ::FName::FName(&local_58,"STAT_FCurlMultiPollIOManager_Poll_MultiPoll");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPoll,
               *pFVar15,L"STAT_FCurlMultiPollIOManager_Poll_MultiPoll","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS2);
    auVar27 = extraout_XMM0_00;
  }
  FVar21 = StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPoll;
  if (StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPoll ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_4_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPoll>
       )0x0) {
    pFVar15 = ::FName::FName(local_50,"STAT_FCurlMultiPollIOManager_Poll_MultiPoll");
    FVar21 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlMultiPollIOManager::Poll(FTimespan)_::_4_::FStat_STAT_FCurlMultiPollIOManager_Poll_MultiPoll>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlMultiPollIOManager_Poll_MultiPoll,*pFVar15,
                          L"STAT_FCurlMultiPollIOManager_Poll_MultiPoll","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    auVar27 = extraout_XMM0_01;
  }
  FVar24 = *(FName *)FVar21;
  bVar6 = false;
  bVar7 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar6 = false;
      bVar7 = true;
      auVar27 = extraout_XMM0_02;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_f8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                   ,0x37);
        bVar6 = true;
        bVar7 = true;
        auVar27 = extraout_XMM0_03;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar8 = true;
      auVar27 = extraout_XMM0_04;
      goto LAB_1431726e3;
    }
  }
  bVar8 = false;
  FVar24 = local_d0;
LAB_1431726e3:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (double)param_1.Ticks * __real_3f1a36e2eb1c432d;
  auVar27 = roundpd(auVar27,auVar5,2);
  iVar14 = curl_multi_poll((this->Params).MultiHandle,0,0,(longlong)auVar27._0_8_,0);
  if (iVar14 != 0) {
    curl_multi_strerror(iVar14);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Code == CURLM_OK",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                        ,0x40,L"Error in curl_multi operation: %hs");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_98.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_98);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar25 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_88.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_88);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  return;
}

// Shutdown @ 143182490

void __thiscall FCurlMultiPollIOManager::Shutdown(FCurlMultiPollIOManager *this)

{
  return;
}


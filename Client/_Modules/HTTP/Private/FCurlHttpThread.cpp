// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 4

// FCurlHttpThread @ 14314cb50

FCurlHttpThread * __thiscall FCurlHttpThread::FCurlHttpThread(FCurlHttpThread *this)

{
  FLegacyHttpThread::FLegacyHttpThread((FLegacyHttpThread *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  *(undefined8 *)&this->HandlesToRequests = 0;
  *(undefined8 *)&(this->HandlesToRequests).field_0x8 = 0;
  *(undefined8 *)&(this->HandlesToRequests).field_0x20 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x28 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlesToRequests).field_0x34 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HandlesToRequests).field_0x40 = 0;
  *(undefined4 *)&(this->HandlesToRequests).field_0x48 = 0;
  return this;
}

// CompleteThreadedRequest @ 143158d20

void __thiscall
FCurlHttpThread::CompleteThreadedRequest(FCurlHttpThread *this,FHttpRequestCommon *param_1)

{
  void *pvVar1;
  FHttpRequestCommon **ppFVar2;
  uint uVar3;
  void *local_res8;
  
  pvVar1 = (void *)param_1[1]._padding_;
  ppFVar2 = TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
            ::Find((TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
                    *)&this->HandlesToRequests,pvVar1);
  if (ppFVar2 != (FHttpRequestCommon **)0x0) {
    curl_multi_remove_handle(FCurlHttpManager::GMultiHandle,pvVar1);
    local_res8 = pvVar1;
    if (*(int *)&(this->HandlesToRequests).field_0x8 !=
        *(int *)&(this->HandlesToRequests).field_0x34) {
      uVar3 = ((uint)((ulonglong)pvVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                  *)&this->HandlesToRequests,uVar3 >> 0x10 ^ uVar3,&local_res8);
    }
  }
  curl_easy_setopt(param_1[1]._padding_,0x2774,0);
  return;
}

// HttpThreadTick @ 143169d80

/* WARNING: Removing unreachable block (ram,0x00014316a0cc) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpThread::HttpThreadTick(FCurlHttpThread *this,float param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_2_::FStat_STAT_FCurlHttpThread_HttpThreadTick>
  FVar10;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_13_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Perform>
  FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_18_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Loop>
  FVar14;
  int *piVar15;
  FHttpRequestCommon **ppFVar16;
  uint uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  ulonglong uVar20;
  FName FVar21;
  FNameEntryId FVar22;
  int local_res20 [2];
  ulonglong local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FColor_u_0 local_120;
  undefined4 local_11c;
  FName local_118;
  FName local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  LARGE_INTEGER local_d0;
  void *local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [4];
  
  uVar20 = (ulonglong)_tls_index;
  FVar22.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FCurlHttpThread_HttpThreadTick =
         (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_2_::FStat_STAT_FCurlHttpThread_HttpThreadTick>
          )0x0;
    pFVar9 = ::FName::FName(&local_80,"STAT_FCurlHttpThread_HttpThreadTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpThread_HttpThreadTick,*pFVar9,
               L"STAT_FCurlHttpThread_HttpThreadTick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FCurlHttpThread_HttpThreadTick;
  if (StatPtr_STAT_FCurlHttpThread_HttpThreadTick ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_2_::FStat_STAT_FCurlHttpThread_HttpThreadTick>
       )0x0) {
    pFVar9 = ::FName::FName(&local_78,"STAT_FCurlHttpThread_HttpThreadTick");
    FVar10 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_2_::FStat_STAT_FCurlHttpThread_HttpThreadTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpThread_HttpThreadTick,
                          *pFVar9,L"STAT_FCurlHttpThread_HttpThreadTick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar10;
  bVar6 = false;
  bVar5 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_143169faa:
    bVar6 = bVar8;
    bVar5 = bVar7;
    bVar7 = false;
    local_e8 = local_e0;
    FVar21 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138 = local_138 & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_f8.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttpThread.cpp"
                   ,0x11);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143169faa;
    local_e8 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar7 = true;
  }
  if ((FCurlHttpManager::GMultiHandle == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCurlHttpManager::IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttpThread.cpp"
                         ,0x12,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)this->_padding_ < 1) goto LAB_14316a7b1;
  local_res20[0] = -1;
  uVar20 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
  local_138 = uVar20;
  if ((*(int *)(uVar20 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Perform =
         (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_13_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Perform>
          )0x0;
    pFVar9 = ::FName::FName(&local_70,"STAT_FCurlHttpThread_HttpThreadTick_Perform");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Perform,
               *pFVar9,L"STAT_FCurlHttpThread_HttpThreadTick_Perform","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar11 = StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Perform;
  if (StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Perform ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_13_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Perform>
       )0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_FCurlHttpThread_HttpThreadTick_Perform");
    FVar11 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_13_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Perform>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Perform,*pFVar9,
                          L"STAT_FCurlHttpThread_HttpThreadTick_Perform","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar11;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar3 = false;
  bVar8 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar17 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar17 == 0)) {
LAB_14316a20c:
    bVar4 = false;
    FVar19 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar18.Value;
        local_128.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttpThread.cpp"
                   ,0x18);
        bVar3 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14316a20c;
    local_128.ComparisonIndex.Value = FVar18.Value;
    local_128.Number = uVar17;
    local_108 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar3 = false;
    bVar4 = true;
    FVar22.Value = local_108.ComparisonIndex.Value;
  }
  curl_multi_perform(FCurlHttpManager::GMultiHandle,local_res20);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar22.Value;
      QueryPerformanceCounter(&local_d0);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_b0);
      piVar15 = &pFVar12->ScopeCount;
      *piVar15 = *piVar15 + -1;
      if (*piVar15 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if ((local_res20[0] == 0) || (local_res20[0] != (int)this->_padding_)) {
LAB_14316a310:
    if ((*(int *)(uVar20 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Loop =
           (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_18_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Loop>
            )0x0;
      pFVar9 = ::FName::FName(&local_60,"STAT_FCurlHttpThread_HttpThreadTick_Loop");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Loop,
                 *pFVar9,L"STAT_FCurlHttpThread_HttpThreadTick_Loop","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS2);
    }
    FVar22.Value = 0;
    FVar14 = StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Loop;
    if (StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Loop ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_18_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Loop>
         )0x0) {
      pFVar9 = ::FName::FName(local_58,"STAT_FCurlHttpThread_HttpThreadTick_Loop");
      FVar14 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FCurlHttpThread::HttpThreadTick(float)_::_18_::FStat_STAT_FCurlHttpThread_HttpThreadTick_Loop>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FCurlHttpThread_HttpThreadTick_Loop,*pFVar9,
                            L"STAT_FCurlHttpThread_HttpThreadTick_Loop","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar19 = *(FName *)FVar14;
    bVar3 = false;
    bVar8 = false;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    FVar18 = FVar19.ComparisonIndex.Value;
    uVar17 = FVar19.Number;
    if ((FVar18.Value == 0) && (uVar17 == 0)) {
LAB_14316a4f3:
      bVar4 = false;
      FVar19 = local_118;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_130[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
        bVar3 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f0.ComparisonIndex.Value = FVar18.Value;
          local_f0.Number = uVar17;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttpThread.cpp"
                     ,0x22);
          bVar3 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14316a4f3;
      local_128.ComparisonIndex.Value = FVar18.Value;
      local_128.Number = uVar17;
      local_118 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar3 = false;
      bVar4 = true;
      FVar22.Value = local_118.ComparisonIndex.Value;
    }
    local_11c = 0;
    piVar15 = (int *)curl_multi_info_read(FCurlHttpManager::GMultiHandle,&local_11c);
    FVar21 = local_e8;
    if (piVar15 != (int *)0x0) {
      if (*piVar15 == 1) {
        pvVar1 = *(void **)(piVar15 + 2);
        curl_multi_remove_handle(FCurlHttpManager::GMultiHandle,pvVar1);
        ppFVar16 = TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
                   ::Find((TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
                           *)&this->HandlesToRequests,pvVar1);
        if (ppFVar16 == (FHttpRequestCommon **)0x0) {
          if (2 < (byte)LogHttp._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
        }
        else {
          FCurlHttpRequest::MarkAsCompleted((FCurlHttpRequest *)*ppFVar16,piVar15[4]);
          if (5 < (byte)LogHttp._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
          local_c8 = pvVar1;
          if (*(int *)&(this->HandlesToRequests).field_0x8 !=
              *(int *)&(this->HandlesToRequests).field_0x34) {
            uVar17 = ((uint)((ulonglong)pvVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar1 >> 4)) *
                     -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<void_const_*>
                      ((TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                        *)&this->HandlesToRequests,uVar17 >> 0x10 ^ uVar17,&local_c8);
          }
        }
      }
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar20 = local_138;
      if ((((bVar4) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
          local_a0.NameAndInfo.Index.Value = local_118.ComparisonIndex.Value;
          local_a0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_c0);
          local_a0.StatData.Pad[4] = '\0';
          local_a0.StatData.Pad[5] = '\0';
          local_a0.StatData.Pad[6] = '\0';
          local_a0.StatData.Pad[7] = '\0';
          local_a0.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
          local_a0.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
          local_a0.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
          local_a0.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar12,&local_a0);
          piVar15 = &pFVar12->ScopeCount;
          *piVar15 = *piVar15 + -1;
          if (*piVar15 == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
      goto LAB_14316a310;
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar4) && (FVar19 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_90.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
        local_90.NameAndInfo.Index.Value = FVar22.Value;
        QueryPerformanceCounter(&local_b8);
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_90.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
        local_90.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
        local_90.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
        local_90.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_90);
        piVar15 = &pFVar12->ScopeCount;
        *piVar15 = *piVar15 + -1;
        if (*piVar15 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
LAB_14316a7b1:
  FTSTicker::Tick((FTSTicker *)&this->_padding_,param_1);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// StartThreadedRequest @ 143183d70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCurlHttpThread::StartThreadedRequest(FCurlHttpThread *this,FHttpRequestCommon *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  TPairInitializer<void_*_const_&,FHttpRequestCommon_*_const_&> local_res8;
  ulonglong local_res18;
  ulonglong *local_18;
  FHttpRequestCommon ***local_10;
  
  local_res18 = param_1[1]._padding_;
  uVar6 = ((uint)(local_res18 >> 0x14) & 0xffff ^ (uint)(local_res18 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res8.Value = (FHttpRequestCommon **)param_1;
  if (*(int *)&(this->HandlesToRequests).field_0x8 != *(int *)&(this->HandlesToRequests).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->HandlesToRequests).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->HandlesToRequests).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->HandlesToRequests).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->HandlesToRequests).field_0x0;
      do {
        if (*(ulonglong *)(lVar1 + (longlong)iVar5 * 0x18) == local_res18) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8715361269269397579>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttpThread.cpp"
                             ,0x4b,"!HandlesToRequests.Contains(EasyHandle)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  bVar3 = FCurlHttpRequest::SetupRequestHttpThread((FCurlHttpRequest *)param_1);
  if (bVar3) {
    iVar5 = curl_multi_add_handle(FCurlHttpManager::GMultiHandle,local_res18);
    *(int *)((longlong)&param_1[1]._padding_ + 4) = iVar5;
    if (iVar5 == 0) {
      local_18 = &local_res18;
      local_10 = &local_res8.Value;
      TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_const_&,FHttpRequestCommon_*_const_&>_>
                ((TSet<TTuple<void_*,FHttpRequestCommon_*>,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>,FDefaultSetAllocator>
                  *)&this->HandlesToRequests,&local_res8,(bool *)&local_18);
      uVar4 = (**(code **)(*(longlong *)local_res8.Value + 0x178))();
      return (bool)uVar4;
    }
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
  }
  else if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    return false;
  }
  return false;
}


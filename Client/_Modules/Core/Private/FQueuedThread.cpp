// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Create @ 1416e6db0

bool __thiscall
FQueuedThread::Create
          (FQueuedThread *this,FQueuedThreadPoolBase *param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FEvent *pFVar5;
  FRunnableThread *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FString local_48;
  FString local_38;
  
  if (param_4 == (wchar_t *)0x0) {
    `protected:_class_FString___cdecl_FQueuedThread::SetupForCreate(FQueuedThreadPoolBase*___ptr64,wchar_t_const*___ptr64)___ptr64'
    ::__l2::PoolThreadIndex =
         `protected:_class_FString___cdecl_FQueuedThread::SetupForCreate(FQueuedThreadPoolBase*___ptr64,wchar_t_const*___ptr64)___ptr64'
         ::__l2::PoolThreadIndex + 1;
    ::FString::PrintfImpl(&local_48,L"PoolThread %d");
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
    iVar9 = local_48.Data.ArrayNum;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  else {
    pFVar4 = ::FString::FString(&local_38,param_4);
    FVar8.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = (pFVar4->Data).ArrayNum;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  this->OwningThreadPool = param_1;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->DoWorkEvent = pFVar5;
  pFVar7 = (FScriptContainerElement *)L"";
  if (iVar9 != 0) {
    pFVar7 = FVar8.Data;
  }
  pFVar6 = FRunnableThread::Create
                     ((FRunnable *)this,(wchar_t *)pFVar7,param_2,param_3,0xffffffffffffffff,None);
  this->Thread = pFVar6;
  if (pFVar6 == (FRunnableThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x457,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return true;
}

// CreateForkable @ 1416e8090

bool __thiscall
FQueuedThread::CreateForkable
          (FQueuedThread *this,FQueuedThreadPoolBase *param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  FString *pFVar1;
  FEvent *pFVar2;
  FRunnableThread *pFVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  if (param_4 == (wchar_t *)0x0) {
    `protected:_class_FString___cdecl_FQueuedThread::SetupForCreate(FQueuedThreadPoolBase*___ptr64,wchar_t_const*___ptr64)___ptr64'
    ::__l2::PoolThreadIndex =
         `protected:_class_FString___cdecl_FQueuedThread::SetupForCreate(FQueuedThreadPoolBase*___ptr64,wchar_t_const*___ptr64)___ptr64'
         ::__l2::PoolThreadIndex + 1;
    ::FString::PrintfImpl(&local_48,L"PoolThread %d");
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    pFVar1 = ::FString::FString(&local_38,param_4);
    FVar5.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  this->OwningThreadPool = param_1;
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->DoWorkEvent = pFVar2;
  pFVar4 = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    pFVar4 = FVar5.Data;
  }
  pFVar3 = FForkProcessHelper::CreateForkableThread
                     ((FRunnable *)this,(wchar_t *)pFVar4,param_2,param_3,0xffffffffffffffff,None,
                      false);
  this->Thread = pFVar3;
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return pFVar3 != (FRunnableThread *)0x0;
}

// DoWork @ 1416ebd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FQueuedThread::DoWork(FQueuedThread *this,IQueuedWork *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FQueuedThread::DoWork(IQueuedWork*___ptr64)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FQueuedThread::DoWork(IQueuedWork*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FQueuedThread::DoWork(IQueuedWork*___ptr64)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FQueuedThread_DoWork = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"STAT_FQueuedThread_DoWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FQueuedThread::DoWork(IQueuedWork*___ptr64)___ptr64'::__l2::
                StatPtr_STAT_FQueuedThread_DoWork,*pFVar7,L"FQueuedThread::DoWork",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FQueuedThread::DoWork(IQueuedWork*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_FQueuedThread_DoWork;
  if (_StatPtr_STAT_FQueuedThread_DoWork == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_FQueuedThread_DoWork");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FQueuedThread::DoWork(IQueuedWork*___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FQueuedThread_DoWork,*pFVar7,L"FQueuedThread::DoWork",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                   ,0x491);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1416ebe8c;
    }
  }
  bVar4 = false;
  FVar11 = local_60;
LAB_1416ebe8c:
  if ((this->QueuedWork != (IQueuedWork *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedWork == nullptr && \"Can\'t do more than one task at a time\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x493,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->QueuedWork = param_1;
  (**(code **)(this->DoWorkEvent->_padding_ + 0x10))();
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Run @ 14170f140

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FQueuedThread::Run(FQueuedThread *this)

{
  int *piVar1;
  longlong lVar2;
  FQueuedThreadPoolBase *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ThreadPoolDummyCounter> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<_protected:_virtual_unsigned_int___cdecl_FQueuedThread::Run(void)_::_13_::FStat_STAT_FQueuedThread_Run_WaitForWork>
  FVar16;
  IQueuedWork *pIVar17;
  FNameEntryId FVar18;
  FName FVar19;
  TArray<FQueuedThread_*,TSizedDefaultAllocator<32>_> *pTVar20;
  FColor_u_0 local_res8 [4];
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FQueuedThread *local_b8;
  uint local_b0;
  uint uStack_ac;
  FName local_a8;
  FName local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  do {
    if (this->TimeToDie != (TAtomic<bool>)0x0) {
      return 0;
    }
    if (FThreadStats::bPrimaryEnable == false) {
LAB_14170f524:
      (**(code **)(this->DoWorkEvent->_padding_ + 0x20))();
    }
    else {
      FVar13 = StatPtr_STAT_ThreadPoolDummyCounter;
      if (StatPtr_STAT_ThreadPoolDummyCounter ==
          (FThreadSafeStaticStat<FStat_STAT_ThreadPoolDummyCounter>)0x0) {
        pFVar12 = ::FName::FName(&local_68,"STAT_ThreadPoolDummyCounter");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_ThreadPoolDummyCounter>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ThreadPoolDummyCounter,
                            *pFVar12,L"ThreadPoolDummyCounter","STATGROUP_ThreadPoolAsyncTasks",
                            "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar19 = *(FName *)FVar13;
      FVar18 = FVar19.ComparisonIndex.Value;
      uVar10 = FVar19.Number;
      local_res18 = FVar18.Value;
      uStackX_1c = uVar10;
      if (((FVar19 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        local_88.NameAndInfo.Number = uVar10 & 0xffff8fff | 0x8000;
        local_88.StatData.Pad[0] = '\0';
        local_88.StatData.Pad[1] = '\0';
        local_88.StatData.Pad[2] = '\0';
        local_88.StatData.Pad[3] = '\0';
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_98 = FVar19;
        local_88.NameAndInfo.Index.Value = FVar18.Value;
        FThreadStats::AddStatMessage(pFVar14,&local_88);
        FStatsTrace::Set(&local_98,0);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14170f524;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          if (StatPtr_STAT_FQueuedThread_Run_WaitForWork ==
              (FThreadSafeStaticStat<_protected:_virtual_unsigned_int___cdecl_FQueuedThread::Run(void)_::_13_::FStat_STAT_FQueuedThread_Run_WaitForWork>
               )0x0) {
            pFVar12 = ::FName::FName(&local_60,"STAT_FQueuedThread_Run_WaitForWork");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FQueuedThread_Run_WaitForWork,
                       *pFVar12,L"FQueuedThread::Run.WaitForWork","STATGROUP_ThreadPoolAsyncTasks",
                       "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        FVar16 = StatPtr_STAT_FQueuedThread_Run_WaitForWork;
        if (StatPtr_STAT_FQueuedThread_Run_WaitForWork ==
            (FThreadSafeStaticStat<_protected:_virtual_unsigned_int___cdecl_FQueuedThread::Run(void)_::_13_::FStat_STAT_FQueuedThread_Run_WaitForWork>
             )0x0) {
          pFVar12 = ::FName::FName(local_58,"STAT_FQueuedThread_Run_WaitForWork");
          FVar16 = (FThreadSafeStaticStat<_protected:_virtual_unsigned_int___cdecl_FQueuedThread::Run(void)_::_13_::FStat_STAT_FQueuedThread_Run_WaitForWork>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_FQueuedThread_Run_WaitForWork,*pFVar12,
                                L"FQueuedThread::Run.WaitForWork","STATGROUP_ThreadPoolAsyncTasks",
                                "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true
                                ,false,MCR_Invalid);
        }
        FVar19 = *(FName *)FVar16;
        bVar6 = false;
        bVar9 = false;
        local_a8.ComparisonIndex.Value = 0;
        local_a8.Number = 0;
        FVar18 = FVar19.ComparisonIndex.Value;
        uVar10 = FVar19.Number;
        if ((FVar18.Value == 0) && (uVar10 == 0)) {
LAB_14170f40c:
          bVar7 = false;
          FVar19 = local_a8;
        }
        else {
          if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
            local_res8[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
            bVar6 = false;
            bVar9 = true;
            if (-1 < CpuChannel->Enabled) {
              local_res20.ComparisonIndex.Value = FVar18.Value;
              local_res20.Number = uVar10;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_res20,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x5a8);
              bVar6 = true;
              bVar9 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_14170f40c;
          local_b0 = FVar18.Value;
          uStack_ac = uVar10;
          local_a8 = FVar19;
          FThreadStats::AddMessage(FVar19,CycleScopeStart);
          bVar6 = false;
          bVar7 = true;
        }
        cVar8 = (**(code **)(this->DoWorkEvent->_padding_ + 0x20))();
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar7) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar14 == (FThreadStats *)0x0) {
            pFVar15 = FThreadStatsPool::Get();
            pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
          }
          if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
            local_78.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
            local_78.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_90);
            local_78.StatData.Pad[4] = '\0';
            local_78.StatData.Pad[5] = '\0';
            local_78.StatData.Pad[6] = '\0';
            local_78.StatData.Pad[7] = '\0';
            local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
            local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
            local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
            local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar14,&local_78);
            piVar1 = &pFVar14->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar14,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar14,false,false);
            }
          }
        }
      } while (cVar8 == '\0');
    }
    pIVar17 = this->QueuedWork;
    this->QueuedWork = (IQueuedWork *)0x0;
    if (pIVar17 == (IQueuedWork *)0x0) {
      if ((this->TimeToDie == (TAtomic<bool>)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalQueuedWork || TimeToDie.Load(EMemoryOrder::Relaxed)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                             ,0x5b9,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return uVar10;
      }
    }
    else {
      do {
        (**(code **)pIVar17->_padding_)(pIVar17);
        pFVar3 = this->OwningThreadPool;
        local_b8 = this;
        if ((this == (FQueuedThread *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InQueuedThread != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                               ,0x572,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return uVar10;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)pFVar3->SynchQueue;
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        if (((pFVar3->TimeToDie != false) &&
            ((pFVar3->QueuedWork).NumQueuedWork != (TAtomic<int>)0x0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!QueuedWork.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                               ,0x578,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return uVar10;
        }
        pIVar17 = FThreadPoolPriorityQueue::Dequeue(&pFVar3->QueuedWork,(EQueuedWorkPriority *)0x0);
        if (pIVar17 == (IQueuedWork *)0x0) {
          pTVar20 = &pFVar3->QueuedThreads;
          pFVar4 = (pTVar20->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 <
               pFVar4 + (longlong)(pFVar3->QueuedThreads).ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return uVar10;
          }
          iVar11 = (pFVar3->QueuedThreads).ArrayNum;
          piVar1 = &(pFVar3->QueuedThreads).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar20->AllocatorInstance,piVar1);
          }
          (pFVar3->QueuedThreads).ArrayNum = iVar11 + 1;
          *(FQueuedThread **)((pTVar20->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_b8;
        }
        LeaveCriticalSection(lpCriticalSection);
      } while (pIVar17 != (IQueuedWork *)0x0);
    }
  } while( true );
}


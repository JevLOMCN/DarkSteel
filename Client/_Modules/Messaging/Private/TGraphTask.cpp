// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 2

// ExecuteTask @ 142d457f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FBusNotificationDispatchTask>::ExecuteTask
          (TGraphTask<FBusNotificationDispatchTask> *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  longlong lVar9;
  atomic<int> aVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FBusNotificationDispatchTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FBusNotificationDispatchTask =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
          )0x0;
    pFVar11 = ::FName::FName((FName *)&local_res8.s,"FBusNotificationDispatchTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FBusNotificationDispatchTask,*pFVar11,
               L"FBusNotificationDispatchTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_FBusNotificationDispatchTask;
  if (StatPtr_FBusNotificationDispatchTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
       )0x0) {
    pFVar11 = ::FName::FName(&local_res10,"FBusNotificationDispatchTask");
    FVar12 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_FBusNotificationDispatchTask,
                          *pFVar11,L"FBusNotificationDispatchTask","STATGROUP_TaskGraphTasks",
                          "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_142d4597e;
    }
  }
  bVar6 = false;
  FVar15 = local_38;
LAB_142d4597e:
  pTVar3 = *(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x10);
  pTVar16 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar3->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      if (aVar7 == (atomic<int>)0x0) goto LAB_142d459a6;
      LOCK();
      aVar10 = pTVar3->SharedReferenceCount;
      bVar17 = aVar7 == aVar10;
      if (bVar17) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar10 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar10;
    } while (!bVar17);
    plVar4 = *(longlong **)((this->TaskStorage).Pad + 8);
    pTVar16 = pTVar3;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,(this->TaskStorage).Pad + 0x18);
    }
  }
LAB_142d459a6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
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
  plVar4 = *(longlong **)((this->TaskStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (this != (TGraphTask<FBusNotificationDispatchTask> *)0x0) {
    LOCK();
    plVar4 = &this->_padding_;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 142d45bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FMessageDispatchTask>::ExecuteTask(TGraphTask<FMessageDispatchTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FMessageDispatchTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FMessageDispatchTask =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
          )0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"FMessageDispatchTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FMessageDispatchTask,*pFVar7,
               L"FMessageDispatchTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_FMessageDispatchTask;
  if (StatPtr_FMessageDispatchTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FMessageDispatchTask");
    FVar8 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FMessageDispatchTask,*pFVar7,
                         L"FMessageDispatchTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                         L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FMessageDispatchTask::DoTask
              ((FMessageDispatchTask *)&this->TaskStorage,*(Type *)((this->TaskStorage).Pad + 0x20),
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    FMessageDispatchTask::DoTask
              ((FMessageDispatchTask *)&this->TaskStorage,*(Type *)((this->TaskStorage).Pad + 0x20),
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
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
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
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
  }
  FMessageDispatchTask::~FMessageDispatchTask((FMessageDispatchTask *)&this->TaskStorage);
  if (this != (TGraphTask<FMessageDispatchTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


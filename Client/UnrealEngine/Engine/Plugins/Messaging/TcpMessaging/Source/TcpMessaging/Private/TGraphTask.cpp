// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 1

// ExecuteTask @ 14eaca480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FTcpSerializeMessageTask>::ExecuteTask(TGraphTask<FTcpSerializeMessageTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FTcpSerializeMessageTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FTcpSerializeMessageTask =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
          )0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"FTcpSerializeMessageTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FTcpSerializeMessageTask,*pFVar8,
               L"FTcpSerializeMessageTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_FTcpSerializeMessageTask;
  if (StatPtr_FTcpSerializeMessageTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FTcpSerializeMessageTask");
    FVar9 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FTcpSerializeMessageTask,*pFVar8,
                         L"FTcpSerializeMessageTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                         L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    FTcpSerializeMessageTask::DoTask
              ((FTcpSerializeMessageTask *)&this->TaskStorage,AnyNormalThreadNormalTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    FTcpSerializeMessageTask::DoTask
              ((FTcpSerializeMessageTask *)&this->TaskStorage,AnyNormalThreadNormalTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
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
  DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
            (*(TSharedPtr<FTcpMessageTransportConnection,1> **)((this->TaskStorage).Pad + 0x20),
             *(int *)((this->TaskStorage).Pad + 0x28));
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x20);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 8));
  if (this != (TGraphTask<FTcpSerializeMessageTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


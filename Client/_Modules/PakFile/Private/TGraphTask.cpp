// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ExecuteTask @ 142a6c880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall TGraphTask<FAsyncIOCPUWorkTask>::ExecuteTask(TGraphTask<FAsyncIOCPUWorkTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)_::_2_::FStat_FAsyncIOCPUWorkTask>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FAsyncIOCPUWorkTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FAsyncIOCPUWorkTask::GetStatId'::__l2::FStat_FAsyncIOCPUWorkTask>::
    FThreadSafeStaticStat<_FAsyncIOCPUWorkTask::GetStatId_::__l2::FStat_FAsyncIOCPUWorkTask>
              (&`public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'::__l2::
                StatPtr_FAsyncIOCPUWorkTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar11 = `public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'::__l2::
           StatPtr_FAsyncIOCPUWorkTask;
  if (`public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'::__l2::
      StatPtr_FAsyncIOCPUWorkTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)_::_2_::FStat_FAsyncIOCPUWorkTask>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res20,"FAsyncIOCPUWorkTask");
    FVar11 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)_::_2_::FStat_FAsyncIOCPUWorkTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)'
                           ::__l2::StatPtr_FAsyncIOCPUWorkTask,*pFVar10,L"FAsyncIOCPUWorkTask",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_142a6c9d1:
    bVar6 = false;
    FVar14 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_142a6c9d1;
    local_res18.s.LowPart = FVar13.Value;
    local_res18.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0))
  {
    if (((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar9)) goto code_r0x000142a6caad;
  }
  else if ((((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
           ((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                              ,0xb1,L""), bVar9)) {
code_r0x000142a6caad:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FAsyncIOCPUWorkTask_DoTask");
  if (CpuChannel->Enabled < 0) {
    FPakAsyncReadFileHandle::DoProcessing
              (*(FPakAsyncReadFileHandle **)(this->TaskStorage).Pad,
               *(FCachedAsyncBlock **)((this->TaskStorage).Pad + 8));
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3850,"FAsyncIOCPUWorkTask_DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
               ,0xf0a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3850);
    FPakAsyncReadFileHandle::DoProcessing
              (*(FPakAsyncReadFileHandle **)(this->TaskStorage).Pad,
               *(FCachedAsyncBlock **)((this->TaskStorage).Pad + 8));
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (this != (TGraphTask<FAsyncIOCPUWorkTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 142a6cc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
TGraphTask<FAsyncIOSignatureCheckTask>::ExecuteTask(TGraphTask<FAsyncIOSignatureCheckTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)_::_2_::FStat_FAsyncIOSignatureCheckTask>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FAsyncIOSignatureCheckTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FAsyncIOSignatureCheckTask::GetStatId'::__l2::FStat_FAsyncIOSignatureCheckTask>
    ::
    FThreadSafeStaticStat<_FAsyncIOSignatureCheckTask::GetStatId_::__l2::FStat_FAsyncIOSignatureCheckTask>
              (&`public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'
                ::__l2::StatPtr_FAsyncIOSignatureCheckTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar11 = `public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'::__l2
           ::StatPtr_FAsyncIOSignatureCheckTask;
  if (`public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'::__l2::
      StatPtr_FAsyncIOSignatureCheckTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)_::_2_::FStat_FAsyncIOSignatureCheckTask>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res20,"FAsyncIOSignatureCheckTask");
    FVar11 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)_::_2_::FStat_FAsyncIOSignatureCheckTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)'
                           ::__l2::StatPtr_FAsyncIOSignatureCheckTask,*pFVar10,
                          L"FAsyncIOSignatureCheckTask","STATGROUP_TaskGraphTasks",
                          "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_142a6cdc1:
    bVar6 = false;
    FVar14 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_142a6cdc1;
    local_res18.s.LowPart = FVar13.Value;
    local_res18.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0))
  {
    if (((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar9)) goto code_r0x000142a6ce9d;
  }
  else if ((((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
           ((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                              ,0xb1,L""), bVar9)) {
code_r0x000142a6ce9d:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PakPrecacherSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x33f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FPakPrecacher::DoSignatureCheck
            (PakPrecacherSingleton,(bool)(this->TaskStorage).Pad[0],
             *(IAsyncReadRequest **)((this->TaskStorage).Pad + 8),
             *(int *)((this->TaskStorage).Pad + 0x10));
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (this != (TGraphTask<FAsyncIOSignatureCheckTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


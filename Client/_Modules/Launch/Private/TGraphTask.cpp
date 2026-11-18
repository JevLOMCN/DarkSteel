// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// ExecuteTask @ 148da21a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FExecuteConcurrentWithSlateTickTask>::ExecuteTask
          (TGraphTask<FExecuteConcurrentWithSlateTickTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  uchar *puVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)_::_2_::FStat_FExecuteConcurrentWithSlateTickTask>
  FVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  uchar *puVar15;
  FNameEntryId FVar16;
  FName FVar17;
  uchar *puVar18;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FExecuteConcurrentWithSlateTickTask::GetStatId'::__l2::FStat_FExecuteConcurrentWithSlateTickTask>
    ::
    FThreadSafeStaticStat<_FExecuteConcurrentWithSlateTickTask::GetStatId_::__l2::FStat_FExecuteConcurrentWithSlateTickTask>
              (&`public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'
                ::__l2::StatPtr_FExecuteConcurrentWithSlateTickTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar12 = `public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'
           ::__l2::StatPtr_FExecuteConcurrentWithSlateTickTask;
  if (`public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'::
      __l2::StatPtr_FExecuteConcurrentWithSlateTickTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)_::_2_::FStat_FExecuteConcurrentWithSlateTickTask>
       )0x0) {
    pFVar11 = ::FName::FName(&local_res20,"FExecuteConcurrentWithSlateTickTask");
    FVar12 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)_::_2_::FStat_FExecuteConcurrentWithSlateTickTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FExecuteConcurrentWithSlateTickTask::GetStatId(void)'
                           ::__l2::StatPtr_FExecuteConcurrentWithSlateTickTask,*pFVar11,
                          L"FExecuteConcurrentWithSlateTickTask","STATGROUP_TaskGraphTasks",
                          "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar14 == 0)) {
LAB_148da22f5:
    bVar7 = false;
    FVar17 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_148da22f5;
    local_res18.s.LowPart = FVar16.Value;
    local_res18.s.HighPart = uVar14;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar7 = true;
  }
  iVar5 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_AsyncEndOfFrameGameTasks.ThreadPriority == HighThreadPriority) ||
      (iVar5 = ENamedThreads::bHasBackgroundThreads,
      CPrio_AsyncEndOfFrameGameTasks.ThreadPriority == BackgroundThreadPriority)) && (iVar5 == 0)) {
    if (((CPrio_AsyncEndOfFrameGameTasks.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xcd,L""), bVar10)) goto code_r0x000148da23d3;
  }
  else if ((((CPrio_AsyncEndOfFrameGameTasks.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_AsyncEndOfFrameGameTasks.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
           ((CPrio_AsyncEndOfFrameGameTasks.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                               ,0xb1,L""), bVar10)) {
code_r0x000148da23d3:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)(this->TaskStorage).Pad);
  pcVar3 = *(code **)(this->TaskStorage).Pad;
  puVar18 = (this->TaskStorage).Pad + 0x10;
  puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x28);
  puVar15 = puVar18;
  if (puVar4 != (uchar *)0x0) {
    puVar15 = puVar4;
  }
  uVar13 = (**(code **)(*(longlong *)puVar15 + 8))();
  (*pcVar3)(uVar13);
  (**(code **)(**(longlong **)((this->TaskStorage).Pad + 0x30) + 0x10))();
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
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
  if (*(longlong *)(this->TaskStorage).Pad != 0) {
    puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x28);
    if (puVar4 != (uchar *)0x0) {
      puVar18 = puVar4;
    }
    (**(code **)(*(longlong *)puVar18 + 0x10))(puVar18);
  }
  if (this != (TGraphTask<FExecuteConcurrentWithSlateTickTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// ExecuteTask @ 14ac965f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FPaintParticleTask>::ExecuteTask(TGraphTask<FPaintParticleTask> *this)

{
  int *piVar1;
  FName FVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
  FVar13;
  FEasyParticleState *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int iVar14;
  FNameEntryId FVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_58;
  
  if (this != (TGraphTask<FPaintParticleTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FPaintParticleTask::GetStatId'::__l2::FStat_FTickParticleTask>::
    FThreadSafeStaticStat<_FPaintParticleTask::GetStatId_::__l2::FStat_FTickParticleTask>
              (&`public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'::__l2::
                StatPtr_FTickParticleTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar13 = `public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'::__l2::
           StatPtr_FTickParticleTask;
  if (`public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'::__l2::
      StatPtr_FTickParticleTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
       )0x0) {
    pFVar12 = ::FName::FName(&local_res20,"FTickParticleTask");
    FVar13 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)'
                           ::__l2::StatPtr_FTickParticleTask,*pFVar12,L"FTickParticleTask",
                          "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                          L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar15 = FVar2.ComparisonIndex.Value;
  uVar16 = FVar2.Number;
  if ((FVar15.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    bVar7 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar15.Value;
      local_res18.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar7 = true;
      local_68 = FVar2;
    }
  }
  if (*(longlong *)((this->TaskStorage).Pad + 0x48) != 0) {
    iVar10 = *(int *)((this->TaskStorage).Pad + 0x50) * 500;
    for (iVar17 = iVar10 + 1000; iVar17 < iVar10 + 0x5dc; iVar17 = iVar17 + 1) {
      plVar3 = *(longlong **)((this->TaskStorage).Pad + 0x48);
      if ((-1 < iVar17) && (iVar17 < (int)plVar3[3] - *(int *)((longlong)plVar3 + 0x14))) {
        iVar14 = (int)plVar3[1];
        uVar16 = 0;
        if (0 < iVar14) {
          lVar18 = 0;
          iVar19 = iVar17;
          do {
            uVar11 = 0;
            if ((int)uVar16 < iVar14) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar4 = *(longlong **)(lVar18 + *plVar3);
            if (plVar4 != (longlong *)0x0) {
              if (iVar19 < (int)plVar4[1]) {
                if (iVar19 < 0) {
                  this_00 = (FEasyParticleState *)0x0;
                }
                else {
                  this_00 = (FEasyParticleState *)((longlong)iVar19 * 0x410 + *plVar4);
                }
                if (this_00 != (FEasyParticleState *)0x0) {
                  FEasyParticleState::CaculatePaintParams
                            (this_00,*(FPaintArgs **)(this->TaskStorage).Pad,
                             (FGeometry *)((this->TaskStorage).Pad + 8),
                             *(FWidgetStyle **)((this->TaskStorage).Pad + 0x40));
                }
                break;
              }
              iVar19 = iVar19 - (int)plVar4[1];
            }
            iVar14 = (int)plVar3[1];
            uVar16 = uVar16 + 1;
            lVar18 = lVar18 + 8;
          } while ((int)uVar16 < iVar14);
        }
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (local_68 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Index = local_68.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_58);
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
  if (this != (TGraphTask<FPaintParticleTask> *)0x0) {
    LOCK();
    plVar3 = &this->_padding_;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14ac96a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FTickParticleTask>::ExecuteTask(TGraphTask<FTickParticleTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FTickParticleTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTickParticleTask::GetStatId'::__l2::FStat_FTickParticleTask>::
      FThreadSafeStaticStat<_FTickParticleTask::GetStatId_::__l2::FStat_FTickParticleTask>
                (&`public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'::__l2::
                  StatPtr_FTickParticleTask);
      _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar8 = `public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'::__l2::
          StatPtr_FTickParticleTask;
  if (`public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'::__l2::
      StatPtr_FTickParticleTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FTickParticleTask");
    FVar8 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)'
                          ::__l2::StatPtr_FTickParticleTask,*pFVar7,L"FTickParticleTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FTickParticleTask::DoTask
              ((FTickParticleTask *)&this->TaskStorage,AnyHiPriThreadHiPriTask,
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
    FTickParticleTask::DoTask
              ((FTickParticleTask *)&this->TaskStorage,AnyHiPriThreadHiPriTask,
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
        local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
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
  }
  if (this != (TGraphTask<FTickParticleTask> *)0x0) {
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


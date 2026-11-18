// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 38

// Allocate @ 145c4f010

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FGPUDefragAllocator::Allocate
          (FGPUDefragAllocator *this,long64 param_1,int param_2,TStatId param_3,bool param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  double dVar2;
  uint uVar3;
  FMemoryChunk *pFVar4;
  bool bVar5;
  void *pvVar6;
  FOutputDeviceRedirector *pFVar7;
  FMemoryChunk *pFVar8;
  FLowLevelMemTracker *this_00;
  FMemoryChunk *pFVar9;
  FMemoryChunk *pFVar10;
  FMemoryChunk *pFVar11;
  FMemoryChunk *pFVar12;
  FMemoryChunk *pFVar13;
  FMemoryChunk *pFVar14;
  LARGE_INTEGER local_res8;
  long64 local_res10;
  uint local_res18;
  LARGE_INTEGER local_58 [4];
  
  local_res10 = param_1;
  local_res18 = param_2;
  QueryPerformanceCounter(&local_res8);
  lpCriticalSection = &this->SynchronizationObject;
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->FirstChunk == (FMemoryChunk *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstChunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x8e,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar1)();
    return pvVar6;
  }
  if ((this->AllocationAlignment < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Alignment <= AllocationAlignment",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x8f,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar1)();
    return pvVar6;
  }
  pFVar8 = this->FirstFreeChunk;
  pFVar11 = (FMemoryChunk *)0x0;
  pFVar10 = (FMemoryChunk *)
            (param_1 + -1 + (longlong)this->AllocationAlignment &
            -(longlong)this->AllocationAlignment);
  pFVar13 = (FMemoryChunk *)0x7fffffffffffffff;
  pFVar12 = pFVar11;
  pFVar14 = pFVar13;
  if (pFVar8 == (FMemoryChunk *)0x0) goto LAB_145c4f184;
LAB_145c4f102:
  do {
    if (pFVar8->bIsAvailable == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentChunk->bIsAvailable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x9e,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar1)();
        return pvVar6;
      }
      pFVar9 = pFVar11;
      if (pFVar8->bIsAvailable != false) goto LAB_145c4f134;
    }
    else {
LAB_145c4f134:
      pFVar9 = (FMemoryChunk *)pFVar8->Size;
      if (pFVar8->BestFitAllocator->CompletedSyncIndex < (ulonglong)pFVar8->SyncIndex) {
        pFVar9 = (FMemoryChunk *)((longlong)pFVar8->Size - pFVar8->SyncSize);
      }
    }
    pFVar13 = pFVar14;
    if ((longlong)pFVar9 < (longlong)pFVar10) {
LAB_145c4f172:
      pFVar8 = pFVar8->NextFreeChunk;
      pFVar14 = pFVar13;
      if (pFVar8 != (FMemoryChunk *)0x0) goto LAB_145c4f102;
    }
    else {
      pFVar13 = pFVar9;
      pFVar4 = pFVar8;
      if ((longlong)pFVar14 <= (longlong)pFVar9) {
        pFVar13 = pFVar14;
        pFVar4 = pFVar12;
      }
      pFVar12 = pFVar4;
      if (pFVar9 != pFVar10) goto LAB_145c4f172;
    }
    if (pFVar12 != (FMemoryChunk *)0x0) {
      pFVar8 = AllocateChunk(this,pFVar12,(long64)pFVar10,false,true);
      uVar3 = local_res18;
      pFVar8->OrigSize = local_res10;
      LOCK();
      this->PaddingWasteSize = this->PaddingWasteSize + (pFVar8->Size - local_res10);
      UNLOCK();
      (pFVar8->Stat).StatIdPtr = param_3.StatIdPtr;
      if ((((ulonglong)pFVar8->Base & (ulonglong)(local_res18 - 1)) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsAligned(AllocatedChunk->Base, Alignment)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                             ,0xde,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar1)();
        return pvVar6;
      }
      MemoryTrace_Alloc((ulong64)pFVar8->Base,(ulong64)pFVar10,uVar3,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (this_00,Default,pFVar8->Base,(ulong64)pFVar10,Untagged,None,true);
      }
      pFVar11 = (FMemoryChunk *)pFVar8->Base;
      goto LAB_145c4f1ec;
    }
LAB_145c4f184:
    if ((0 < this->NumRelocationsInProgress) && (!param_4)) {
      FinishAllRelocations(this);
      pFVar8 = this->FirstFreeChunk;
    }
    pFVar14 = pFVar13;
    if (pFVar8 == (FMemoryChunk *)0x0) {
      if (!param_4) {
        pFVar7 = GetGlobalLogSingleton();
        DumpAllocs(this,(FOutputDevice *)pFVar7);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
LAB_145c4f1ec:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      QueryPerformanceCounter(local_58);
      this->TimeSpentInAllocator =
           ((double)local_58[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2) +
           this->TimeSpentInAllocator;
      return pFVar11;
    }
  } while( true );
}

// AllocateChunk @ 145c4f3c0

FMemoryChunk * __thiscall
FGPUDefragAllocator::AllocateChunk
          (FGPUDefragAllocator *this,FMemoryChunk *param_1,long64 param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FMemoryChunk *pFVar3;
  longlong lVar4;
  uchar *local_res8;
  FMemoryChunk *local_res10;
  uchar **local_28;
  FMemoryChunk **local_20;
  
  local_res10 = param_1;
  if ((param_1 == (FMemoryChunk *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeChunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0xf1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMemoryChunk *)(*pcVar1)();
    return pFVar3;
  }
  if (local_res10->bIsAvailable == false) {
    lVar4 = 0;
  }
  else {
    lVar4 = local_res10->Size;
    if (local_res10->BestFitAllocator->CompletedSyncIndex < (ulonglong)local_res10->SyncIndex) {
      lVar4 = lVar4 - local_res10->SyncSize;
    }
  }
  if ((lVar4 < param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeChunk->GetAvailableSize() >= AllocationSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0xf2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMemoryChunk *)(*pcVar1)();
    return pFVar3;
  }
  if ((local_res10->LockCount != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FreeChunk->IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0xf3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMemoryChunk *)(*pcVar1)();
    return pFVar3;
  }
  if ((((!param_3) &&
       (local_res10->BestFitAllocator->CompletedSyncIndex < (ulonglong)local_res10->SyncIndex)) &&
      (lVar4 = local_res10->SyncSize, 0 < lVar4)) && (lVar4 < local_res10->Size)) {
    Split(this,local_res10,lVar4);
    local_res10 = local_res10->NextChunk;
  }
  FMemoryChunk::UnlinkFree(local_res10);
  if (param_2 < local_res10->Size) {
    Split(this,local_res10,param_2);
  }
  if ((this->MemoryBase + this->MemorySize < local_res10->Base + local_res10->Size) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(FreeChunk->Base + FreeChunk->Size) <= (MemoryBase + MemorySize)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x11a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMemoryChunk *)(*pcVar1)();
    return pFVar3;
  }
  if ((local_res10->Base < this->MemoryBase) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeChunk->Base >= MemoryBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x11b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMemoryChunk *)(*pcVar1)();
    return pFVar3;
  }
  LOCK();
  this->AllocatedMemorySize = this->AllocatedMemorySize + local_res10->Size;
  UNLOCK();
  LOCK();
  this->AvailableMemorySize = this->AvailableMemorySize - local_res10->Size;
  UNLOCK();
  local_res8 = local_res10->Base;
  local_28 = &local_res8;
  local_20 = &local_res10;
  TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&>_>
            ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
              *)&this->PointerToChunkMap,
             (TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&> *)
             &stack0x00000020,(bool *)&local_28);
  return local_res10;
}

// Benchmark @ 145c507c0

void __thiscall
FGPUDefragAllocator::Benchmark
          (FGPUDefragAllocator *this,int param_1,int param_2,float param_3,float param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  return;
}

// BlockOnFence @ 145c507d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUDefragAllocator::BlockOnFence(FGPUDefragAllocator *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_void___cdecl_FGPUDefragAllocator::BlockOnFence(void)_::_2_::FStat_STAT_DEFRAG_BlockOnFence>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_DEFRAG_BlockOnFence ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FGPUDefragAllocator::BlockOnFence(void)_::_2_::FStat_STAT_DEFRAG_BlockOnFence>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_DEFRAG_BlockOnFence");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DEFRAG_BlockOnFence,*pFVar5,
                   L"STAT_DEFRAG_BlockOnFence","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_DEFRAG_BlockOnFence;
  if (StatPtr_STAT_DEFRAG_BlockOnFence ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FGPUDefragAllocator::BlockOnFence(void)_::_2_::FStat_STAT_DEFRAG_BlockOnFence>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_DEFRAG_BlockOnFence");
    FVar6 = (FThreadSafeStaticStat<_protected:_void___cdecl_FGPUDefragAllocator::BlockOnFence(void)_::_2_::FStat_STAT_DEFRAG_BlockOnFence>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DEFRAG_BlockOnFence,*pFVar5,
                         L"STAT_DEFRAG_BlockOnFence","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                   ,0x4bc);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_145c50955;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_145c50955:
  if (this->CompletedSyncIndex < this->CurrentSyncIndex - 1) {
    QueryPerformanceCounter(&local_res10);
    if (this->bBenchmarkMode == false) {
      (**(code **)(this->_padding_ + 0x58))(this,this->PlatformSyncFence);
    }
    this->CompletedSyncIndex = this->CurrentSyncIndex - 1;
    QueryPerformanceCounter(&local_res8);
    this->BlockedCycles = this->BlockedCycles + (local_res8.s.LowPart - local_res10._0_4_);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
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
  return;
}

// BlockOnSyncIndex @ 145c50b50

void __thiscall FGPUDefragAllocator::BlockOnSyncIndex(FGPUDefragAllocator *this,uint param_1)

{
  ulong64 uVar1;
  
  if (this->CompletedSyncIndex < (ulonglong)param_1) {
    FinishAllRelocations(this);
    if (this->CompletedSyncIndex < (ulonglong)param_1) {
      if (this->bBenchmarkMode == false) {
        uVar1 = (**(code **)(this->_padding_ + 0x50))(this);
        this->PlatformSyncFence = uVar1;
      }
      this->CurrentSyncIndex = this->CurrentSyncIndex + 1;
      BlockOnFence(this);
      FinishAllRelocations(this);
    }
  }
  return;
}

// CheckForErrors @ 145c52ef0

void __thiscall FGPUDefragAllocator::CheckForErrors(FGPUDefragAllocator *this,bool param_1)

{
  long64 *plVar1;
  bool *pbVar2;
  FMemoryChunk *pFVar3;
  FMemoryChunk *pFVar4;
  code *pcVar5;
  FMemoryChunk **ppFVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  
  pFVar3 = this->FirstFreeChunk;
  if (pFVar3 != (FMemoryChunk *)0x0) {
    if (param_1) {
      lVar10 = pFVar3->Size;
      ppFVar6 = &pFVar3->NextFreeChunk;
      pFVar4 = pFVar3->NextFreeChunk;
      while (pFVar4 != (FMemoryChunk *)0x0) {
        if ((pFVar3->bIsAvailable == false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Chunk->bIsAvailable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                               ,0x36e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((*ppFVar6)->Base <= pFVar3->Base) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Chunk->Base < Chunk->NextFreeChunk->Base",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                               ,0x36f,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pFVar3->NextChunk->bIsAvailable != false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Chunk->NextChunk->bIsAvailable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                               ,0x370,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((pFVar3->PreviousChunk != (FMemoryChunk *)0x0) &&
            (pFVar3->PreviousChunk->bIsAvailable != false)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Chunk->PreviousChunk == nullptr || !Chunk->PreviousChunk->bIsAvailable"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                               ,0x371,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *ppFVar6;
        ppFVar6 = &pFVar3->NextFreeChunk;
        lVar10 = lVar10 + pFVar3->Size;
        pFVar4 = *ppFVar6;
      }
      if ((lVar10 != this->AvailableMemorySize) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TotalFreeMem == AvailableMemorySize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                             ,0x375,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = this->FirstChunk;
    lVar10 = 0;
    lVar7 = 0;
    while (pFVar3 != (FMemoryChunk *)0x0) {
      plVar1 = &pFVar3->Size;
      pbVar2 = &pFVar3->bIsAvailable;
      pFVar3 = pFVar3->NextChunk;
      bVar8 = *pbVar2 == false;
      lVar9 = lVar10 + *plVar1;
      if (bVar8) {
        lVar9 = lVar10;
      }
      lVar10 = lVar9;
      if (bVar8) {
        lVar7 = *plVar1 + lVar7;
      }
    }
    if ((lVar7 != this->AllocatedMemorySize) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalUsedMem == AllocatedMemorySize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                           ,0x387,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((lVar10 != this->AvailableMemorySize) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalFreeMem == AvailableMemorySize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                           ,0x388,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// Coalesce @ 145c541c0

void __thiscall FGPUDefragAllocator::Coalesce(FGPUDefragAllocator *this,FMemoryChunk *param_1)

{
  FMemoryChunk *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  uint uVar7;
  long64 lVar8;
  long64 lVar9;
  
  if ((param_1 == (FMemoryChunk *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreedChunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x734,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->LockCount != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FreedChunk->IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x735,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_1->PreviousChunk;
  lVar8 = 0;
  lVar6 = lVar8;
  lVar9 = lVar8;
  uVar7 = 0;
  if ((pFVar1 != (FMemoryChunk *)0x0) && (lVar6 = 0, lVar9 = 0, pFVar1->bIsAvailable != false)) {
    if ((pFVar1->LockCount != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LeftChunk->IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                           ,0x740,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = pFVar1->SyncIndex;
    lVar9 = pFVar1->Size;
    uVar2 = pFVar1->BestFitAllocator->CompletedSyncIndex;
    lVar6 = lVar8;
    if (uVar2 < uVar7) {
      lVar6 = pFVar1->SyncSize;
    }
    FMemoryChunk::_scalar_deleting_destructor_(pFVar1,1);
    if (uVar7 <= uVar2) {
      uVar7 = 0;
    }
  }
  uVar5 = param_1->SyncIndex;
  if (param_1->BestFitAllocator->CompletedSyncIndex < (ulonglong)uVar5) {
    if (uVar5 < uVar7) {
      uVar5 = uVar7;
    }
    lVar6 = param_1->SyncSize + lVar9;
    uVar7 = uVar5;
  }
  pFVar1 = param_1->NextChunk;
  if ((pFVar1 != (FMemoryChunk *)0x0) && (lVar8 = 0, pFVar1->bIsAvailable != false)) {
    if ((pFVar1->LockCount != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!RightChunk->IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                           ,0x759,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = pFVar1->SyncIndex;
    lVar8 = pFVar1->Size;
    if (pFVar1->BestFitAllocator->CompletedSyncIndex < (ulonglong)uVar5) {
      if (uVar5 < uVar7) {
        uVar5 = uVar7;
      }
      lVar6 = pFVar1->SyncSize + param_1->Size + lVar9;
      uVar7 = uVar5;
    }
    FMemoryChunk::_scalar_deleting_destructor_(pFVar1,1);
  }
  param_1->Base = param_1->Base + -lVar9;
  param_1->Size = param_1->Size + lVar9 + lVar8;
  param_1->SyncIndex = uVar7;
  param_1->SyncSize = lVar6;
  return;
}

// DefragmentMemory @ 145c54ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUDefragAllocator::DefragmentMemory(FGPUDefragAllocator *this,FRelocationStats *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  long64 *plVar1;
  FMemoryChunk *pFVar2;
  longlong lVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  (**(code **)(this->_padding_ + 0x40))(this,param_1,1);
  QueryPerformanceCounter(&local_res8);
  if (0 < param_1->NumRelocations) {
    BlockOnFence(this);
  }
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_res8);
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = this->FirstFreeChunk;
  lVar4 = 0;
  while (lVar3 = lVar4, pFVar2 != (FMemoryChunk *)0x0) {
    plVar1 = &pFVar2->Size;
    pFVar2 = pFVar2->NextFreeChunk;
    lVar4 = *plVar1;
    if (*plVar1 < lVar3) {
      lVar4 = lVar3;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (2 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// DumpAllocs @ 145c557d0

void __thiscall FGPUDefragAllocator::DumpAllocs(FGPUDefragAllocator *this,FOutputDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  FMemoryChunk *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForAnyElementType local_48;
  int local_40 [2];
  
  uVar12 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  uVar5 = this->MemorySize / (ulonglong)(longlong)this->AllocationAlignment;
  local_40[0] = 0;
  local_40[1] = 0;
  iVar7 = (int)((longlong)uVar5 / (longlong)(int)SQRT((float)(longlong)uVar5)) + 1;
  iVar7 = iVar7 * iVar7;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar7,&local_48,local_40,local_40 + 1);
  memset(local_48.Data + (longlong)iVar3 * 4,0,(longlong)iVar7 << 2);
  pFVar9 = this->FirstChunk;
  uVar10 = 0;
  uVar5 = uVar12;
  if (pFVar9 != (FMemoryChunk *)0x0) {
    uVar11 = (ulonglong)(uint)this->AllocationAlignment;
    uVar13 = uVar12;
    do {
      lVar6 = pFVar9->Size;
      if (pFVar9->bIsAvailable == false) {
        uVar13 = uVar13 + 1;
        uVar5 = uVar5 + lVar6;
        uVar8 = 0xffc00000;
        if ((uVar13 & 1) == 0) {
          uVar8 = 0xffff0000;
        }
      }
      else {
        uVar12 = uVar12 + lVar6;
        uVar8 = 0xff00ff00;
      }
      iVar3 = 0;
      if (0 < lVar6 / (longlong)(int)uVar11) {
        do {
          uVar4 = 0;
          if ((int)uVar10 < local_40[0]) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = iVar3 + 1;
          lVar6 = (longlong)(int)uVar10;
          uVar10 = uVar10 + 1;
          *(undefined4 *)(local_48.Data + lVar6 * 4) = uVar8;
          uVar11 = (ulonglong)this->AllocationAlignment;
        } while ((longlong)iVar3 < pFVar9->Size / (longlong)uVar11);
      }
      pFVar9 = pFVar9->NextChunk;
    } while (pFVar9 != (FMemoryChunk *)0x0);
  }
  if ((uVar5 != this->AllocatedMemorySize) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedSize == AllocatedMemorySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x665,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((uVar12 != this->AvailableMemorySize) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeSize == AvailableMemorySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x666,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOutputDevice::LogfImpl
            (param_1,
             L"BestFitAllocator: Allocated %i KByte in %i chunks, leaving %i KByte in %i chunks.");
  FOutputDevice::LogfImpl(param_1,L"BestFitAllocator: %5.2f ms in allocator");
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// FindAdjacent @ 145c57770

FMemoryChunk * __thiscall
FGPUDefragAllocator::FindAdjacent(FGPUDefragAllocator *this,FMemoryChunk *param_1,bool param_2)

{
  longlong lVar1;
  FMemoryChunk *pFVar2;
  char cVar3;
  longlong lVar4;
  FMemoryChunk *pFVar5;
  
  if ((param_1 != (FMemoryChunk *)0x0) && (param_2)) {
    pFVar5 = param_1->PreviousChunk;
    lVar1 = param_1->Size;
    pFVar2 = param_1->NextChunk;
    lVar4 = lVar1;
    if ((pFVar5 != (FMemoryChunk *)0x0) && (pFVar5->bIsAvailable != false)) {
      lVar4 = pFVar5->Size + lVar1;
    }
    if ((pFVar2 != (FMemoryChunk *)0x0) && (pFVar2->bIsAvailable != false)) {
      lVar4 = lVar4 + pFVar2->Size;
    }
    if ((lVar1 <= lVar4) && (param_1->LockCount == 0)) {
      if (this->bBenchmarkMode == false) {
        cVar3 = (**(code **)(this->_padding_ + 0x60))(this,param_1->Base,param_1->UserPayload);
        pFVar5 = (FMemoryChunk *)0x0;
        if (cVar3 != '\0') {
          pFVar5 = param_1;
        }
        return pFVar5;
      }
      return param_1;
    }
  }
  return (FMemoryChunk *)0x0;
}

// FindAdjacentToHole @ 145c57800

FMemoryChunk * __thiscall
FGPUDefragAllocator::FindAdjacentToHole(FGPUDefragAllocator *this,FMemoryChunk *param_1)

{
  FMemoryChunk *pFVar1;
  char cVar2;
  FMemoryChunk *pFVar3;
  
  pFVar3 = this->LastChunk;
  if (pFVar3 != (FMemoryChunk *)0x0) {
    do {
      if (pFVar3->bIsAvailable != false) break;
      pFVar3 = pFVar3->PreviousChunk;
    } while (pFVar3 != (FMemoryChunk *)0x0);
    for (; (pFVar3 != (FMemoryChunk *)0x0 && (param_1->Base < pFVar3->Base));
        pFVar3 = pFVar3->PreviousFreeChunk) {
      pFVar1 = pFVar3->NextChunk;
      if ((pFVar1 != (FMemoryChunk *)0x0) &&
         ((((pFVar1->bIsAvailable == false && (pFVar1->Size < param_1->Size)) &&
           (pFVar1->LockCount == 0)) &&
          ((this->bBenchmarkMode != false ||
           (cVar2 = (**(code **)(this->_padding_ + 0x60))(this,pFVar1->Base,pFVar1->UserPayload),
           cVar2 != '\0')))))) {
        return pFVar3->NextChunk;
      }
      pFVar1 = pFVar3->PreviousChunk;
      if ((((pFVar1 != (FMemoryChunk *)0x0) && (pFVar1->bIsAvailable == false)) &&
          ((pFVar1->Size < param_1->Size && (pFVar1->LockCount == 0)))) &&
         ((this->bBenchmarkMode != false ||
          (cVar2 = (**(code **)(this->_padding_ + 0x60))(this,pFVar1->Base,pFVar1->UserPayload),
          cVar2 != '\0')))) {
        return pFVar3->PreviousChunk;
      }
    }
  }
  return (FMemoryChunk *)0x0;
}

// FindAny @ 145c57b00

FMemoryChunk * __thiscall
FGPUDefragAllocator::FindAny(FGPUDefragAllocator *this,FMemoryChunk *param_1)

{
  FMemoryChunk *pFVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FMemoryChunk *pFVar6;
  longlong lVar7;
  
  pFVar1 = this->LastChunk;
  pFVar6 = (FMemoryChunk *)0x0;
  lVar5 = 0x7fffffffffffffff;
  do {
    if ((pFVar1 == (FMemoryChunk *)0x0) || (pFVar1->Base <= param_1->Base)) {
      return pFVar6;
    }
    if ((pFVar1->bIsAvailable == false) &&
       ((((lVar7 = param_1->Size - pFVar1->Size, -1 < lVar7 && (lVar7 < lVar5)) &&
         (pFVar1->LockCount == 0)) &&
        ((this->bBenchmarkMode != false ||
         (cVar2 = (**(code **)(this->_padding_ + 0x60))(this,pFVar1->Base,pFVar1->UserPayload),
         cVar2 != '\0')))))) {
      lVar3 = (longlong)param_1->Base - (longlong)pFVar1->Base;
      lVar4 = -lVar3;
      if (lVar4 < 0) {
        lVar4 = lVar3;
      }
      if (((GGPUDefragAllowOverlappedMoves != 0) || (pFVar1->Size <= lVar4)) &&
         (lVar5 = lVar7, pFVar6 = pFVar1, lVar7 == 0)) {
        return pFVar1;
      }
    }
    pFVar1 = pFVar1->PreviousChunk;
  } while( true );
}

// FinishAllRelocations @ 145c57d80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGPUDefragAllocator::FinishAllRelocations(FGPUDefragAllocator *this)

{
  int *piVar1;
  int iVar2;
  TDoubleLinkedListNode *pTVar3;
  FMemoryChunk *pFVar4;
  TDoubleLinkedListNode *pTVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_bool___cdecl_FGPUDefragAllocator::FinishAllRelocations(void)_::_2_::FStat_STAT_DEFRAG_FinishRelocations>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar14.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_DEFRAG_FinishRelocations ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FGPUDefragAllocator::FinishAllRelocations(void)_::_2_::FStat_STAT_DEFRAG_FinishRelocations>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DEFRAG_FinishRelocations");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DEFRAG_FinishRelocations,*pFVar9,
                 L"STAT_DEFRAG_FinishRelocations","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_DEFRAG_FinishRelocations;
  if (StatPtr_STAT_DEFRAG_FinishRelocations ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FGPUDefragAllocator::FinishAllRelocations(void)_::_2_::FStat_STAT_DEFRAG_FinishRelocations>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_DEFRAG_FinishRelocations");
    FVar10 = (FThreadSafeStaticStat<_public:_bool___cdecl_FGPUDefragAllocator::FinishAllRelocations(void)_::_2_::FStat_STAT_DEFRAG_FinishRelocations>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DEFRAG_FinishRelocations,
                          *pFVar9,L"STAT_DEFRAG_FinishRelocations","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar6 = false;
  bVar8 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                   ,0x484);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      FVar14.Value = FVar12.Value;
      goto LAB_145c57f0f;
    }
  }
  bVar7 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_145c57f0f:
  iVar2 = this->NumRelocationsInProgress;
  if (0 < iVar2) {
    BlockOnFence(this);
  }
  for (pTVar3 = (this->PendingFreeChunks).HeadNode; pTVar3 != (TDoubleLinkedListNode *)0x0;
      pTVar3 = pTVar3->NextNode) {
    pFVar4 = pTVar3->Value;
    piVar1 = &pFVar4->LockCount;
    *piVar1 = *piVar1 + -1;
    FreeChunk(this,pFVar4);
  }
  pTVar3 = (this->PendingFreeChunks).HeadNode;
  while (pTVar3 != (TDoubleLinkedListNode *)0x0) {
    pTVar5 = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x18);
    (this->PendingFreeChunks).HeadNode = pTVar5;
    pTVar3 = pTVar5;
  }
  (this->PendingFreeChunks).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->PendingFreeChunks).HeadNode = (TDoubleLinkedListNode *)0x0;
  (**(code **)((this->PendingFreeChunks)._padding_ + 8))(&this->PendingFreeChunks,0);
  this->NumRelocationsInProgress = 0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  return 0 < iVar2;
}

// Free @ 145c58600

void __thiscall FGPUDefragAllocator::Free(FGPUDefragAllocator *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TDoubleLinkedListNode *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar5;
  TDoubleLinkedListNode *pTVar6;
  FMemoryChunk *pFVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  MemoryTrace_Free((ulong64)param_1,0,0);
  if (param_1 != (void *)0x0) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(this_00,Default,param_1,None,true);
  }
  QueryPerformanceCounter(&local_res8);
  lpCriticalSection = &this->SynchronizationObject;
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  GBestFitAllocatorFreePointer = param_1;
  pTVar5 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                   *)&this->PointerToChunkMap,param_1);
  if (pTVar5 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) {
    pFVar7 = (FMemoryChunk *)0x0;
  }
  else {
    pFVar7 = *(FMemoryChunk **)&pTVar5->field_0x8;
    if (pFVar7 != (FMemoryChunk *)0x0) goto LAB_145c586d1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("MatchingChunk",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                     ,0x175,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145c586d1:
  if ((pFVar7->Base != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MatchingChunk->Base == Pointer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x176,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar7->LockCount != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MatchingChunk->LockCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x177,
                         L"Chunk with base address: 0x%p is being freed with %i outstanding locks.  This is a data corruption hazard."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  this->PaddingWasteSize = this->PaddingWasteSize + (pFVar7->OrigSize - pFVar7->Size);
  UNLOCK();
  if (pFVar7->BestFitAllocator->CompletedSyncIndex < (ulonglong)pFVar7->SyncIndex) {
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TDoubleLinkedListNode *)0x0) {
      pTVar6->Value = pFVar7;
      pTVar6->NextNode = (TDoubleLinkedListNode *)0x0;
      pTVar6->PrevNode = (TDoubleLinkedListNode *)0x0;
      pTVar1 = (this->PendingFreeChunks).TailNode;
      if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
        (this->PendingFreeChunks).HeadNode = pTVar6;
      }
      else {
        pTVar1->NextNode = pTVar6;
        pTVar6->PrevNode = (this->PendingFreeChunks).TailNode;
      }
      (this->PendingFreeChunks).TailNode = pTVar6;
      (**(code **)((this->PendingFreeChunks)._padding_ + 8))
                (&this->PendingFreeChunks,(this->PendingFreeChunks).ListSize + 1);
    }
  }
  else {
    FreeChunk(this,pFVar7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_res10);
  this->TimeSpentInAllocator =
       ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3) +
       this->TimeSpentInAllocator;
  return;
}

// FreeChunk @ 145c58810

void __thiscall FGPUDefragAllocator::FreeChunk(FGPUDefragAllocator *this,FMemoryChunk *param_1)

{
  uint uVar1;
  uchar *local_res8;
  
  local_res8 = param_1->Base;
  if (*(int *)&(this->PointerToChunkMap).field_0x8 != *(int *)&(this->PointerToChunkMap).field_0x34)
  {
    uVar1 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<void_const_*>
              ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                *)&this->PointerToChunkMap,uVar1 >> 0x10 ^ uVar1,&local_res8);
  }
  (param_1->Stat).StatIdPtr = &TStatId::TStatId_NAME_None;
  LOCK();
  this->AllocatedMemorySize = this->AllocatedMemorySize - param_1->Size;
  UNLOCK();
  LOCK();
  this->AvailableMemorySize = this->AvailableMemorySize + param_1->Size;
  UNLOCK();
  FMemoryChunk::LinkFree(param_1,(FMemoryChunk *)0x0);
  Coalesce(this,param_1);
  return;
}

// FullDefragmentation @ 145c59830

void __thiscall
FGPUDefragAllocator::FullDefragmentation(FGPUDefragAllocator *this,FRelocationStats *param_1)

{
  FMemoryChunk *pFVar1;
  longlong lVar2;
  FMemoryChunk *pFVar3;
  char cVar4;
  FMemoryChunk *pFVar5;
  longlong lVar6;
  FMemoryChunk *pFVar7;
  
  pFVar7 = this->FirstFreeChunk;
  do {
    while( true ) {
      if (pFVar7 == (FMemoryChunk *)0x0) {
        return;
      }
      pFVar5 = FindAdjacentToHole(this,pFVar7);
      if ((pFVar5 == (FMemoryChunk *)0x0) &&
         (pFVar5 = FindAny(this,pFVar7), pFVar5 == (FMemoryChunk *)0x0)) break;
LAB_145c598f7:
      pFVar7 = RelocateIntoFreeChunk(this,param_1,pFVar7,pFVar5);
    }
    pFVar5 = pFVar7->NextChunk;
    if (pFVar5 != (FMemoryChunk *)0x0) {
      pFVar1 = pFVar5->PreviousChunk;
      lVar2 = pFVar5->Size;
      pFVar3 = pFVar5->NextChunk;
      lVar6 = lVar2;
      if ((pFVar1 != (FMemoryChunk *)0x0) && (pFVar1->bIsAvailable != false)) {
        lVar6 = pFVar1->Size + lVar2;
      }
      if ((pFVar3 != (FMemoryChunk *)0x0) && (pFVar3->bIsAvailable != false)) {
        lVar6 = lVar6 + pFVar3->Size;
      }
      if (((lVar2 <= lVar6) && (pFVar5->LockCount == 0)) &&
         ((this->bBenchmarkMode != false ||
          (cVar4 = (**(code **)(this->_padding_ + 0x60))(this,pFVar5->Base,pFVar5->UserPayload),
          cVar4 != '\0')))) {
        param_1->NumBytesDownShifted = param_1->NumBytesDownShifted + pFVar5->Size;
        goto LAB_145c598f7;
      }
    }
    pFVar7 = pFVar7->NextFreeChunk;
  } while( true );
}

// GetAllocatedSize @ 145c5a8d0

long64 __thiscall FGPUDefragAllocator::GetAllocatedSize(FGPUDefragAllocator *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar1;
  long64 lVar2;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                     *)&this->PointerToChunkMap,param_1);
    if ((pTVar1 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) ||
       (*(longlong *)&pTVar1->field_0x8 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long64 *)(*(longlong *)&pTVar1->field_0x8 + 8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetChunkType @ 145c5ab50

EMemoryElementType __thiscall
FGPUDefragAllocator::GetChunkType(FGPUDefragAllocator *this,FMemoryChunk *param_1)

{
  char cVar1;
  
  if (param_1 == (FMemoryChunk *)0x0) {
    return MET_Max;
  }
  if (param_1->BestFitAllocator->CompletedSyncIndex < (ulonglong)param_1->SyncIndex) {
    return MET_Relocating;
  }
  if (param_1->bIsAvailable != false) {
    return MET_Free;
  }
  if (param_1->LockCount != 0) {
    return MET_Locked;
  }
  if ((this->bBenchmarkMode == false) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x60))(this,param_1->Base,param_1->UserPayload),
     cVar1 == '\0')) {
    return MET_Locked;
  }
  return MET_Allocated;
}

// GetLargestAvailableAllocation @ 145c5adc0

int __thiscall
FGPUDefragAllocator::GetLargestAvailableAllocation(FGPUDefragAllocator *this,int *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  long64 *plVar1;
  FMemoryChunk *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = this->FirstFreeChunk;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = uVar6;
  while (uVar3 = uVar4, pFVar2 != (FMemoryChunk *)0x0) {
    plVar1 = &pFVar2->Size;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    pFVar2 = pFVar2->NextFreeChunk;
    uVar4 = *plVar1;
    if (*plVar1 < (longlong)uVar3) {
      uVar4 = uVar3;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = uVar5;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (int)uVar3;
}

// GetMemoryLayout @ 145c5ae50

void __thiscall
FGPUDefragAllocator::GetMemoryLayout
          (FGPUDefragAllocator *this,
          TArray<FGPUDefragAllocator::FMemoryLayoutElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FMemoryChunk *pFVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = &param_1->ArrayMax;
  pFVar3 = this->FirstChunk;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0x200) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0x200,&param_1->AllocatorInstance,0,piVar1);
  }
  for (; pFVar3 != (FMemoryChunk *)0x0; pFVar3 = pFVar3->NextChunk) {
    if (pFVar3->BestFitAllocator->CompletedSyncIndex < (ulonglong)pFVar3->SyncIndex) {
      uVar6 = 3;
    }
    else if (pFVar3->bIsAvailable == false) {
      if ((pFVar3->LockCount == 0) &&
         ((this->bBenchmarkMode != false ||
          (cVar4 = (**(code **)(this->_padding_ + 0x60))(this,pFVar3->Base,pFVar3->UserPayload),
          cVar4 != '\0')))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar5 + 1;
    pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 8;
    *(int *)pFVar2 = (int)pFVar3->Size;
    *(undefined4 *)(pFVar2 + 4) = uVar6;
  }
  return;
}

// GetTextureMemoryVisualizeData @ 145c5c1c0

bool __thiscall
FGPUDefragAllocator::GetTextureMemoryVisualizeData
          (FGPUDefragAllocator *this,FColor *param_1,int param_2,int param_3,int param_4,int param_5
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FMemoryChunk *pFVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int local_b4;
  FMemoryChunk *local_b0;
  uint local_a0 [13];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  longlong local_58;
  FMemoryChunk *local_50;
  
  if (((param_4 + 3U & 0xfffffffc) != param_4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Align(Pitch, sizeof(FColor)) == Pitch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x698,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar11 = this->FirstChunk;
  iVar10 = 0;
  iVar26 = 0;
  local_a0[0] = 0xffdcdcdc;
  iVar12 = 0;
  local_a0[1] = 0xff323232;
  local_a0[2] = 0xffdc0000;
  local_a0[3] = 0xffdcdc00;
  local_a0[4] = 0xff00dc00;
  local_a0[5] = 0xff008c00;
  local_a0[6] = 0xffb4b4b4;
  local_a0[7] = 0xff323232;
  local_a0[8] = 0xffb40000;
  local_a0[9] = 0xffb4b400;
  local_a0[10] = 0xff00b400;
  local_a0[0xb] = 0xff003200;
  local_b4 = 0;
  local_b0 = (FMemoryChunk *)0x0;
  iVar7 = (int)((ulonglong)(longlong)param_4 >> 2);
  local_50 = pFVar11;
  if (pFVar11 != (FMemoryChunk *)0x0) {
    lVar23 = 0;
    do {
      local_50 = pFVar11;
      if (param_3 <= iVar12) break;
      if (pFVar11 == (FMemoryChunk *)0x0) {
        param_4 = 6;
        local_58 = 6;
      }
      else if (pFVar11->BestFitAllocator->CompletedSyncIndex < (ulonglong)pFVar11->SyncIndex) {
        param_4 = 3;
        local_58 = 3;
      }
      else if (pFVar11->bIsAvailable == false) {
        if ((pFVar11->LockCount == 0) &&
           ((this->bBenchmarkMode != false ||
            (cVar4 = (**(code **)(this->_padding_ + 0x60))(this,pFVar11->Base,pFVar11->UserPayload),
            cVar4 != '\0')))) {
          param_4 = 0;
          local_58 = 0;
        }
        else {
          param_4 = 2;
          local_58 = 2;
        }
      }
      else {
        param_4 = 1;
        local_58 = 1;
      }
      uVar14 = local_a0[lVar23];
      uVar20 = local_a0[lVar23 + 6];
      uVar15 = uVar14 >> 0x10;
      uVar17 = uVar14 >> 8;
      uVar21 = uVar20 >> 8;
      uVar24 = uVar20 >> 0x10;
      if (local_b4 == 3) {
        iVar8 = (int)local_b0->Size - (int)local_b0->SyncSize;
        iVar10 = iVar10 - iVar8;
        iVar5 = (iVar10 + -1) / param_5;
        iVar9 = 1;
        if (1 < iVar5) {
          iVar9 = iVar5;
        }
        if (0 < iVar10) {
          iVar19 = iVar12 * iVar7;
          local_64 = uVar14 & 0xff;
          local_60 = uVar21 & 0xff;
          iVar22 = 0;
          local_a0[0xc] = uVar24 & 0xff;
          iVar25 = 0;
          local_68 = uVar17 & 0xff;
          iVar5 = 0;
          local_6c = uVar15 & 0xff;
          iVar16 = local_60 * iVar9;
          iVar13 = (uVar20 & 0xff) * iVar9;
          iVar18 = local_a0[0xc] * iVar9;
          do {
            iVar6 = iVar19 + iVar26;
            iVar26 = iVar26 + 1;
            param_1[iVar6].field0_0x0._s_0.R = (uchar)((iVar18 + iVar5) / iVar9);
            param_1[iVar6].field0_0x0._s_0.G = (uchar)((iVar16 + iVar25) / iVar9);
            param_1[iVar6].field0_0x0._s_0.B = (uchar)((iVar13 + iVar22) / iVar9);
            param_1[iVar6].field0_0x0._s_0.A = 0xff;
            pFVar11 = local_50;
            if (param_2 <= iVar26) {
              iVar19 = iVar19 + iVar7;
              iVar26 = 0;
              iVar12 = iVar12 + 1;
              if (param_3 <= iVar12) break;
            }
            iVar18 = iVar18 - local_a0[0xc];
            iVar16 = iVar16 - local_60;
            iVar13 = iVar13 - (uVar20 & 0xff);
            iVar5 = iVar5 + local_6c;
            iVar25 = iVar25 + local_68;
            iVar22 = iVar22 + local_64;
            iVar10 = iVar10 - param_5;
          } while (0 < iVar10);
        }
        uVar20 = 0;
        uVar14 = 0;
        iVar10 = iVar10 + iVar8;
        uVar24 = local_a0[0xb] >> 0x10;
        uVar21 = local_a0[0xb] >> 8;
        uVar17 = local_a0[3] >> 8;
        uVar15 = local_a0[3] >> 0x10;
      }
      iVar5 = (iVar10 + -1) / param_5;
      iVar9 = 1;
      if (1 < iVar5) {
        iVar9 = iVar5;
      }
      local_b0 = pFVar11;
      if (0 < iVar10) {
        iVar22 = 0;
        local_68 = uVar20 & 0xff;
        iVar16 = iVar12 * iVar7;
        local_a0[0xc] = uVar17 & 0xff;
        local_6c = uVar15 & 0xff;
        local_64 = uVar21 & 0xff;
        iVar18 = 0;
        iVar19 = 0;
        iVar8 = local_64 * iVar9;
        iVar5 = local_68 * iVar9;
        iVar13 = (uVar24 & 0xff) * iVar9;
        do {
          iVar25 = iVar16 + iVar26;
          iVar26 = iVar26 + 1;
          param_1[iVar25].field0_0x0._s_0.R = (uchar)((iVar13 + iVar19) / iVar9);
          param_1[iVar25].field0_0x0._s_0.G = (uchar)((iVar8 + iVar18) / iVar9);
          param_1[iVar25].field0_0x0._s_0.B = (uchar)((iVar5 + iVar22) / iVar9);
          param_1[iVar25].field0_0x0._s_0.A = 0xff;
          local_b0 = local_50;
          if (param_2 <= iVar26) {
            iVar16 = iVar16 + iVar7;
            iVar26 = 0;
            iVar12 = iVar12 + 1;
            if (param_3 <= iVar12) break;
          }
          iVar13 = iVar13 - (uVar24 & 0xff);
          iVar8 = iVar8 - local_64;
          iVar5 = iVar5 - local_68;
          iVar19 = iVar19 + local_6c;
          iVar18 = iVar18 + (uVar17 & 0xff);
          iVar22 = iVar22 + (uVar14 & 0xff);
          iVar10 = iVar10 - param_5;
        } while (0 < iVar10);
      }
      iVar10 = iVar10 + (int)local_b0->Size;
      pFVar11 = local_b0->NextChunk;
      local_b4 = param_4;
      lVar23 = local_58;
      local_50 = pFVar11;
    } while (pFVar11 != (FMemoryChunk *)0x0);
  }
  iVar10 = (param_3 - iVar12) * iVar7 - iVar26;
  if (0 < iVar10) {
    memset(param_1 + (iVar26 + iVar12 * iVar7),0,(longlong)iVar10 << 2);
  }
  return true;
}

// GetUserPayload @ 145c5cde0

void * __thiscall FGPUDefragAllocator::GetUserPayload(FGPUDefragAllocator *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar3;
  void *pvVar4;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                   *)&this->PointerToChunkMap,param_1);
  if ((pTVar3 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) ||
     (*(longlong *)&pTVar3->field_0x8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MatchingChunk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                       ,0x1cd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = *(void **)(*(longlong *)&pTVar3->field_0x8 + 0x60);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pvVar4;
}

// Grow @ 145c5cf80

FMemoryChunk * __thiscall
FGPUDefragAllocator::Grow(FGPUDefragAllocator *this,FMemoryChunk *param_1,long64 param_2)

{
  FMemoryChunk *this_00;
  void *pvVar1;
  FMemoryChunk *local_res10;
  uchar *local_38;
  uchar **local_30;
  FMemoryChunk **local_28;
  
  this_00 = param_1->PreviousChunk;
  if (((this_00 != (FMemoryChunk *)0x0) && (this_00->bIsAvailable != false)) &&
     (param_2 <= this_00->Size)) {
    pvVar1 = param_1->UserPayload;
    local_res10 = param_1;
    TMapBase<void_*,FGPUDefragAllocator::FMemoryChunk_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>_>
    ::Remove((TMapBase<void_*,FGPUDefragAllocator::FMemoryChunk_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>_>
              *)&this->PointerToChunkMap,param_1->Base);
    this_00->Size = this_00->Size - param_2;
    local_res10->Base = local_res10->Base + -param_2;
    local_res10->Size = local_res10->Size + param_2;
    local_38 = local_res10->Base;
    local_30 = &local_38;
    local_28 = &local_res10;
    TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&>_>
              ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                *)&this->PointerToChunkMap,
               (TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&> *)
               &stack0x00000020,(bool *)&local_30);
    if (this_00->Size == 0) {
      FMemoryChunk::_scalar_deleting_destructor_(this_00,1);
    }
    local_res10->UserPayload = pvVar1;
    LOCK();
    this->AllocatedMemorySize = this->AllocatedMemorySize + param_2;
    UNLOCK();
    LOCK();
    this->AvailableMemorySize = this->AvailableMemorySize - param_2;
    UNLOCK();
    return local_res10;
  }
  return (FMemoryChunk *)0x0;
}

// InsertFence @ 145c5fc20

void __thiscall FGPUDefragAllocator::InsertFence(FGPUDefragAllocator *this)

{
  ulong64 uVar1;
  
  if (this->bBenchmarkMode == false) {
    uVar1 = (**(code **)(this->_padding_ + 0x50))();
    this->CurrentSyncIndex = this->CurrentSyncIndex + 1;
    this->PlatformSyncFence = uVar1;
    return;
  }
  this->CurrentSyncIndex = this->CurrentSyncIndex + 1;
  return;
}

// Lock @ 145c60fa0

void __thiscall FGPUDefragAllocator::Lock(FGPUDefragAllocator *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar3;
  longlong lVar4;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                   *)&this->PointerToChunkMap,param_1);
  if (pTVar3 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)&pTVar3->field_0x8;
    if (lVar4 != 0) goto LAB_145c6101c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MatchingChunk",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                     ,0x191,L"Couldn\'t find chunk for address: 0x%p");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145c6101c:
  if (*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + 0xf0) < (ulonglong)*(uint *)(lVar4 + 0x50)) {
    FinishAllRelocations(this);
  }
  if ((*(int *)(lVar4 + 0x1c) < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MatchingChunk->LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x19a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  this->NumLockedChunks = this->NumLockedChunks + 1;
                    /* WARNING: Could not recover jumptable at 0x000145c61080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PartialDefragmentationDownshift @ 145c6bca0

void __thiscall
FGPUDefragAllocator::PartialDefragmentationDownshift
          (FGPUDefragAllocator *this,FRelocationStats *param_1,double param_2)

{
  FMemoryChunk *pFVar1;
  FMemoryChunk *pFVar2;
  FMemoryChunk *pFVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  FMemoryChunk *pFVar8;
  longlong lVar9;
  LARGE_INTEGER local_res8;
  
  dVar5 = __real_3f70624dd2f1a9fc;
  dVar4 = __real_4170000000000000;
  pFVar8 = this->FirstFreeChunk;
  if (pFVar8 != (FMemoryChunk *)0x0) {
    while (((param_1->NumBytesRelocated < (longlong)(this->Settings).MaxDefragRelocations &&
            (param_1->NumBytesDownShifted < (longlong)(this->Settings).MaxDefragDownShift)) &&
           (param_1->NumRelocations < GGPUDefragMaxRelocations))) {
      pFVar1 = pFVar8->NextChunk;
      if (pFVar1 == (FMemoryChunk *)0x0) {
LAB_145c6bdc3:
        pFVar8 = pFVar8->NextFreeChunk;
      }
      else {
        pFVar2 = pFVar1->PreviousChunk;
        lVar9 = pFVar1->Size;
        pFVar3 = pFVar1->NextChunk;
        lVar7 = lVar9;
        if ((pFVar2 != (FMemoryChunk *)0x0) && (pFVar2->bIsAvailable != false)) {
          lVar7 = pFVar2->Size + lVar9;
        }
        if ((pFVar3 != (FMemoryChunk *)0x0) && (pFVar3->bIsAvailable != false)) {
          lVar7 = lVar7 + pFVar3->Size;
        }
        if (((lVar7 < lVar9) || (pFVar1->LockCount != 0)) ||
           ((this->bBenchmarkMode == false &&
            (cVar6 = (**(code **)(this->_padding_ + 0x60))(this,pFVar1->Base,pFVar1->UserPayload),
            cVar6 == '\0')))) goto LAB_145c6bdc3;
        lVar7 = (longlong)pFVar8->Base - (longlong)pFVar1->Base;
        lVar9 = -lVar7;
        if (lVar9 < 0) {
          lVar9 = lVar7;
        }
        if ((GGPUDefragAllowOverlappedMoves == 0) && (lVar9 < pFVar1->Size)) goto LAB_145c6bdc3;
        param_1->NumBytesDownShifted = param_1->NumBytesDownShifted + pFVar1->Size;
        pFVar8 = RelocateIntoFreeChunk(this,param_1,pFVar8,pFVar1);
      }
      QueryPerformanceCounter(&local_res8);
      if ((GGPUDefragEnableTimeLimits != 0) &&
         (dVar5 < ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                  param_2)) {
        return;
      }
      if (pFVar8 == (FMemoryChunk *)0x0) {
        return;
      }
    }
  }
  return;
}

// PartialDefragmentationFast @ 145c6be30

void __thiscall
FGPUDefragAllocator::PartialDefragmentationFast
          (FGPUDefragAllocator *this,FRelocationStats *param_1,double param_2)

{
  FMemoryChunk *pFVar1;
  FMemoryChunk *pFVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FMemoryChunk *pFVar11;
  FMemoryChunk *pFVar12;
  ushort uVar13;
  longlong lVar15;
  LARGE_INTEGER local_res8;
  short sVar14;
  
  fVar6 = __real_3b96012c;
  fVar5 = __real_3af001e0;
  dVar4 = __real_3f70624dd2f1a9fc;
  dVar3 = __real_4170000000000000;
  pFVar12 = this->FirstFreeChunk;
  if (pFVar12 != (FMemoryChunk *)0x0) {
    while ((param_1->NumBytesRelocated < (longlong)(this->Settings).MaxDefragRelocations &&
           (param_1->NumRelocations < GGPUDefragMaxRelocations))) {
      if (pFVar12->DefragCounter == 0) {
        pFVar11 = pFVar12->NextChunk;
        if (pFVar11 == (FMemoryChunk *)0x0) {
LAB_145c6bfa3:
          pFVar11 = FindAdjacentToHole(this,pFVar12);
          if (pFVar11 != (FMemoryChunk *)0x0) {
            lVar10 = (longlong)pFVar12->Base - (longlong)pFVar11->Base;
            lVar15 = -lVar10;
            if (lVar15 < 0) {
              lVar15 = lVar10;
            }
            if ((GGPUDefragAllowOverlappedMoves != 0) || (pFVar11->Size <= lVar15))
            goto LAB_145c6bfdd;
          }
          goto LAB_145c6bed0;
        }
        pFVar1 = pFVar11->PreviousChunk;
        lVar15 = pFVar11->Size;
        pFVar2 = pFVar11->NextChunk;
        lVar10 = lVar15;
        if ((pFVar1 != (FMemoryChunk *)0x0) && (pFVar1->bIsAvailable != false)) {
          lVar10 = pFVar1->Size + lVar15;
        }
        if ((pFVar2 != (FMemoryChunk *)0x0) && (pFVar2->bIsAvailable != false)) {
          lVar10 = lVar10 + pFVar2->Size;
        }
        if (((lVar10 < lVar15) || (pFVar11->LockCount != 0)) ||
           ((this->bBenchmarkMode == false &&
            (cVar7 = (**(code **)(this->_padding_ + 0x60))(this,pFVar11->Base,pFVar11->UserPayload),
            cVar7 == '\0')))) goto LAB_145c6bfa3;
        lVar10 = (longlong)pFVar12->Base - (longlong)pFVar11->Base;
        lVar15 = -lVar10;
        if (lVar15 < 0) {
          lVar15 = lVar10;
        }
        if ((GGPUDefragAllowOverlappedMoves == 0) && (lVar15 < pFVar11->Size)) goto LAB_145c6bfa3;
LAB_145c6bfdd:
        pFVar12 = RelocateIntoFreeChunk(this,param_1,pFVar12,pFVar11);
      }
      else {
        pFVar12->DefragCounter = pFVar12->DefragCounter - 1;
LAB_145c6bed0:
        if ((pFVar12->DefragCounter == 0) && (pFVar12->NextFreeChunk != (FMemoryChunk *)0x0)) {
          if (pFVar12->Size < 0x3fff) {
            uVar8 = rand();
            iVar9 = (int)((float)(uVar8 & 0x7fff) * fVar6);
            sVar14 = 0x95;
            if (iVar9 < 0x95) {
              sVar14 = (short)iVar9;
            }
            uVar13 = sVar14 + 0x96;
          }
          else {
            uVar8 = rand();
            iVar9 = (int)((float)(uVar8 & 0x7fff) * fVar5);
            sVar14 = 0x3b;
            if (iVar9 < 0x3b) {
              sVar14 = (short)iVar9;
            }
            uVar13 = sVar14 + 0x14;
          }
          pFVar12->DefragCounter = uVar13;
        }
        pFVar12 = pFVar12->NextFreeChunk;
      }
      QueryPerformanceCounter(&local_res8);
      if ((GGPUDefragEnableTimeLimits != 0) &&
         (dVar4 < ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) -
                  param_2)) {
        return;
      }
      if (pFVar12 == (FMemoryChunk *)0x0) {
        return;
      }
    }
  }
  return;
}

// PartialDefragmentationSlow @ 145c6c0b0

void __thiscall
FGPUDefragAllocator::PartialDefragmentationSlow
          (FGPUDefragAllocator *this,FRelocationStats *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  FMemoryChunk *pFVar7;
  FMemoryChunk *pFVar8;
  ushort uVar9;
  LARGE_INTEGER local_res10;
  short sVar10;
  
  fVar4 = __real_3b96012c;
  fVar3 = __real_3af001e0;
  dVar2 = __real_3f70624dd2f1a9fc;
  dVar1 = __real_4170000000000000;
  if ((param_1->NumBytesRelocated < 1) &&
     (pFVar8 = this->FirstFreeChunk, pFVar8 != (FMemoryChunk *)0x0)) {
    while ((param_1->NumBytesRelocated < (longlong)(this->Settings).MaxDefragRelocations &&
           (param_1->NumRelocations < GGPUDefragMaxRelocations))) {
      if (pFVar8->DefragCounter == 0) {
        pFVar7 = FindAny(this,pFVar8);
        if (pFVar7 == (FMemoryChunk *)0x0) goto LAB_145c6c15f;
        pFVar8 = RelocateIntoFreeChunk(this,param_1,pFVar8,pFVar7);
      }
      else {
        pFVar8->DefragCounter = pFVar8->DefragCounter - 1;
LAB_145c6c15f:
        if ((pFVar8->DefragCounter == 0) && (pFVar8->NextFreeChunk != (FMemoryChunk *)0x0)) {
          if (pFVar8->Size < 0x3fff) {
            uVar5 = rand();
            iVar6 = (int)((float)(uVar5 & 0x7fff) * fVar4);
            sVar10 = 0x95;
            if (iVar6 < 0x95) {
              sVar10 = (short)iVar6;
            }
            uVar9 = sVar10 + 0x96;
          }
          else {
            uVar5 = rand();
            iVar6 = (int)((float)(uVar5 & 0x7fff) * fVar3);
            sVar10 = 0x3b;
            if (iVar6 < 0x3b) {
              sVar10 = (short)iVar6;
            }
            uVar9 = sVar10 + 0x14;
          }
          pFVar8->DefragCounter = uVar9;
        }
        pFVar8 = pFVar8->NextFreeChunk;
      }
      QueryPerformanceCounter(&local_res10);
      if ((GGPUDefragEnableTimeLimits != 0) &&
         (dVar2 < ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar1) -
                  param_2)) {
        return;
      }
      if (pFVar8 == (FMemoryChunk *)0x0) {
        return;
      }
    }
  }
  return;
}

// Reallocate @ 145c71ac0

void * __thiscall
FGPUDefragAllocator::Reallocate(FGPUDefragAllocator *this,void *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMemoryChunk *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar4;
  void *pvVar5;
  longlong lVar6;
  FMemoryChunk *pFVar7;
  ulonglong uVar8;
  FMemoryChunk *pFVar9;
  longlong lVar10;
  FMemoryChunk *pFVar11;
  FMemoryChunk *local_res20;
  LARGE_INTEGER local_78;
  uchar *local_70;
  LARGE_INTEGER local_68;
  uchar **local_60;
  FMemoryChunk **local_58;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_78);
  dVar2 = (double)local_78.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  pTVar4 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                   *)&this->PointerToChunkMap,param_1);
  pFVar11 = (FMemoryChunk *)0x0;
  if (pTVar4 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) {
    pFVar9 = (FMemoryChunk *)0x0;
  }
  else {
    pFVar9 = *(FMemoryChunk **)&pTVar4->field_0x8;
    if ((pFVar9 != (FMemoryChunk *)0x0) && (param_1 == pFVar9->Base)) goto LAB_145c71b68;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("MatchingChunk && (OldBaseAddress == MatchingChunk->Base)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                     ,0x1f0,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar1)();
    return pvVar5;
  }
LAB_145c71b68:
  uVar8 = param_2 + -1 + (longlong)this->AllocationAlignment & -(longlong)this->AllocationAlignment;
  lVar6 = uVar8 - pFVar9->Size;
  lVar10 = -lVar6;
  if (lVar10 < 0) {
    lVar10 = lVar6;
  }
  if (pFVar9->Size < (longlong)uVar8) {
    this_00 = pFVar9->PreviousChunk;
    pFVar7 = pFVar11;
    local_res20 = pFVar9;
    if (((this_00 != (FMemoryChunk *)0x0) && (this_00->bIsAvailable != false)) &&
       (lVar10 <= this_00->Size)) {
      pvVar5 = pFVar9->UserPayload;
      TMapBase<void_*,FGPUDefragAllocator::FMemoryChunk_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>_>
      ::Remove((TMapBase<void_*,FGPUDefragAllocator::FMemoryChunk_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>_>
                *)&this->PointerToChunkMap,pFVar9->Base);
      this_00->Size = this_00->Size - lVar10;
      local_res20->Base = local_res20->Base + -lVar10;
      local_res20->Size = local_res20->Size + lVar10;
      local_70 = local_res20->Base;
      local_60 = &local_70;
      local_58 = &local_res20;
      TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&>_>
                ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                  *)&this->PointerToChunkMap,
                 (TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&> *)
                 &stack0x00000008,(bool *)&local_60);
      if (this_00->Size == 0) {
        FMemoryChunk::_scalar_deleting_destructor_(this_00,1);
      }
      local_res20->UserPayload = pvVar5;
      LOCK();
      this->AllocatedMemorySize = this->AllocatedMemorySize + lVar10;
      UNLOCK();
      LOCK();
      this->AvailableMemorySize = this->AvailableMemorySize - lVar10;
      UNLOCK();
      pFVar7 = local_res20;
    }
  }
  else {
    pFVar7 = Shrink(this,pFVar9,lVar10);
  }
  if (pFVar7 != (FMemoryChunk *)0x0) {
    pFVar11 = (FMemoryChunk *)pFVar7->Base;
  }
  QueryPerformanceCounter(&local_68);
  this->TimeSpentInAllocator =
       ((double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2) +
       this->TimeSpentInAllocator;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar11;
}

// RelocateAllowed @ 145c746d0

FMemoryChunk * __thiscall
FGPUDefragAllocator::RelocateAllowed
          (FGPUDefragAllocator *this,FMemoryChunk *param_1,FMemoryChunk *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (FMemoryChunk *)0x0) {
    lVar1 = (longlong)param_1->Base - (longlong)param_2->Base;
    lVar2 = -lVar1;
    if (lVar2 < 0) {
      lVar2 = lVar1;
    }
    if ((GGPUDefragAllowOverlappedMoves != 0) || (param_2->Size <= lVar2)) {
      return param_2;
    }
  }
  return (FMemoryChunk *)0x0;
}

// RelocateIntoFreeChunk @ 145c74710

FMemoryChunk * __thiscall
FGPUDefragAllocator::RelocateIntoFreeChunk
          (FGPUDefragAllocator *this,FRelocationStats *param_1,FMemoryChunk *param_2,
          FMemoryChunk *param_3)

{
  uchar *puVar1;
  TStatIdData *pTVar2;
  FMemoryChunk *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  bool bVar7;
  FMemoryChunk *pFVar8;
  FLowLevelMemTracker *this_00;
  longlong lVar9;
  uint uVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *puVar13;
  longlong lVar14;
  undefined1 local_res20 [8];
  TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&> local_98;
  uchar *local_88;
  uchar *local_80;
  uchar *local_78;
  FMemoryChunk *local_70;
  FMemoryChunk *local_68;
  uchar **local_60;
  FMemoryChunk ***local_58;
  
  if ((param_2->LockCount != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FreeChunk->IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x3aa,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMemoryChunk *)(*pcVar4)();
    return pFVar8;
  }
  if ((param_3->LockCount != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SourceChunk->IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x3ab,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMemoryChunk *)(*pcVar4)();
    return pFVar8;
  }
  if ((param_2->bIsAvailable == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeChunk->bIsAvailable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x3ac,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMemoryChunk *)(*pcVar4)();
    return pFVar8;
  }
  if ((param_3->bIsAvailable != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SourceChunk->bIsAvailable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x3ad,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMemoryChunk *)(*pcVar4)();
    return pFVar8;
  }
  local_88 = param_3->UserPayload;
  puVar13 = (uchar *)param_3->Size;
  puVar1 = param_3->Base;
  pTVar2 = (param_3->Stat).StatIdPtr;
  local_78 = (uchar *)param_3->OrigSize;
  local_70 = param_3->NextChunk;
  if ((param_3->PreviousChunk == param_2) || (local_70 == param_2)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FMemoryChunk::LinkFree(param_3,(FMemoryChunk *)0x0);
  Coalesce(this,param_3);
  bVar7 = false;
  pFVar8 = param_3;
  if (bVar6 == false) {
    pFVar8 = param_2;
  }
  local_80 = pFVar8->Base;
  local_98.Value = (FMemoryChunk **)pFVar8;
  if (puVar1 != local_80) {
    MemoryTrace_ReallocFree((ulong64)puVar1,0,0);
    MemoryTrace_ReallocAlloc((ulong64)pFVar8->Base,(ulong64)puVar13,4,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelAllocMoved(this_00,Default,pFVar8->Base,puVar1,None);
    }
    lVar9 = (longlong)pFVar8->Base - (longlong)puVar1;
    lVar14 = -lVar9;
    if (lVar14 < 0) {
      lVar14 = lVar9;
    }
    if (this->bBenchmarkMode == false) {
      (**(code **)(this->_padding_ + 0x48))(this,pFVar8->Base,puVar1,puVar13,local_88);
    }
    puVar12 = puVar13;
    if (lVar14 < (longlong)puVar13) {
      puVar12 = (uchar *)((longlong)(this->Settings).MaxDefragRelocations * (longlong)puVar13);
    }
    pFVar8->UserPayload = local_88;
    bVar7 = true;
    param_1->NumBytesRelocated = (long64)(puVar12 + param_1->NumBytesRelocated);
    param_1->NumRelocations = param_1->NumRelocations + 1;
  }
  *(uchar **)((longlong)local_98.Value + 0x60) = local_88;
  param_3->OrigSize = 0;
  *(uchar **)((longlong)local_98.Value + 0x10) = local_78;
  local_78 = puVar1;
  if (*(int *)&(this->PointerToChunkMap).field_0x8 != *(int *)&(this->PointerToChunkMap).field_0x34)
  {
    uVar10 = ((uint)((ulonglong)puVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar1 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<void_const_*>
              ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                *)&this->PointerToChunkMap,uVar10 >> 0x10 ^ uVar10,&local_78);
  }
  local_88 = local_80;
  local_60 = &local_88;
  local_58 = &local_98.Value;
  TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&>_>
            ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
              *)&this->PointerToChunkMap,&local_98,(bool *)&local_60);
  (param_3->Stat).StatIdPtr = &TStatId::TStatId_NAME_None;
  ((TStatId *)((longlong)local_98.Value + 0x68))->StatIdPtr = pTVar2;
  if ((longlong)puVar13 < (longlong)*(uchar **)((longlong)local_98.Value + 8)) {
    Split(this,(FMemoryChunk *)local_98.Value,(long64)puVar13);
    pFVar8 = *(FMemoryChunk **)((longlong)local_98.Value + 0x38);
    pFVar8->bTail = bVar6;
    if (bVar6 != false) {
      if (local_70 == param_2) {
        if (bVar7) {
          `FGPUDefragAllocator::RelocateIntoFreeChunk'::__l47::<lambda_1>::operator()(local_res20);
        }
      }
      else {
        puVar12 = (uchar *)0x0;
        if (0 < (longlong)(puVar1 + (-(longlong)param_3->Base - (longlong)puVar13))) {
          puVar12 = puVar1 + (-(longlong)param_3->Base - (longlong)puVar13);
        }
        if ((0 < (longlong)puVar12) && (pFVar8->bIsAvailable != false)) {
          lVar14 = pFVar8->Size;
          if (pFVar8->BestFitAllocator->CompletedSyncIndex < (ulonglong)pFVar8->SyncIndex) {
            lVar14 = lVar14 - pFVar8->SyncSize;
          }
          if (lVar14 != 0) {
            Split(this,pFVar8,(long64)puVar12);
            pFVar3 = pFVar8->NextFreeChunk;
            local_68 = pFVar3;
            if ((longlong)puVar13 < pFVar3->Size) {
              Split(this,pFVar3,(long64)puVar13);
            }
            pFVar3->SyncIndex = (uint)this->CompletedSyncIndex;
            pFVar3->SyncSize = 0;
            AllocateChunk(this,pFVar3,pFVar3->Size,false,false);
            uVar5 = this->CurrentSyncIndex;
            pFVar3->SyncSize = pFVar3->Size;
            pFVar3->SyncIndex = (uint)uVar5;
            pFVar3->LockCount = pFVar3->LockCount + 1;
            TDoubleLinkedList<FGPUDefragAllocator::FMemoryChunk_*>::AddTail
                      (&this->PendingFreeChunks,&local_68);
            goto LAB_145c74b56;
          }
        }
        pFVar8->SyncIndex = (uint)this->CurrentSyncIndex;
        puVar12 = puVar13;
        if ((longlong)puVar13 < pFVar8->SyncSize) {
          puVar12 = (uchar *)pFVar8->SyncSize;
        }
        pFVar8->SyncSize = (long64)puVar12;
      }
    }
  }
  else {
    if ((*(uchar **)((longlong)local_98.Value + 8) != puVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestinationChunk->Size == NewSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                           ,0x434,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMemoryChunk *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = *(FMemoryChunk **)((longlong)local_98.Value + 0x48);
  }
LAB_145c74b56:
  FMemoryChunk::UnlinkFree((FMemoryChunk *)local_98.Value);
  puVar12 = puVar13;
  if (param_3->Base < puVar1) {
    puVar12 = puVar1 + ((longlong)puVar13 - (longlong)param_3->Base);
  }
  param_3->SyncIndex = (uint)this->CurrentSyncIndex;
  puVar11 = (uchar *)param_3->SyncSize;
  if ((longlong)param_3->SyncSize < (longlong)puVar12) {
    puVar11 = puVar12;
  }
  param_3->SyncSize = (long64)puVar11;
  if (((*(FGPUDefragAllocator **)((longlong)local_98.Value + 0x28))->CompletedSyncIndex <
       (ulonglong)*(uint *)((longlong)local_98.Value + 0x50)) &&
     ((longlong)puVar13 < *(long64 *)((longlong)local_98.Value + 0x58))) {
    puVar13 = *(uchar **)((longlong)local_98.Value + 0x58);
  }
  *(uint *)((longlong)local_98.Value + 0x50) = (uint)this->CurrentSyncIndex;
  *(uchar **)((longlong)local_98.Value + 0x58) = puVar13;
  if ((bVar6 == false) && (puVar1 < local_80)) {
    pFVar8 = param_3;
  }
  return pFVar8;
}

// SetUserPayload @ 145c78fc0

void __thiscall
FGPUDefragAllocator::SetUserPayload(FGPUDefragAllocator *this,void *param_1,void *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar3;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                   *)&this->PointerToChunkMap,param_1);
  if ((pTVar3 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) ||
     (*(longlong *)&pTVar3->field_0x8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MatchingChunk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                       ,0x1b8,L"Couldn\'t find matching chunk for %p");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    *(void **)(*(longlong *)&pTVar3->field_0x8 + 0x60) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c79054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Shrink @ 145c795e0

FMemoryChunk * __thiscall
FGPUDefragAllocator::Shrink(FGPUDefragAllocator *this,FMemoryChunk *param_1,long64 param_2)

{
  uchar *puVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FMemoryChunk *pFVar6;
  uint uVar7;
  TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&> local_res8;
  uchar *local_res18;
  uchar *local_res20;
  uchar **local_38;
  FMemoryChunk ***local_30;
  
  local_res8.Value = (FMemoryChunk **)param_1;
  if ((param_1->Size < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShrinkAmount <= Chunk->Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x23b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FMemoryChunk *)(*pcVar4)();
    return pFVar6;
  }
  pFVar6 = *(FMemoryChunk **)((longlong)local_res8.Value + 0x30);
  puVar1 = *(uchar **)local_res8.Value;
  pvVar2 = *(void **)((longlong)local_res8.Value + 0x60);
  if (pFVar6 == (FMemoryChunk *)0x0) {
    Split(this,(FMemoryChunk *)local_res8.Value,param_2);
    local_res8.Value = *(FMemoryChunk ***)((longlong)local_res8.Value + 0x38);
    FMemoryChunk::UnlinkFree((FMemoryChunk *)local_res8.Value);
    pFVar6 = *(FMemoryChunk **)((longlong)local_res8.Value + 0x30);
    if ((pFVar6 == (FMemoryChunk *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                           ,0x3d5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMemoryChunk *)(*pcVar4)();
      return pFVar6;
    }
    FMemoryChunk::LinkFree(pFVar6,(FMemoryChunk *)0x0);
    Coalesce(this,pFVar6);
  }
  else {
    *(uchar **)local_res8.Value = puVar1 + param_2;
    *(long64 *)((longlong)local_res8.Value + 8) =
         *(long64 *)((longlong)local_res8.Value + 8) - param_2;
    lVar3 = pFVar6->Size;
    pFVar6->Size = lVar3 + param_2;
    if (pFVar6->bIsAvailable == false) {
      Split(this,pFVar6,lVar3);
      pFVar6 = pFVar6->NextChunk;
    }
  }
  pFVar6->SyncIndex = (uint)this->CurrentSyncIndex;
  pFVar6->SyncSize = pFVar6->Size;
  local_res18 = puVar1;
  if (*(int *)&(this->PointerToChunkMap).field_0x8 != *(int *)&(this->PointerToChunkMap).field_0x34)
  {
    uVar7 = ((uint)((ulonglong)puVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar1 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<void_const_*>
              ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                *)&this->PointerToChunkMap,uVar7 >> 0x10 ^ uVar7,&local_res18);
  }
  local_res20 = *(uchar **)local_res8.Value;
  local_38 = &local_res20;
  local_30 = &local_res8.Value;
  TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_&&,FGPUDefragAllocator::FMemoryChunk_*_const_&>_>
            ((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
              *)&this->PointerToChunkMap,&local_res8,(bool *)&local_38);
  *(void **)((longlong)local_res8.Value + 0x60) = pvVar2;
  LOCK();
  this->AllocatedMemorySize = this->AllocatedMemorySize - param_2;
  UNLOCK();
  LOCK();
  this->AvailableMemorySize = this->AvailableMemorySize + param_2;
  UNLOCK();
  return (FMemoryChunk *)local_res8.Value;
}

// SortFreeList @ 145c7a000

void __thiscall
FGPUDefragAllocator::SortFreeList(FGPUDefragAllocator *this,int *param_1,long64 *param_2)

{
  FMemoryChunk *pFVar1;
  FMemoryChunk *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  FMemoryChunk *pFVar5;
  bool bVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *param_2 = 0;
  if (this->FirstFreeChunk != (FMemoryChunk *)0x0) {
    *param_1 = *param_1 + 1;
    *param_2 = this->FirstFreeChunk->Size;
    pFVar2 = this->FirstFreeChunk;
    pFVar5 = this->FirstFreeChunk->NextFreeChunk;
    while (pFVar5 != (FMemoryChunk *)0x0) {
      pFVar1 = pFVar5->NextFreeChunk;
      lVar7 = pFVar5->Size;
      if (pFVar5->Size < *param_2) {
        lVar7 = *param_2;
      }
      *param_2 = lVar7;
      if (pFVar5->Base < pFVar2->Base) {
        pFVar2 = this->FirstFreeChunk;
        puVar3 = pFVar2->Base;
        while (puVar3 < pFVar5->Base) {
          pFVar2 = pFVar2->NextFreeChunk;
          puVar3 = pFVar2->Base;
        }
        if ((pFVar5->bIsAvailable == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsAvailable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                               ,0xff,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pFVar5->PreviousFreeChunk == (FMemoryChunk *)0x0) {
          pFVar5->BestFitAllocator->FirstFreeChunk = pFVar5->NextFreeChunk;
        }
        else {
          pFVar5->PreviousFreeChunk->NextFreeChunk = pFVar5->NextFreeChunk;
        }
        if (pFVar5->NextFreeChunk != (FMemoryChunk *)0x0) {
          pFVar5->NextFreeChunk->PreviousFreeChunk = pFVar5->PreviousFreeChunk;
        }
        pFVar5->PreviousFreeChunk = (FMemoryChunk *)0x0;
        pFVar5->NextFreeChunk = (FMemoryChunk *)0x0;
        pFVar5->bIsAvailable = true;
        pFVar5->PreviousFreeChunk = pFVar2->PreviousFreeChunk;
        pFVar5->NextFreeChunk = pFVar2;
        if (pFVar2->PreviousFreeChunk != (FMemoryChunk *)0x0) {
          pFVar2->PreviousFreeChunk->NextFreeChunk = pFVar5;
        }
        pFVar2->PreviousFreeChunk = pFVar5;
        if (pFVar2 == this->FirstFreeChunk) {
          this->FirstFreeChunk = pFVar5;
        }
      }
      *param_1 = *param_1 + 1;
      pFVar2 = pFVar5;
      pFVar5 = pFVar1;
    }
  }
  return;
}

// Split @ 145c7a1e0

void __thiscall
FGPUDefragAllocator::Split(FGPUDefragAllocator *this,FMemoryChunk *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  FMemoryChunk *pFVar3;
  longlong lVar4;
  FMemoryChunk *local_res10;
  
  local_res10 = param_1;
  if (param_1 == (FMemoryChunk *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseChunk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                       ,0x39a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->Size <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstSize < BaseChunk->Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                       ,0x39b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                       ,0x39c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = param_1->Size;
  pFVar3 = ::operator_new(0x78);
  if (pFVar3 == (FMemoryChunk *)0x0) {
    pFVar3 = (FMemoryChunk *)0x0;
    local_res10 = param_1;
  }
  else {
    pFVar3 = FMemoryChunk::FMemoryChunk
                       (pFVar3,param_1->Base + param_2,lVar4 - param_2,this,&local_res10,
                        (TStatId)0x154f11430);
  }
  if ((local_res10->BestFitAllocator->CompletedSyncIndex < (ulonglong)local_res10->SyncIndex) &&
     (lVar4 = local_res10->SyncSize, param_2 < lVar4)) {
    pFVar3->SyncIndex = local_res10->SyncIndex;
    pFVar3->SyncSize = lVar4 - param_2;
  }
  lVar4 = local_res10->SyncSize;
  if (param_2 < local_res10->SyncSize) {
    lVar4 = param_2;
  }
  local_res10->SyncSize = lVar4;
  local_res10->Size = param_2;
  return;
}

// Tick @ 145c7b7a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FGPUDefragAllocator::Tick(FGPUDefragAllocator *this,FRelocationStats *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  FMemoryChunk *pFVar2;
  uchar *puVar3;
  FMemoryChunk *pFVar4;
  code *pcVar5;
  double dVar6;
  long64 lVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_TexturePool_Blocked> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FMemoryChunk *pFVar18;
  FMemoryChunk *pFVar19;
  ulong64 uVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar24;
  uchar auVar25 [8];
  FName local_res8;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FStatMessage local_98 [6];
  short sVar23;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (FThreadStats::bPrimaryEnable != false) {
    auVar25[4] = '\0';
    auVar25[5] = '\0';
    auVar25[6] = '\0';
    auVar25[7] = '\0';
    auVar25._0_4_ = this->BlockedCycles;
    FVar17 = StatPtr_STAT_TexturePool_Blocked;
    if (StatPtr_STAT_TexturePool_Blocked ==
        (FThreadSafeStaticStat<FStat_STAT_TexturePool_Blocked>)0x0) {
      pFVar16 = ::FName::FName(&local_a0,"STAT_TexturePool_Blocked");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_TexturePool_Blocked>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_Blocked,*pFVar16,
                          L"Blocked By GPU Relocation","STATGROUP_TexturePool","STATCAT_ADVANCED",
                          L"TexturePool",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar17;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_98[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_98[0].StatData.Pad = auVar25;
      local_98[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,local_98);
      FStatsTrace::Set(&local_res8,(long64)auVar25);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  QueryPerformanceCounter(&local_res20);
  dVar8 = __real_4170000000000000;
  dVar6 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->BlockedCycles = 0;
  dVar6 = dVar6 + dVar8;
  FinishAllRelocations(this);
  param_1->NumHoles = 0;
  param_1->LargestHoleSize = 0;
  if (this->FirstFreeChunk != (FMemoryChunk *)0x0) {
    param_1->NumHoles = 1;
    param_1->LargestHoleSize = this->FirstFreeChunk->Size;
    pFVar19 = this->FirstFreeChunk;
    pFVar18 = this->FirstFreeChunk->NextFreeChunk;
    while (pFVar18 != (FMemoryChunk *)0x0) {
      pFVar2 = pFVar18->NextFreeChunk;
      lVar24 = pFVar18->Size;
      if (pFVar18->Size < param_1->LargestHoleSize) {
        lVar24 = param_1->LargestHoleSize;
      }
      param_1->LargestHoleSize = lVar24;
      if (pFVar18->Base < pFVar19->Base) {
        pFVar19 = this->FirstFreeChunk;
        puVar3 = pFVar19->Base;
        while (puVar3 < pFVar18->Base) {
          pFVar19 = pFVar19->NextFreeChunk;
          puVar3 = pFVar19->Base;
        }
        if ((pFVar18->bIsAvailable == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsAvailable",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                                ,0xff,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          iVar14 = (*pcVar5)();
          return iVar14;
        }
        if (pFVar18->PreviousFreeChunk == (FMemoryChunk *)0x0) {
          pFVar18->BestFitAllocator->FirstFreeChunk = pFVar18->NextFreeChunk;
        }
        else {
          pFVar18->PreviousFreeChunk->NextFreeChunk = pFVar18->NextFreeChunk;
        }
        if (pFVar18->NextFreeChunk != (FMemoryChunk *)0x0) {
          pFVar18->NextFreeChunk->PreviousFreeChunk = pFVar18->PreviousFreeChunk;
        }
        pFVar18->PreviousFreeChunk = (FMemoryChunk *)0x0;
        pFVar18->NextFreeChunk = (FMemoryChunk *)0x0;
        pFVar18->bIsAvailable = true;
        pFVar18->PreviousFreeChunk = pFVar19->PreviousFreeChunk;
        pFVar18->NextFreeChunk = pFVar19;
        if (pFVar19->PreviousFreeChunk != (FMemoryChunk *)0x0) {
          pFVar19->PreviousFreeChunk->NextFreeChunk = pFVar18;
        }
        pFVar19->PreviousFreeChunk = pFVar18;
        if (pFVar19 == this->FirstFreeChunk) {
          this->FirstFreeChunk = pFVar18;
        }
      }
      param_1->NumHoles = param_1->NumHoles + 1;
      pFVar19 = pFVar18;
      pFVar18 = pFVar2;
    }
  }
  if (param_2) {
    pFVar19 = this->FirstFreeChunk;
    while (pFVar19 != (FMemoryChunk *)0x0) {
      pFVar18 = FindAdjacentToHole(this,pFVar19);
      if ((pFVar18 == (FMemoryChunk *)0x0) &&
         (pFVar18 = FindAny(this,pFVar19), pFVar18 == (FMemoryChunk *)0x0)) {
        pFVar18 = pFVar19->NextChunk;
        if (pFVar18 != (FMemoryChunk *)0x0) {
          pFVar2 = pFVar18->PreviousChunk;
          lVar24 = pFVar18->Size;
          pFVar4 = pFVar18->NextChunk;
          lVar21 = lVar24;
          if ((pFVar2 != (FMemoryChunk *)0x0) && (pFVar2->bIsAvailable != false)) {
            lVar21 = pFVar2->Size + lVar24;
          }
          if ((pFVar4 != (FMemoryChunk *)0x0) && (pFVar4->bIsAvailable != false)) {
            lVar21 = lVar21 + pFVar4->Size;
          }
          if (((lVar24 <= lVar21) && (pFVar18->LockCount == 0)) &&
             ((this->bBenchmarkMode != false ||
              (cVar13 = (**(code **)(this->_padding_ + 0x60))
                                  (this,pFVar18->Base,pFVar18->UserPayload), cVar13 != '\0')))) {
            param_1->NumBytesDownShifted = param_1->NumBytesDownShifted + pFVar18->Size;
            goto LAB_145c7bdbc;
          }
        }
        pFVar19 = pFVar19->NextFreeChunk;
      }
      else {
LAB_145c7bdbc:
        pFVar19 = RelocateIntoFreeChunk(this,param_1,pFVar19,pFVar18);
      }
    }
  }
  else {
    PartialDefragmentationFast(this,param_1,dVar6);
    fVar11 = __real_3b96012c;
    fVar10 = __real_3af001e0;
    dVar9 = __real_3f70624dd2f1a9fc;
    if ((param_1->NumBytesRelocated < 1) &&
       (pFVar19 = this->FirstFreeChunk, pFVar19 != (FMemoryChunk *)0x0)) {
      while ((param_1->NumBytesRelocated < (longlong)(this->Settings).MaxDefragRelocations &&
             (param_1->NumRelocations < GGPUDefragMaxRelocations))) {
        if (pFVar19->DefragCounter == 0) {
          pFVar18 = FindAny(this,pFVar19);
          if (pFVar18 == (FMemoryChunk *)0x0) goto LAB_145c7bb50;
          pFVar19 = RelocateIntoFreeChunk(this,param_1,pFVar19,pFVar18);
        }
        else {
          pFVar19->DefragCounter = pFVar19->DefragCounter - 1;
LAB_145c7bb50:
          if ((pFVar19->DefragCounter == 0) && (pFVar19->NextFreeChunk != (FMemoryChunk *)0x0)) {
            if (pFVar19->Size < 0x3fff) {
              uVar15 = rand();
              iVar14 = (int)((float)(uVar15 & 0x7fff) * fVar11);
              sVar23 = 0x95;
              if (iVar14 < 0x95) {
                sVar23 = (short)iVar14;
              }
              uVar22 = sVar23 + 0x96;
            }
            else {
              uVar15 = rand();
              iVar14 = (int)((float)(uVar15 & 0x7fff) * fVar10);
              sVar23 = 0x3b;
              if (iVar14 < 0x3b) {
                sVar23 = (short)iVar14;
              }
              uVar22 = sVar23 + 0x14;
            }
            pFVar19->DefragCounter = uVar22;
          }
          pFVar19 = pFVar19->NextFreeChunk;
        }
        QueryPerformanceCounter(&local_a8);
        if (((GGPUDefragEnableTimeLimits != 0) &&
            (dVar9 < ((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
                     dVar6)) || (pFVar19 == (FMemoryChunk *)0x0)) break;
      }
    }
  }
  this->NumRelocationsInProgress = param_1->NumRelocations;
  if (this->bBenchmarkMode == false) {
    uVar20 = (**(code **)(this->_padding_ + 0x50))(this);
    this->PlatformSyncFence = uVar20;
  }
  this->CurrentSyncIndex = this->CurrentSyncIndex + 1;
  this->TotalNumRelocations = this->TotalNumRelocations + (longlong)param_1->NumRelocations;
  this->TotalNumBytesRelocated = this->TotalNumBytesRelocated + param_1->NumBytesRelocated;
  iVar14 = param_1->NumHoles;
  if (param_1->NumHoles < this->MaxNumHoles) {
    iVar14 = this->MaxNumHoles;
  }
  this->MaxNumHoles = iVar14;
  lVar24 = param_1->LargestHoleSize;
  if (this->MinLargestHole < param_1->LargestHoleSize) {
    lVar24 = this->MinLargestHole;
  }
  this->MinLargestHole = lVar24;
  this->CurrentLargestHole = param_1->LargestHoleSize;
  this->CurrentNumHoles = param_1->NumHoles;
  lVar7 = param_1->NumBytesRelocated;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (int)lVar7;
}

// Unlock @ 145c7ed00

void __thiscall FGPUDefragAllocator::Unlock(FGPUDefragAllocator *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *pTVar3;
  longlong lVar4;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
                   *)&this->PointerToChunkMap,param_1);
  if (pTVar3 == (TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*> *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)&pTVar3->field_0x8;
    if ((lVar4 != 0) &&
       ((ulonglong)*(uint *)(lVar4 + 0x50) <= *(ulonglong *)(*(longlong *)(lVar4 + 0x28) + 0xf0)))
    goto LAB_145c7ed87;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MatchingChunk && MatchingChunk->IsRelocating() == false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                     ,0x1a8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145c7ed87:
  if ((*(int *)(lVar4 + 0x1c) < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MatchingChunk->LockCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x1a9,L"Chunk: 0x%p has bad lockcount: %i"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + -1;
  this->NumLockedChunks = this->NumLockedChunks + -1;
                    /* WARNING: Could not recover jumptable at 0x000145c7eddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// operator() @ 1504d9f10

bool __thiscall
`FGPUDefragAllocator::RelocateIntoFreeChunk'::__l47::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<682805508351984635>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<682805508351984635>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


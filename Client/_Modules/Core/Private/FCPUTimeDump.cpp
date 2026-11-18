// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ExecuteCommand @ 141639350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCPUTimeDump::ExecuteCommand
          (FCPUTimeDump *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FTSTicker *pFVar9;
  TWeakPtr<FTSTicker::FElement,1> *pTVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  wchar_t *pwVar12;
  int local_res8 [2];
  TWeakPtr<FTSTicker::FElement,1> local_78;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  TWeakPtr<FTSTicker::FElement,1> local_48;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  
  local_res8[0] = 0;
  if (param_1->ArrayNum == 0) {
    local_res8[0] = 0x1e;
  }
  else {
    if (param_1->ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar4 + 8) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)pFVar4;
    }
    FParse::Value(pwVar12,L"delay=",local_res8);
  }
  local_78.Object = (this->GetCPUTimeDelegateHandle).Object;
  pTVar11 = &this->GetCPUTimeDelegateHandle;
  local_78.WeakReferenceCount.ReferenceController =
       (this->GetCPUTimeDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_78);
  local_68.Object = (this->CPUTimeDumpDelegateHandle).Object;
  pTVar1 = &this->CPUTimeDumpDelegateHandle;
  local_68.WeakReferenceCount.ReferenceController =
       (this->CPUTimeDumpDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_68);
  if (pTVar11 != &local_38) {
    pTVar5 = (this->GetCPUTimeDelegateHandle).WeakReferenceCount.ReferenceController;
    pTVar11->Object = (FElement *)0x0;
    (this->GetCPUTimeDelegateHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  if (pTVar1 != &local_28) {
    pTVar5 = (this->CPUTimeDumpDelegateHandle).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (FElement *)0x0;
    (this->CPUTimeDumpDelegateHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  if (local_res8[0] == 0) {
    if (4 < (byte)LogGenericPlatformTime._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FCPUTimeDump::ExecuteCommand(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformTime);
    }
  }
  else {
    iVar8 = 300;
    if (local_res8[0] < 300) {
      iVar8 = local_res8[0];
    }
    local_res8[0] = 10;
    if (10 < iVar8) {
      local_res8[0] = iVar8;
    }
    if (4 < (byte)LogGenericPlatformTime._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FCPUTimeDump::ExecuteCommand(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformTime);
    }
    pFVar9 = FTSTicker::GetCoreTicker();
    pTVar10 = FTSTicker::AddTicker(pFVar9,&local_58,&this->GetCPUTimeDelegate,0.0);
    if (pTVar11 != pTVar10) {
      pTVar11->Object = pTVar10->Object;
      pTVar10->Object = (FElement *)0x0;
      pTVar5 = (this->GetCPUTimeDelegateHandle).WeakReferenceCount.ReferenceController;
      (this->GetCPUTimeDelegateHandle).WeakReferenceCount.ReferenceController =
           (pTVar10->WeakReferenceCount).ReferenceController;
      (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    pFVar9 = FTSTicker::GetCoreTicker();
    pTVar11 = FTSTicker::AddTicker(pFVar9,&local_48,&this->CPUTimeDumpDelegate,(float)local_res8[0])
    ;
    if (pTVar1 != pTVar11) {
      pTVar1->Object = pTVar11->Object;
      pTVar11->Object = (FElement *)0x0;
      pTVar5 = (this->CPUTimeDumpDelegateHandle).WeakReferenceCount.ReferenceController;
      (this->CPUTimeDumpDelegateHandle).WeakReferenceCount.ReferenceController =
           (pTVar11->WeakReferenceCount).ReferenceController;
      (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// OnAddCPUTime @ 14164e1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCPUTimeDump::OnAddCPUTime(FCPUTimeDump *this,float param_1)

{
  int *piVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined4 local_res8 [4];
  FName local_res18;
  LARGE_INTEGER local_res20;
  undefined8 local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_bool___cdecl_FCPUTimeDump::OnAddCPUTime(float)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_bool___cdecl_FCPUTimeDump::OnAddCPUTime(float)___ptr64'::__l2
                           ::_thread_safe_static_guard_0__),
     `protected:_bool___cdecl_FCPUTimeDump::OnAddCPUTime(float)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FCPUTimeDump_OnAddCPUTime = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_60,"STAT_FCPUTimeDump_OnAddCPUTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`protected:_bool___cdecl_FCPUTimeDump::OnAddCPUTime(float)___ptr64'::__l2::
                StatPtr_STAT_FCPUTimeDump_OnAddCPUTime,*pFVar11,L"STAT_FCPUTimeDump_OnAddCPUTime",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`protected:_bool___cdecl_FCPUTimeDump::OnAddCPUTime(float)___ptr64'::__l2::
                         _thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FCPUTimeDump_OnAddCPUTime;
  if (_StatPtr_STAT_FCPUTimeDump_OnAddCPUTime == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_58,"STAT_FCPUTimeDump_OnAddCPUTime");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`protected:_bool___cdecl_FCPUTimeDump::OnAddCPUTime(float)___ptr64'::__l2
                          ::StatPtr_STAT_FCPUTimeDump_OnAddCPUTime,*pFVar11,
                         L"STAT_FCPUTimeDump_OnAddCPUTime","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      pcVar2 = (pTVar12->StatDescriptionAnsi).Ptr;
      local_res8[0] = 0;
      bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar6) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res8,pcVar2);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformTime.cpp"
                   ,0xd4);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_14164e34f;
    }
  }
  bVar5 = false;
  FVar15 = local_50;
LAB_14164e34f:
  FWindowsPlatformTime::GetCPUTime();
  pFVar3 = (this->CPUTimes).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)(this->CPUTimes).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar10 = (this->CPUTimes).ArrayNum;
  piVar1 = &(this->CPUTimes).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->CPUTimes).ArrayNum = iVar10 + 1;
  *(undefined8 *)((this->CPUTimes).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_68;
  if (((bVar9) && (bVar9 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar9)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return true;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// OnCPUTimeDump @ 14164e5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCPUTimeDump::OnCPUTimeDump(FCPUTimeDump *this,float param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68 [3];
  
  uVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::
                           __l2::_thread_safe_static_guard_0__),
     `protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FCPUTimeDump_OnCPUTimeDump = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_88,"STAT_FCPUTimeDump_OnCPUTimeDump");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::__l2::
                StatPtr_STAT_FCPUTimeDump_OnCPUTimeDump,*pFVar10,L"STAT_FCPUTimeDump_OnCPUTimeDump",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::__l2
                         ::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_FCPUTimeDump_OnCPUTimeDump;
  if (_StatPtr_STAT_FCPUTimeDump_OnCPUTimeDump == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_80,"STAT_FCPUTimeDump_OnCPUTimeDump");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::__l2
                          ::StatPtr_STAT_FCPUTimeDump_OnCPUTimeDump,*pFVar10,
                         L"STAT_FCPUTimeDump_OnCPUTimeDump","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar8 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0] = 0;
      bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar5) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformTime.cpp"
                   ,0xde);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14164e766;
    }
  }
  bVar4 = false;
  FVar13 = local_78;
LAB_14164e766:
  iVar2 = (this->CPUTimes).ArrayNum;
  uVar16 = uVar15;
  if (0 < iVar2) {
    do {
      uVar14 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar14 < (this->CPUTimes).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < (longlong)iVar2);
  }
  if (4 < (byte)LogGenericPlatformTime._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`protected:_bool___cdecl_FCPUTimeDump::OnCPUTimeDump(float)___ptr64'::__l5::
                LOG_Static,(FLogCategoryBase *)&LogGenericPlatformTime);
  }
  (this->CPUTimes).ArrayNum = 0;
  if ((this->CPUTimes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->CPUTimes).ArrayMax);
  }
  if (((bVar8) && (bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar8)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_68[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_68[0].StatData.Pad[4] = '\0';
      local_68[0].StatData.Pad[5] = '\0';
      local_68[0].StatData.Pad[6] = '\0';
      local_68[0].StatData.Pad[7] = '\0';
      local_68[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_68[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_68[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_68[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_68);
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
  return true;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// Abandon @ 145d0fb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::Abandon
          (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  undefined8 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FStatMessage FStack_50;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FRDGResourceDumpContext::FDumpGPUTask::GetStatId'::__l2::FStat_FDumpGPUTask>
      ::
      FThreadSafeStaticStat<_FRDGResourceDumpContext::FDumpGPUTask::GetStatId_::__l2::FStat_FDumpGPUTask>
                (&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FDumpGPUTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FDumpGPUTask;
  if (_StatPtr_FDumpGPUTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName((FName *)&FStack_50,"FDumpGPUTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FDumpGPUTask,*pFVar7,L"FDumpGPUTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar8->Name;
  bVar4 = false;
  bVar6 = false;
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_68.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_68.s.LowPart = FVar12.Value;
        LStack_68.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_68.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_68.s.LowPart = FVar12.Value;
      LStack_68.s.HighPart = uVar10;
      FStack_60 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = FStack_60.ComparisonIndex.Value;
      goto LAB_145d1cd72;
    }
  }
  bVar5 = false;
  FVar13 = FStack_60;
  FVar12.Value = 0;
LAB_145d1cd72:
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Task).TaskCallback);
  plVar2 = *(longlong **)&(this->Task).TaskCallback.field_0x28;
  pcVar3 = *(code **)&(this->Task).TaskCallback;
  plVar11 = (longlong *)&(this->Task).TaskCallback.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  (*pcVar3)(uVar9);
  if (this != (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      FStack_50.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&LStack_68);
      FStack_50.StatData.Pad[4] = '\0';
      FStack_50.StatData.Pad[5] = '\0';
      FStack_50.StatData.Pad[6] = '\0';
      FStack_50.StatData.Pad[7] = '\0';
      FStack_50.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_50.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_50.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_50.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_50);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 145d1cbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  undefined8 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FStatMessage FStack_50;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FRDGResourceDumpContext::FDumpGPUTask::GetStatId'::__l2::FStat_FDumpGPUTask>
      ::
      FThreadSafeStaticStat<_FRDGResourceDumpContext::FDumpGPUTask::GetStatId_::__l2::FStat_FDumpGPUTask>
                (&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FDumpGPUTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FDumpGPUTask;
  if (_StatPtr_FDumpGPUTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName((FName *)&FStack_50,"FDumpGPUTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FDumpGPUTask,*pFVar7,L"FDumpGPUTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar8->Name;
  bVar4 = false;
  bVar6 = false;
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_68.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_68.s.LowPart = FVar12.Value;
        LStack_68.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_68.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_68.s.LowPart = FVar12.Value;
      LStack_68.s.HighPart = uVar10;
      FStack_60 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = FStack_60.ComparisonIndex.Value;
      goto LAB_145d1cd72;
    }
  }
  bVar5 = false;
  FVar13 = FStack_60;
  FVar12.Value = 0;
LAB_145d1cd72:
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Task).TaskCallback);
  plVar2 = *(longlong **)&(this->Task).TaskCallback.field_0x28;
  pcVar3 = *(code **)&(this->Task).TaskCallback;
  plVar11 = (longlong *)&(this->Task).TaskCallback.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  (*pcVar3)(uVar9);
  if (this != (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      FStack_50.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&LStack_68);
      FStack_50.StatData.Pad[4] = '\0';
      FStack_50.StatData.Pad[5] = '\0';
      FStack_50.StatData.Pad[6] = '\0';
      FStack_50.StatData.Pad[7] = '\0';
      FStack_50.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_50.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_50.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_50.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_50);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 145d1cbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::DoWork
          (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  undefined8 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_68;
  FName local_60;
  FStatMessage local_50;
  FInheritedContextScope local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_40);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FRDGResourceDumpContext::FDumpGPUTask::GetStatId'::__l2::FStat_FDumpGPUTask>
      ::
      FThreadSafeStaticStat<_FRDGResourceDumpContext::FDumpGPUTask::GetStatId_::__l2::FStat_FDumpGPUTask>
                (&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FDumpGPUTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FDumpGPUTask;
  if (_StatPtr_FDumpGPUTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_50,"FDumpGPUTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FRDGResourceDumpContext::FDumpGPUTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FDumpGPUTask,*pFVar7,L"FDumpGPUTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar8->Name;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_68.s,(pTVar8->StatDescriptionAnsi).Ptr)
      ;
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.s.LowPart = FVar12.Value;
        local_68.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_68.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_68.s.LowPart = FVar12.Value;
      local_68.s.HighPart = uVar10;
      local_60 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = local_60.ComparisonIndex.Value;
      goto LAB_145d1cd72;
    }
  }
  bVar5 = false;
  FVar13 = local_60;
  FVar12.Value = 0;
LAB_145d1cd72:
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Task).TaskCallback);
  plVar2 = *(longlong **)&(this->Task).TaskCallback.field_0x28;
  pcVar3 = *(code **)&(this->Task).TaskCallback;
  plVar11 = (longlong *)&(this->Task).TaskCallback.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  (*pcVar3)(uVar9);
  if (this != (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_68);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_40.MetaScope);
  FMemScope::~FMemScope(&local_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_40,local_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}


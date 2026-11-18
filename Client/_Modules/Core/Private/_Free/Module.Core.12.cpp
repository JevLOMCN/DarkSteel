// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 262

// OnConnection'' @ 140f0bbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FTraceAuxiliary::OnConnection__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FTraceAuxiliary::OnConnection,4000);
  FTraceAuxiliary::OnConnection._48_8_ = ___xmm_00000000000000020000000000000000;
  FTraceAuxiliary::OnConnection._56_8_ = _UNK_150631d48;
  FTraceAuxiliary::OnConnection._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FTraceAuxiliary::OnConnection__);
  return;
}

// OnSnapshotSaved'' @ 140f0bc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FTraceAuxiliary::OnSnapshotSaved__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FTraceAuxiliary::OnSnapshotSaved,4000);
  FTraceAuxiliary::OnSnapshotSaved._48_8_ = ___xmm_00000000000000020000000000000000;
  FTraceAuxiliary::OnSnapshotSaved._56_8_ = _UNK_150631d48;
  FTraceAuxiliary::OnSnapshotSaved._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FTraceAuxiliary::OnSnapshotSaved__);
  return;
}

// OnTraceStarted'' @ 140f0bc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FTraceAuxiliary::OnTraceStarted__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FTraceAuxiliary::OnTraceStarted,4000);
  FTraceAuxiliary::OnTraceStarted._48_8_ = ___xmm_00000000000000020000000000000000;
  FTraceAuxiliary::OnTraceStarted._56_8_ = _UNK_150631d48;
  FTraceAuxiliary::OnTraceStarted._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FTraceAuxiliary::OnTraceStarted__);
  return;
}

// OnTraceStopped'' @ 140f0bcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FTraceAuxiliary::OnTraceStopped__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FTraceAuxiliary::OnTraceStopped,4000);
  FTraceAuxiliary::OnTraceStopped._48_8_ = ___xmm_00000000000000020000000000000000;
  FTraceAuxiliary::OnTraceStopped._56_8_ = _UNK_150631d48;
  FTraceAuxiliary::OnTraceStopped._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FTraceAuxiliary::OnTraceStopped__);
  return;
}

// `dynamic_initializer_for_'AccumulatorTimerStartCmd'' @ 140f0bd10

void __cdecl _dynamic_initializer_for__AccumulatorTimerStartCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FLoadTimeTracker::StartAccumulatedLoadTimesStatic;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&AccumulatorTimerStartCmd,L"LoadTimes.StartAccumulating",
             L"Starts capturing fine-grained accumulated load time data",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__AccumulatorTimerStartCmd__);
  return;
}

// `dynamic_initializer_for_'AccumulatorTimerStopCmd'' @ 140f0be50

void __cdecl _dynamic_initializer_for__AccumulatorTimerStopCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FLoadTimeTracker::StopAccumulatedLoadTimesStatic;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&AccumulatorTimerStopCmd,L"LoadTimes.StopAccumulating",
             L"Stops capturing fine-grained accumulated load time data and dump the results",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__AccumulatorTimerStopCmd__);
  return;
}

// `dynamic_initializer_for_'AtModuleInit'' @ 140f0bf90

void __cdecl AQtimeProfiler::_dynamic_initializer_for__AtModuleInit__(void)

{
  code *pcVar1;
  TUniquePtr<FAQtimeExternalProfiler,TDefaultDelete<FAQtimeExternalProfiler>_> TVar2;
  TUniquePtr<FAQtimeExternalProfiler,TDefaultDelete<FAQtimeExternalProfiler>_> TVar3;
  bool bVar4;
  void *pvVar5;
  _func___cdecl_void_short *p_Var6;
  FAQtimeExternalProfiler *this;
  FAQtimeExternalProfiler *pFVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      this = ::operator_new(0x18);
      pFVar7 = (FAQtimeExternalProfiler *)0x0;
      if (this != (FAQtimeExternalProfiler *)0x0) {
        pFVar7 = FAQtimeExternalProfiler::FAQtimeExternalProfiler(this);
      }
      `public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerAQtime.Ptr = pFVar7;
      atexit(`AQtimeProfiler::FAtModuleInit::FAtModuleInit'::__l2::
             _dynamic_atexit_destructor_for__ProfilerAQtime__);
      _Init_thread_footer(&`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TVar2.Ptr = `public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
              ProfilerAQtime.Ptr;
  if ((`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
       ProfilerAQtime.Ptr)->DLLHandle != (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DLLHandle == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Windows\\AQtimeExternalProfiler.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar5 = FWindowsPlatformProcess::GetDllHandle(L"aqProf.dll");
  (TVar2.Ptr)->DLLHandle = pvVar5;
  if (pvVar5 != (void *)0x0) {
    p_Var6 = FWindowsPlatformProcess::GetDllExport(pvVar5,L"EnableProfiling");
    (TVar2.Ptr)->EnableProfiling = p_Var6;
    if (p_Var6 == (_func___cdecl_void_short *)0x0) {
      FWindowsPlatformProcess::FreeDllHandle((TVar2.Ptr)->DLLHandle);
      (TVar2.Ptr)->DLLHandle = (void *)0x0;
    }
  }
  TVar3.Ptr = `public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
              ProfilerAQtime.Ptr;
  if (((TVar2.Ptr)->DLLHandle == (void *)0x0) &&
     (`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerAQtime.Ptr != (FAQtimeExternalProfiler *)0x0)) {
    `public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
    ProfilerAQtime.Ptr = (FAQtimeExternalProfiler *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000140f0c05a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(TVar3.Ptr)->_padding_)(TVar3.Ptr,1);
    return;
  }
  return;
}

// `dynamic_initializer_for_'AtModuleInit'' @ 140f0c0c0

void __cdecl ConcurrencyViewerProfiler::_dynamic_initializer_for__AtModuleInit__(void)

{
  TUniquePtr<FConcurrencyViewerExternalProfiler,TDefaultDelete<FConcurrencyViewerExternalProfiler>_>
  TVar1;
  bool bVar2;
  FConcurrencyViewerExternalProfiler *this;
  FConcurrencyViewerExternalProfiler *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      this = ::operator_new(0x10);
      pFVar3 = (FConcurrencyViewerExternalProfiler *)0x0;
      if (this != (FConcurrencyViewerExternalProfiler *)0x0) {
        pFVar3 = FConcurrencyViewerExternalProfiler::FConcurrencyViewerExternalProfiler(this);
      }
      `public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
      ::Profiler.Ptr = pFVar3;
      atexit(`ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit'::__l2::
             _dynamic_atexit_destructor_for__Profiler__);
      _Init_thread_footer(&`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar2 = ConcurrencyVisualizerInitialize
                    ((`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                      ::__l2::Profiler.Ptr)->MaxDepth);
  TVar1 = `public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::
          __l2::Profiler;
  if ((!bVar2) &&
     (`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
      ::Profiler.Ptr != (FConcurrencyViewerExternalProfiler *)0x0)) {
    `public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
    Profiler.Ptr = (FConcurrencyViewerExternalProfiler *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000140f0c11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(TVar1.Ptr)->_padding_)(TVar1.Ptr,1);
    return;
  }
  return;
}

// `dynamic_initializer_for_'AtModuleInit'' @ 140f0c180

void __cdecl PIXProfiler::_dynamic_initializer_for__AtModuleInit__(void)

{
  TUniquePtr<FPIXExternalProfiler,TDefaultDelete<FPIXExternalProfiler>_> TVar1;
  bool bVar2;
  FPIXExternalProfiler *this;
  FPIXExternalProfiler *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      this = ::operator_new(0x10);
      pFVar3 = (FPIXExternalProfiler *)0x0;
      if (this != (FPIXExternalProfiler *)0x0) {
        pFVar3 = FPIXExternalProfiler::FPIXExternalProfiler(this);
      }
      `public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::ProfilerPIX.
      Ptr = pFVar3;
      atexit(`PIXProfiler::FAtModuleInit::FAtModuleInit'::__l2::
             _dynamic_atexit_destructor_for__ProfilerPIX__);
      _Init_thread_footer(&`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar2 = FPIXExternalProfiler::Initialize
                    (`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
                     ::ProfilerPIX.Ptr);
  TVar1 = `public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
          ProfilerPIX;
  if ((!bVar2) &&
     (`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::ProfilerPIX.
      Ptr != (FPIXExternalProfiler *)0x0)) {
    `public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::ProfilerPIX.Ptr
         = (FPIXExternalProfiler *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000140f0c1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(TVar1.Ptr)->_padding_)(TVar1.Ptr,1);
    return;
  }
  return;
}

// `dynamic_initializer_for_'AtModuleInit'' @ 140f0c240

void __cdecl SuperluminalProfiler::_dynamic_initializer_for__AtModuleInit__(void)

{
  SuperluminalExternalProfiler *this;
  SuperluminalExternalProfiler *pSVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      this = ::operator_new(8);
      pSVar1 = (SuperluminalExternalProfiler *)0x0;
      if (this != (SuperluminalExternalProfiler *)0x0) {
        pSVar1 = SuperluminalExternalProfiler::SuperluminalExternalProfiler(this);
      }
      `public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerSuperluminal.Ptr = pSVar1;
      atexit(`SuperluminalProfiler::FAtModuleInit::FAtModuleInit'::__l2::
             _dynamic_atexit_destructor_for__ProfilerSuperluminal__);
      _Init_thread_footer(&`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140f0c275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)
               *`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::
                __l2::ProfilerSuperluminal.Ptr + 0x58))();
  return;
}

// `dynamic_initializer_for_'AtModuleInit'' @ 140f0c2d0

void __cdecl VSPerfProfiler::_dynamic_initializer_for__AtModuleInit__(void)

{
  TUniquePtr<FVSPerfExternalProfiler,TDefaultDelete<FVSPerfExternalProfiler>_> TVar1;
  bool bVar2;
  FVSPerfExternalProfiler *this;
  FVSPerfExternalProfiler *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      this = ::operator_new(8);
      pFVar3 = (FVSPerfExternalProfiler *)0x0;
      if (this != (FVSPerfExternalProfiler *)0x0) {
        pFVar3 = FVSPerfExternalProfiler::FVSPerfExternalProfiler(this);
      }
      `public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerVSPerf.Ptr = pFVar3;
      atexit(`VSPerfProfiler::FAtModuleInit::FAtModuleInit'::__l2::
             _dynamic_atexit_destructor_for__ProfilerVSPerf__);
      _Init_thread_footer(&`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar2 = VSPerfInitialize();
  TVar1 = `public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
          ProfilerVSPerf;
  if ((!bVar2) &&
     (`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerVSPerf.Ptr != (FVSPerfExternalProfiler *)0x0)) {
    `public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
    ProfilerVSPerf.Ptr = (FVSPerfExternalProfiler *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000140f0c323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*TVar1.Ptr)(TVar1.Ptr,1);
    return;
  }
  return;
}

// `dynamic_initializer_for_'AtModuleInit'' @ 140f0c380

void __cdecl VTuneProfiler::_dynamic_initializer_for__AtModuleInit__(void)

{
  FAtModuleInit::FAtModuleInit(&AtModuleInit);
  return;
}

// `dynamic_initializer_for_'BookmarkChannelReg'' @ 140f0c3a0

void __cdecl _dynamic_initializer_for__BookmarkChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&BookmarkChannelObject,"BookmarkChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'ContextSwitchChannelReg'' @ 140f0c3d0

void __cdecl _dynamic_initializer_for__ContextSwitchChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.bReadOnly = false;
  local_18.Desc = "CPU context switches";
  UE::Trace::FChannel::Setup
            ((FChannel *)&ContextSwitchChannelObject,"ContextSwitchChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'FInstanceCountingDumpCommand'' @ 140f0c410

void __cdecl _dynamic_initializer_for__FInstanceCountingDumpCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FInstanceCountingObject::LogCounts;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"LogCountedInstances",
                      L"Dumps count of all tracked FInstanceCountingObject\'s",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&FInstanceCountingDumpCommand,pIVar5)
  ;
  FInstanceCountingDumpCommand._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__FInstanceCountingDumpCommand__);
  return;
}

// `dynamic_initializer_for_'FileChannelReg'' @ 140f0c5b0

void __cdecl _dynamic_initializer_for__FileChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&FileChannelObject,"FileChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'FrameChannelReg'' @ 140f0c5e0

void __cdecl _dynamic_initializer_for__FrameChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&FrameChannelObject,"FrameChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'GGetMapNameDelegate'' @ 140f0c610

void __cdecl _dynamic_initializer_for__GGetMapNameDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGetMapNameDelegate__);
  return;
}

// `dynamic_initializer_for_'GStaticStringTracer'' @ 140f0c630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__GStaticStringTracer__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GStaticStringTracer,4000);
  GStaticStringTracer.TracedWideStrings.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  GStaticStringTracer.TracedWideStrings.Elements._48_8_ = _UNK_150631d98;
  GStaticStringTracer.TracedWideStrings.Elements._0_8_ = 0;
  GStaticStringTracer.TracedWideStrings.Elements._8_8_ = 0;
  GStaticStringTracer.TracedWideStrings.Elements._32_8_ = 0;
  GStaticStringTracer.TracedWideStrings.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GStaticStringTracer.TracedWideStrings.HashSize = 0;
  GStaticStringTracer.TracedAnsiStrings.Elements._0_8_ = 0;
  GStaticStringTracer.TracedAnsiStrings.Elements._8_8_ = 0;
  GStaticStringTracer.TracedAnsiStrings.Elements._32_8_ = 0;
  GStaticStringTracer.TracedAnsiStrings.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  GStaticStringTracer.TracedAnsiStrings.Elements._48_8_ = _UNK_150631d98;
  GStaticStringTracer.TracedAnsiStrings.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GStaticStringTracer.TracedAnsiStrings.HashSize = 0;
  atexit(_dynamic_atexit_destructor_for__GStaticStringTracer__);
  return;
}

// `dynamic_initializer_for_'GThreadDebugInfoTLSID'' @ 140f0c6c0

void __cdecl _dynamic_initializer_for__GThreadDebugInfoTLSID__(void)

{
  GThreadDebugInfoTLSID = TlsAlloc();
  return;
}

// `dynamic_initializer_for_'GTraceAuxiliary'' @ 140f0c6e0

void __cdecl _dynamic_initializer_for__GTraceAuxiliary__(void)

{
  atexit(_dynamic_atexit_destructor_for__GTraceAuxiliary__);
  return;
}

// `dynamic_initializer_for_'IoStoreChannelReg'' @ 140f0c700

void __cdecl _dynamic_initializer_for__IoStoreChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&IoStoreChannelObject,"IoStoreChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_TraceLog'' @ 140f0c730

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_TraceLog__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_TraceLog,L"TraceLog",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,
             None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_TraceLog_BlockPool'' @ 140f0c780

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_TraceLog_BlockPool__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_TraceLog_BlockPool,L"TraceLog_BlockPool",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_TraceLog_Cache'' @ 140f0c7d0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_TraceLog_Cache__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_TraceLog_Cache,L"TraceLog_Cache",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_TraceLog_FixedBuffers'' @ 140f0c820

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_TraceLog_FixedBuffers__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_TraceLog_FixedBuffers,L"TraceLog_FixedBuffers",(FName)0x0,(FName)0x0
             ,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_TraceLog_SharedBuffers'' @ 140f0c870

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_TraceLog_SharedBuffers__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_TraceLog_SharedBuffers,L"TraceLog_SharedBuffers",(FName)0x0,
             (FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LoadTimerDumpCmd'' @ 140f0c8c0

void __cdecl _dynamic_initializer_for__LoadTimerDumpCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FLoadTimeTracker::DumpHighLevelLoadTimesStatic;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LoadTimerDumpCmd,L"LoadTimes.DumpTracking",L"Dump high level load times being tracked"
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__LoadTimerDumpCmd__);
  return;
}

// `dynamic_initializer_for_'LoadTimerDumpLowCmd'' @ 140f0ca00

void __cdecl _dynamic_initializer_for__LoadTimerDumpLowCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FLoadTimeTracker::DumpRawLoadTimesStatic;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LoadTimerDumpLowCmd,L"LoadTimes.DumpTrackingLow",
             L"Dump low level load times being tracked",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__LoadTimerDumpLowCmd__);
  return;
}

// `dynamic_initializer_for_'LoadTimerResetCmd'' @ 140f0cb40

void __cdecl _dynamic_initializer_for__LoadTimerResetCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FLoadTimeTracker::ResetRawLoadTimesStatic;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LoadTimerResetCmd,L"LoadTimes.ResetTracking",L"Reset load time tracking",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__LoadTimerResetCmd__);
  return;
}

// `dynamic_initializer_for_'LogExternalProfiler'' @ 140f0cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogExternalProfiler__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogExternalProfiler,L"LogExternalProfiler",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogExternalProfiler__);
  return;
}

// `dynamic_initializer_for_'LogHistograms'' @ 140f0ccc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHistograms__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHistograms,L"LogHistograms",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHistograms__);
  return;
}

// `dynamic_initializer_for_'LogInstanceCount'' @ 140f0cd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInstanceCount__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInstanceCount,L"LogInstanceCount",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInstanceCount__);
  return;
}

// `dynamic_initializer_for_'LogPlatformEvents'' @ 140f0cd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPlatformEvents__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPlatformEvents,L"LogPlatformEvents",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPlatformEvents__);
  return;
}

// `dynamic_initializer_for_'LogTrace'' @ 140f0cd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTrace__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTrace,L"LogTrace",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTrace__);
  return;
}

// `dynamic_initializer_for_'MemAllocChannelReg'' @ 140f0cdc0

void __cdecl _dynamic_initializer_for__MemAllocChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.bReadOnly = true;
  local_18.Desc = "Memory allocations";
  UE::Trace::FChannel::Setup(&MemAllocChannelObject,"MemAllocChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'MetadataChannelReg'' @ 140f0ce00

void __cdecl _dynamic_initializer_for__MetadataChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&MetadataChannelObject,"MetadataChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'ModuleChannelReg'' @ 140f0ce30

void __cdecl _dynamic_initializer_for__ModuleChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.bReadOnly = true;
  local_18.Desc = "Module information needed for symbols resolution";
  UE::Trace::FChannel::Setup(&ModuleChannelObject,"ModuleChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'RegionChannelReg'' @ 140f0ce70

void __cdecl _dynamic_initializer_for__RegionChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&RegionChannelObject,"RegionChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'ScreenshotChannelReg'' @ 140f0cea0

void __cdecl _dynamic_initializer_for__ScreenshotChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&ScreenshotChannelObject,"ScreenshotChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'StackSamplingChannelReg'' @ 140f0ced0

void __cdecl _dynamic_initializer_for__StackSamplingChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.bReadOnly = false;
  local_18.Desc = "Stack sampling";
  UE::Trace::FChannel::Setup
            ((FChannel *)&StackSamplingChannelObject,"StackSamplingChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryChannelDisableCmd'' @ 140f0cf10

void __cdecl _dynamic_initializer_for__TraceAuxiliaryChannelDisableCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliaryDisableChannels;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryChannelDisableCmd,L"Trace.Disable",
             L"[ChannelSet] - Disables a set of channels. ChannelSet is comma-separated list of trace channels/presets to be disabled. If no channel is specified, it disables all channels."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryChannelDisableCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryChannelEnableCmd'' @ 140f0d050

void __cdecl _dynamic_initializer_for__TraceAuxiliaryChannelEnableCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliaryEnableChannels;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryChannelEnableCmd,L"Trace.Enable",
             L"[ChannelSet] - Enables a set of channels. ChannelSet is comma-separated list of trace channels/presets to be enabled."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryChannelEnableCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryFileCmd'' @ 140f0d190

void __cdecl _dynamic_initializer_for__TraceAuxiliaryFileCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliaryFile;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryFileCmd,L"Trace.File",
             L"[Path] [ChannelSet] - Starts tracing to a file. ChannelSet is comma-separated list of trace channels/presets to be enabled. Either Path or ChannelSet can be excluded."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryFileCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryPauseCmd'' @ 140f0d2d0

void __cdecl _dynamic_initializer_for__TraceAuxiliaryPauseCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = TraceAuxiliaryPause;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryPauseCmd,L"Trace.Pause",
             L"Pauses all trace channels currently sending events.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryPauseCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryResumeCmd'' @ 140f0d410

void __cdecl _dynamic_initializer_for__TraceAuxiliaryResumeCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = TraceAuxiliaryResume;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryResumeCmd,L"Trace.Resume",
             L"Resumes tracing that was previously paused (re-enables the paused channels).",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryResumeCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliarySendCmd'' @ 140f0d550

void __cdecl _dynamic_initializer_for__TraceAuxiliarySendCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliarySend;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliarySendCmd,L"Trace.Send",
             L"<Host> [ChannelSet] - Starts tracing to a trace store. <Host> is the IP address or hostname of the trace store. ChannelSet is comma-separated list of trace channels/presets to be enabled."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliarySendCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliarySnapshotFileCmd'' @ 140f0d690

void __cdecl _dynamic_initializer_for__TraceAuxiliarySnapshotFileCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliarySnapshotFile;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliarySnapshotFileCmd,L"Trace.SnapshotFile",
             L"[Path] - Writes a snapshot of the current in-memory trace buffer to a file.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliarySnapshotFileCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliarySnapshotSendCmd'' @ 140f0d7d0

void __cdecl _dynamic_initializer_for__TraceAuxiliarySnapshotSendCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliarySnapshotSend;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliarySnapshotSendCmd,L"Trace.SnapshotSend",
             L"<Host> <Port> - Sends a snapshot of the current in-memory trace buffer to a server. If no host is specified \'localhost\' is used."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliarySnapshotSendCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryStartCmd'' @ 140f0d910

void __cdecl _dynamic_initializer_for__TraceAuxiliaryStartCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceAuxiliaryStart;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryStartCmd,L"Trace.Start",
             L"[ChannelSet] - (Deprecated: Use Trace.File instead.) Starts tracing to a file. ChannelSet is comma-separated list of trace channels/presets to be enabled."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryStartCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryStatusCmd'' @ 140f0da50

void __cdecl _dynamic_initializer_for__TraceAuxiliaryStatusCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = TraceAuxiliaryStatus;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryStatusCmd,L"Trace.Status",L"Prints Trace status to console.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryStatusCmd__);
  return;
}

// `dynamic_initializer_for_'TraceAuxiliaryStopCmd'' @ 140f0db90

void __cdecl _dynamic_initializer_for__TraceAuxiliaryStopCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = TraceAuxiliaryStop;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceAuxiliaryStopCmd,L"Trace.Stop",L"Stops tracing profiling events.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceAuxiliaryStopCmd__);
  return;
}

// `dynamic_initializer_for_'TraceBookmarkCmd'' @ 140f0dcd0

void __cdecl _dynamic_initializer_for__TraceBookmarkCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceBookmark;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceBookmarkCmd,L"Trace.Bookmark",
             L"[Name] - Emits a TRACE_BOOKMARK() event with the given string name.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceBookmarkCmd__);
  return;
}

// `dynamic_initializer_for_'TraceRegionBeginCmd'' @ 140f0de10

void __cdecl _dynamic_initializer_for__TraceRegionBeginCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceRegionBegin;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceRegionBeginCmd,L"Trace.RegionBegin",
             L"[Name] - Emits a TRACE_BEGIN_REGION() event with the given string name.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceRegionBeginCmd__);
  return;
}

// `dynamic_initializer_for_'TraceRegionEndCmd'' @ 140f0df50

void __cdecl _dynamic_initializer_for__TraceRegionEndCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TraceRegionEnd;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TraceRegionEndCmd,L"Trace.RegionEnd",
             L"[Name] - Emits a TRACE_END_REGION() event with the given string name.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TraceRegionEndCmd__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Trace'' @ 140f0e090

void __cdecl _dynamic_initializer_for___GCsvCategory_Trace__(void)

{
  FString::operator=(&_GCsvCategory_Trace.Name,L"Trace");
  _GCsvCategory_Trace.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Trace.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Trace__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Bandwidth_Emitted'' @ 140f0e0e0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Bandwidth_Emitted__(void)

{
  __GTraceCounterTrace_Bandwidth_Emitted.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Bandwidth/Emitted",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Bandwidth_Emitted.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_Emitted__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Bandwidth_EmittedNotTraced'' @ 140f0e120

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Bandwidth_EmittedNotTraced__(void)

{
  __GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Bandwidth/EmittedNotTraced",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_EmittedNotTraced__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Bandwidth_Sent'' @ 140f0e160

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Bandwidth_Sent__(void)

{
  __GTraceCounterTrace_Bandwidth_Sent.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Bandwidth/Sent",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Bandwidth_Sent.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_Sent__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Bandwidth_Traced'' @ 140f0e1a0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Bandwidth_Traced__(void)

{
  __GTraceCounterTrace_Bandwidth_Traced.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Bandwidth/Traced",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Bandwidth_Traced.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_Traced__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_MemoryError'' @ 140f0e1e0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_MemoryError__(void)

{
  __GTraceCounterTrace_MemoryError.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/MemoryError",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_MemoryError.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_MemoryError__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_MemoryUsed'' @ 140f0e220

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_MemoryUsed__(void)

{
  __GTraceCounterTrace_MemoryUsed.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/MemoryUsed",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_MemoryUsed.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_MemoryUsed__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_BlockPool'' @ 140f0e260

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_BlockPool__(void)

{
  __GTraceCounterTrace_Memory_BlockPool.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/BlockPool",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Memory_BlockPool.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_BlockPool__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_Cache'' @ 140f0e2a0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_Cache__(void)

{
  __GTraceCounterTrace_Memory_Cache.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/Cache",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Memory_Cache.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_Cache_Unused'' @ 140f0e2e0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_Cache_Unused__(void)

{
  __GTraceCounterTrace_Memory_Cache_Unused.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/Cache/Unused",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Memory_Cache_Unused.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache_Unused__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_Cache_Used'' @ 140f0e320

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_Cache_Used__(void)

{
  __GTraceCounterTrace_Memory_Cache_Used.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/Cache/Used",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Memory_Cache_Used.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache_Used__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_Cache_Wasted'' @ 140f0e360

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_Cache_Wasted__(void)

{
  __GTraceCounterTrace_Memory_Cache_Wasted.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/Cache/Wasted",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Memory_Cache_Wasted.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache_Wasted__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_FixedBuffers'' @ 140f0e3a0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_FixedBuffers__(void)

{
  __GTraceCounterTrace_Memory_FixedBuffers.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/FixedBuffers",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTrace_Memory_FixedBuffers.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_FixedBuffers__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTrace_Memory_SharedBuffers'' @ 140f0e3e0

void __cdecl _dynamic_initializer_for____GTraceCounterTrace_Memory_SharedBuffers__(void)

{
  __GTraceCounterTrace_Memory_SharedBuffers.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Trace/Memory/SharedBuffers",TraceCounterType_Int,TraceCounterDisplayHint_Memory)
  ;
  LOCK();
  __GTraceCounterTrace_Memory_SharedBuffers.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_SharedBuffers__);
  return;
}

// `scalar_deleting_destructor' @ 14197cf80

void * __thiscall
FAQtimeExternalProfiler::_scalar_deleting_destructor_(FAQtimeExternalProfiler *this,uint param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  this->_padding_ = (longlong)&___7FAQtimeExternalProfiler__6B_;
  if (this->DLLHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DLLHandle);
    this->DLLHandle = (void *)0x0;
  }
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,&this->DLLHandle);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197d100

void * __thiscall
FConcurrencyViewerExternalProfiler::_scalar_deleting_destructor_
          (FConcurrencyViewerExternalProfiler *this,uint param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  int *piVar3;
  
  this->_padding_ = (longlong)&___7FConcurrencyViewerExternalProfiler__6B_;
  pIVar2 = IModularFeatures::Get();
  piVar3 = &this->MaxDepth;
  if (this == (FConcurrencyViewerExternalProfiler *)0x0) {
    piVar3 = (int *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,piVar3);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197d460

void * __thiscall
FPIXExternalProfiler::_scalar_deleting_destructor_(FPIXExternalProfiler *this,uint param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  this->_padding_ = (longlong)&___7FPIXExternalProfiler__6B_;
  if (this->WinPixEventRuntimeHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->WinPixEventRuntimeHandle);
    this->WinPixEventRuntimeHandle = (void *)0x0;
  }
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,&this->WinPixEventRuntimeHandle);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// GetProfilerName @ 14197d560

wchar_t * __thiscall
SuperluminalExternalProfiler::GetProfilerName(SuperluminalExternalProfiler *this)

{
  return L"Superluminal";
}

// FrameSync @ 14197d570

void __thiscall SuperluminalExternalProfiler::FrameSync(SuperluminalExternalProfiler *this)

{
  return;
}

// ProfilerPauseFunction @ 14197d580

void __thiscall
SuperluminalExternalProfiler::ProfilerPauseFunction(SuperluminalExternalProfiler *this)

{
  return;
}

// ProfilerResumeFunction @ 14197d590

void __thiscall
SuperluminalExternalProfiler::ProfilerResumeFunction(SuperluminalExternalProfiler *this)

{
  return;
}

// StartScopedEvent @ 14197d5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SuperluminalExternalProfiler::StartScopedEvent
          (SuperluminalExternalProfiler *this,FColor *param_1,wchar_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = (float)(param_1->field0_0x0)._s_0.B;
  fVar1 = fVar6 * ___real_3d42a455;
  fVar3 = (float)(param_1->field0_0x0)._s_0.G;
  fVar2 = (float)(param_1->field0_0x0)._s_0.R;
  fVar5 = fVar3 * ___real_3e465beb;
  fVar4 = fVar2 * ___real_3dca1380;
  SuperLuminalStartScopedEventWide
            (param_2,(wchar_t *)0x0,
             ((((int)(fVar2 * ___real_3f44c78e + fVar5 + fVar1) & 0xffU) << 8 |
              (int)(fVar3 * ___real_3f5d1c19 + fVar4 + fVar1) & 0xffU) << 8 |
             (int)(fVar5 + fVar4 + fVar6 * ___real_3f37af63) & 0xffU) << 8);
  return;
}

// StartScopedEvent @ 14197d650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SuperluminalExternalProfiler::StartScopedEvent
          (SuperluminalExternalProfiler *this,FColor *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = (float)(param_1->field0_0x0)._s_0.B;
  fVar1 = fVar6 * ___real_3d42a455;
  fVar3 = (float)(param_1->field0_0x0)._s_0.G;
  fVar2 = (float)(param_1->field0_0x0)._s_0.R;
  fVar5 = fVar3 * ___real_3e465beb;
  fVar4 = fVar2 * ___real_3dca1380;
  SuperLuminalStartScopedEvent
            (param_2,(char *)0x0,
             ((((int)(fVar2 * ___real_3f44c78e + fVar5 + fVar1) & 0xffU) << 8 |
              (int)(fVar3 * ___real_3f5d1c19 + fVar4 + fVar1) & 0xffU) << 8 |
             (int)(fVar5 + fVar4 + fVar6 * ___real_3f37af63) & 0xffU) << 8);
  return;
}

// EndScopedEvent @ 14197d700

void __thiscall SuperluminalExternalProfiler::EndScopedEvent(SuperluminalExternalProfiler *this)

{
  return;
}

// Initialize @ 14197d710

bool __thiscall SuperluminalExternalProfiler::Initialize(SuperluminalExternalProfiler *this)

{
  return true;
}

// `scalar_deleting_destructor' @ 14197d720

void * __thiscall
SuperluminalExternalProfiler::_scalar_deleting_destructor_
          (SuperluminalExternalProfiler *this,uint param_1)

{
  *this = (SuperluminalExternalProfiler)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197d7a0

void * __thiscall
FVSPerfExternalProfiler::_scalar_deleting_destructor_(FVSPerfExternalProfiler *this,uint param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FVSPerfExternalProfiler *pFVar3;
  
  *this = (FVSPerfExternalProfiler)&___7FVSPerfExternalProfiler__6B_;
  VSPerfDeinitialize();
  pIVar2 = IModularFeatures::Get();
  pFVar3 = this + 1;
  if (this == (FVSPerfExternalProfiler *)0x0) {
    pFVar3 = (FVSPerfExternalProfiler *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,pFVar3);
  *this = (FVSPerfExternalProfiler)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197d8a0

void * __thiscall
TThreadSingleton<FVTunePerThreadHandleMap>::_scalar_deleting_destructor_
          (TThreadSingleton<FVTunePerThreadHandleMap> *this,uint param_1)

{
  ~TThreadSingleton<FVTunePerThreadHandleMap>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197da30

void * __thiscall
FExternalProfiler::_scalar_deleting_destructor_(FExternalProfiler *this,uint param_1)

{
  *this = (FExternalProfiler)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197da70

void * __thiscall
FVTunePerThreadHandleMap::_scalar_deleting_destructor_(FVTunePerThreadHandleMap *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->VTuneHandleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VTuneHandleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,___itt_string_handle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,___itt_string_handle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,___itt_string_handle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VTuneHandleMap);
  TThreadSingleton<FVTunePerThreadHandleMap>::~TThreadSingleton<FVTunePerThreadHandleMap>
            ((TThreadSingleton<FVTunePerThreadHandleMap> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14197dd60

void * __thiscall
FVTuneExternalProfiler::_scalar_deleting_destructor_(FVTuneExternalProfiler *this,uint param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  this->_padding_ = (longlong)&___7FVTuneExternalProfiler__6B_;
  if (this->DLLHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DLLHandle);
    this->DLLHandle = (void *)0x0;
  }
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,&this->DLLHandle);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14197de60

void __cdecl
`CallstackTrace_CreateInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (bool param_1,void *param_2,wchar_t *param_3)

{
  if (param_1) {
    FBacktracer::AddModule(FBacktracer::Instance,(ulong64)param_2,param_3);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14197df50

void __cdecl `MemoryTrace_CreateInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  GDoPumpTrace = true;
  return;
}

// <lambda_invoker_cdecl> @ 14197df60

void __cdecl
`TraceAuxiliaryStatus'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (char *param_1,bool param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  wchar_t *pwVar4;
  TStringBuilderBase<wchar_t> *this;
  int iVar5;
  size_t sVar3;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    sVar3 = strlen(param_1);
    iVar2 = (int)sVar3;
  }
  if (iVar2 + -7 < iVar2) {
    iVar2 = iVar2 + -7;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  this = (TStringBuilderBase<wchar_t> *)(((ulonglong)param_2 ^ 1) * 0x428 + (longlong)param_3);
  iVar2 = *(int *)&this[0x21].Base;
  piVar1 = (int *)((longlong)&this[0x21].Base + 4);
  *(int *)&this[0x21].Base = iVar2 + 1;
  if (iVar2 != 0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L", ",2);
    *piVar1 = *piVar1 + 2;
  }
  if (100 < (uint)(*piVar1 + iVar5)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L"\n    ",5);
    *piVar1 = 4;
  }
  if (this->End < this->CurPos + iVar5) {
    TStringBuilderBase<wchar_t>::Extend(this,(longlong)iVar5);
  }
  if (iVar5 != 0) {
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,iVar5,param_1,iVar5);
    this->CurPos = pwVar4;
  }
  *piVar1 = *piVar1 + iVar5;
  return;
}

// AddLambda<`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_> @ 14197e170

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
AddLambda<_TraceAuxiliaryAddPostForkCallback_::__l2::<lambda_1>_>(void *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_> @ 14197e3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::AddLambda<_FTraceAuxiliary::Initialize_[::B]::<lambda_1>_>(void *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  FDelegateAllocation local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  InitializeCriticalSectionAndSpinCount(&local_60,4000);
  uVar8 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  EnterCriticalSection(&local_60);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
               ::_vftable_;
  }
  LeaveCriticalSection(&local_60);
  if ((this == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection(this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_60);
  if (((local_38.DelegateSize != 0) &&
      (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_38.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_60);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this,true);
    EnterCriticalSection(&local_60);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_38.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_60);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)((longlong)this + 0x30);
    if (iVar4 == *(int *)((longlong)this + 0x34)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 0x28),
                         (int *)((longlong)this + 0x34));
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 0x28) + (longlong)iVar4 * 0x10);
    *(int *)((longlong)this + 0x30) = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_60);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_38.DelegateAllocator;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_38.DelegateSize;
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (this != (void *)0x0) {
    LeaveCriticalSection(this);
  }
  EnterCriticalSection(&local_60);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  DeleteCriticalSection(&local_60);
  return (FDelegateHandle)(ulong64)param_1;
}

// DefaultConstructItems<FCompressedChunkInfo,__int64> @ 14197e5e0

void __cdecl DefaultConstructItems<FCompressedChunkInfo,__int64>(void *param_1,long64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// FindByPredicate<TArrayView<FExternalProfiler_*,int>_&,`FindProfilerByName'::__l2::<lambda_1>_> @ 141982ab0

FExternalProfiler ** __cdecl
AlgoImpl::
FindByPredicate<TArrayView<FExternalProfiler_*,int>_&,_FindProfilerByName_::__l2::<lambda_1>_>
          (TArrayView<FExternalProfiler_*,int> *param_1,<lambda_1> param_2)

{
  FExternalProfiler **ppFVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  FExternalProfiler **ppFVar5;
  bool bVar6;
  
  ppFVar5 = param_1->DataPtr;
  ppFVar1 = ppFVar5 + param_1->ArrayNum;
  do {
    if (ppFVar5 == ppFVar1) {
      return (FExternalProfiler **)0x0;
    }
    pwVar4 = (wchar_t *)(**(code **)((longlong)**ppFVar5 + 0x28))();
    iVar2 = (int)*(undefined8 *)&(param_2.Name)->Size;
    if (iVar2 == 0) {
      bVar6 = *pwVar4 == (wchar_t)*(undefined8 *)&(param_2.Name)->Size;
LAB_141982b17:
      if (bVar6) {
        return ppFVar5;
      }
    }
    else {
      iVar3 = FGenericPlatformStricmp::Strnicmp((param_2.Name)->DataPtr,pwVar4,(longlong)iVar2);
      if (iVar3 == 0) {
        bVar6 = pwVar4[iVar2] == L'\0';
        goto LAB_141982b17;
      }
    }
    ppFVar5 = ppFVar5 + 1;
  } while( true );
}

// HeapSortInternal<FBacktracer::FModule,int,FIdentityFunctor,`FBacktracer::AddModule'::__l45::<lambda_1>_> @ 141983be0

void __cdecl
AlgoImpl::
HeapSortInternal<FBacktracer::FModule,int,FIdentityFunctor,_FBacktracer::AddModule_::__l45::<lambda_1>_>
          (FModule *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModule *pFVar1;
  FModule *pFVar2;
  FFunction *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FModule *pFVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar17 = iVar14;
  iVar18 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_141983ced:
      if (iVar18 == 0) {
        iVar14 = param_2 + -1;
        lVar19 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar19;
          do {
            uVar5 = pFVar16->IdSize;
            uVar6 = pFVar16->NumFunctions;
            uVar7 = *(undefined4 *)&pFVar16->field_0xc;
            pFVar3 = param_1->Functions;
            uVar8 = param_1->Id;
            uVar9 = param_1->IdSize;
            uVar10 = param_1->NumFunctions;
            uVar11 = *(undefined4 *)&param_1->field_0xc;
            param_1->Id = pFVar16->Id;
            param_1->IdSize = uVar5;
            param_1->NumFunctions = uVar6;
            *(undefined4 *)&param_1->field_0xc = uVar7;
            param_1->Functions = pFVar16->Functions;
            pFVar16->Id = uVar8;
            pFVar16->IdSize = uVar9;
            pFVar16->NumFunctions = uVar10;
            *(undefined4 *)&pFVar16->field_0xc = uVar11;
            pFVar16->Functions = pFVar3;
            iVar17 = 0;
            if (1 < iVar14) {
              do {
                iVar18 = iVar17 * 2;
                iVar13 = iVar18 + 1;
                if (iVar18 + 2 < iVar14) {
                  if (param_1[(longlong)iVar18 + 2].Id < param_1[iVar13].Id) {
                    iVar13 = iVar18;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar1 = param_1 + iVar13;
                if (pFVar1->Id <= param_1[iVar17].Id) break;
                uVar5 = pFVar1->IdSize;
                uVar6 = pFVar1->NumFunctions;
                uVar7 = *(undefined4 *)&pFVar1->field_0xc;
                pFVar3 = param_1[iVar17].Functions;
                pFVar2 = param_1 + iVar17;
                uVar8 = pFVar2->Id;
                uVar9 = pFVar2->IdSize;
                uVar10 = pFVar2->NumFunctions;
                uVar11 = *(undefined4 *)&pFVar2->field_0xc;
                pFVar2 = param_1 + iVar17;
                pFVar2->Id = pFVar1->Id;
                pFVar2->IdSize = uVar5;
                pFVar2->NumFunctions = uVar6;
                *(undefined4 *)&pFVar2->field_0xc = uVar7;
                param_1[iVar17].Functions = pFVar1->Functions;
                pFVar1->Id = uVar8;
                pFVar1->IdSize = uVar9;
                pFVar1->NumFunctions = uVar10;
                *(undefined4 *)&pFVar1->field_0xc = uVar11;
                pFVar1->Functions = pFVar3;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar19 = lVar19 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar13 = iVar18 + -1;
      iVar14 = iVar17 + -2;
      iVar17 = iVar14;
      iVar18 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Id < param_1[iVar15].Id) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar16 = param_1 + iVar15;
    if (pFVar16->Id <= param_1[iVar13].Id) goto LAB_141983ced;
    uVar5 = pFVar16->IdSize;
    uVar6 = pFVar16->NumFunctions;
    uVar7 = *(undefined4 *)&pFVar16->field_0xc;
    iVar14 = iVar15 * 2 + 1;
    pFVar3 = param_1[iVar13].Functions;
    pFVar1 = param_1 + iVar13;
    uVar8 = pFVar1->Id;
    uVar9 = pFVar1->IdSize;
    uVar10 = pFVar1->NumFunctions;
    uVar11 = *(undefined4 *)&pFVar1->field_0xc;
    pFVar1 = param_1 + iVar13;
    pFVar1->Id = pFVar16->Id;
    pFVar1->IdSize = uVar5;
    pFVar1->NumFunctions = uVar6;
    *(undefined4 *)&pFVar1->field_0xc = uVar7;
    param_1[iVar13].Functions = pFVar16->Functions;
    pFVar16->Id = uVar8;
    pFVar16->IdSize = uVar9;
    pFVar16->NumFunctions = uVar10;
    *(undefined4 *)&pFVar16->field_0xc = uVar11;
    pFVar16->Functions = pFVar3;
    iVar13 = iVar15;
  } while( true );
}

// IntroSortInternal<FBacktracer::FModule,int,FIdentityFunctor,`FBacktracer::AddModule'::__l45::<lambda_1>_> @ 141983e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FBacktracer::FModule,int,FIdentityFunctor,_FBacktracer::AddModule_::__l45::<lambda_1>_>
          (FModule *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModule *pFVar1;
  FFunction *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  FModule *pFVar15;
  FModule *pFVar16;
  FModule *pFVar17;
  FModule *pFVar18;
  FModule *pFVar19;
  FModule *pFVar20;
  FModule **ppFVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FModule *local_348;
  FModule *local_338;
  FModule *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar22;
    memset(local_320,0,0x2e8);
    ppFVar21 = &local_338;
    do {
      pFVar15 = ppFVar21[1];
      pFVar20 = *ppFVar21;
      pFVar1 = ppFVar21[2];
      local_348._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
      pFVar19 = pFVar20;
      if ((int)local_348 != 0) {
LAB_141983f30:
        if (8 < iVar14) {
          uVar6 = pFVar19->IdSize;
          uVar7 = pFVar19->NumFunctions;
          uVar8 = *(undefined4 *)&pFVar19->field_0xc;
          pFVar17 = pFVar15 + 1;
          iVar14 = iVar14 / 2;
          pFVar20 = pFVar19 + iVar14;
          uVar9 = pFVar20->Id;
          uVar10 = pFVar20->IdSize;
          uVar11 = pFVar20->NumFunctions;
          uVar12 = *(undefined4 *)&pFVar20->field_0xc;
          pFVar2 = pFVar19[iVar14].Functions;
          pFVar20 = pFVar19 + iVar14;
          pFVar20->Id = pFVar19->Id;
          pFVar20->IdSize = uVar6;
          pFVar20->NumFunctions = uVar7;
          *(undefined4 *)&pFVar20->field_0xc = uVar8;
          pFVar19[iVar14].Functions = pFVar19->Functions;
          pFVar19->Id = uVar9;
          pFVar19->IdSize = uVar10;
          pFVar19->NumFunctions = uVar11;
          *(undefined4 *)&pFVar19->field_0xc = uVar12;
          pFVar19->Functions = pFVar2;
          pFVar20 = pFVar19;
LAB_141983f80:
          pFVar16 = pFVar20;
          pFVar20 = pFVar16 + 1;
          if (pFVar20 <= pFVar15) goto code_r0x000141983f89;
          goto LAB_141983f91;
        }
        for (; pFVar20 = pFVar19, pFVar1 = pFVar19, pFVar19 < pFVar15; pFVar15 = pFVar15 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar15) {
            if (pFVar20->Id < pFVar1->Id) {
              pFVar20 = pFVar1;
            }
          }
          uVar9 = pFVar20->Id;
          uVar10 = pFVar20->IdSize;
          uVar11 = pFVar20->NumFunctions;
          uVar12 = *(undefined4 *)&pFVar20->field_0xc;
          pFVar2 = pFVar20->Functions;
          uVar6 = pFVar15->IdSize;
          uVar7 = pFVar15->NumFunctions;
          uVar8 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar20->Id = pFVar15->Id;
          pFVar20->IdSize = uVar6;
          pFVar20->NumFunctions = uVar7;
          *(undefined4 *)&pFVar20->field_0xc = uVar8;
          pFVar20->Functions = pFVar15->Functions;
          pFVar15->Id = uVar9;
          pFVar15->IdSize = uVar10;
          pFVar15->NumFunctions = uVar11;
          *(undefined4 *)&pFVar15->field_0xc = uVar12;
          pFVar15->Functions = pFVar2;
        }
        goto LAB_1419840b2;
      }
LAB_1419840a2:
      local_348 = pFVar1;
      HeapSortInternal<FBacktracer::FModule,int,FIdentityFunctor,_FBacktracer::AddModule_::__l45::<lambda_1>_>
                (pFVar20,iVar14,param_3,param_4);
LAB_1419840b2:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_338 <= ppFVar21);
  }
  return;
code_r0x000141983f89:
  if (pFVar20->Id <= pFVar19->Id) goto LAB_141983f80;
LAB_141983f91:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar19) break;
  } while (pFVar19->Id <= pFVar17->Id);
  uVar3 = pFVar17->Id;
  uVar4 = pFVar17->IdSize;
  uVar5 = *(undefined8 *)&pFVar18[-1].NumFunctions;
  if (pFVar20 <= pFVar17) {
    uVar6 = pFVar20->Id;
    uVar7 = pFVar20->IdSize;
    uVar9 = pFVar16[1].NumFunctions;
    uVar8 = *(undefined4 *)&pFVar16[1].field_0xc;
    pFVar2 = pFVar16[1].Functions;
    pFVar20->Id = uVar3;
    pFVar20->IdSize = uVar4;
    *(undefined8 *)&pFVar16[1].NumFunctions = uVar5;
    pFVar16[1].Functions = pFVar18[-1].Functions;
    pFVar17->Id = uVar6;
    pFVar17->IdSize = uVar7;
    pFVar18[-1].NumFunctions = uVar9;
    *(undefined4 *)&pFVar18[-1].field_0xc = uVar8;
    pFVar18[-1].Functions = pFVar2;
    goto LAB_141983f80;
  }
  uVar6 = pFVar19->Id;
  uVar7 = pFVar19->IdSize;
  uVar9 = pFVar19->NumFunctions;
  uVar8 = *(undefined4 *)&pFVar19->field_0xc;
  pFVar2 = pFVar19->Functions;
  lVar13 = (longlong)pFVar17 + (-0x18 - (longlong)pFVar19);
  local_348._0_4_ = (int)local_348 + -1;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  pFVar19->Id = uVar3;
  pFVar19->IdSize = uVar4;
  *(undefined8 *)&pFVar19->NumFunctions = uVar5;
  pFVar19->Functions = pFVar18[-1].Functions;
  pFVar17->Id = uVar6;
  pFVar17->IdSize = uVar7;
  pFVar18[-1].NumFunctions = uVar9;
  *(undefined4 *)&pFVar18[-1].field_0xc = uVar8;
  pFVar18[-1].Functions = pFVar2;
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)pFVar15 - (longlong)pFVar20) / 0x18) {
    if (pFVar20 < pFVar15) {
      *ppFVar21 = pFVar20;
      ppFVar21[1] = pFVar15;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar17 <= pFVar19 + 1) goto LAB_1419840b2;
    pFVar15 = pFVar18 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar17) {
      *ppFVar21 = pFVar19;
      ppFVar21[1] = pFVar18 + -2;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar15 <= pFVar20) goto LAB_1419840b2;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
  pFVar19 = pFVar20;
  if ((int)local_348 == 0) goto LAB_1419840a2;
  goto LAB_141983f30;
}

// MemoryTrace_ShouldEnable<char> @ 141984190

EMemoryTraceInit __cdecl MemoryTrace_ShouldEnable<char>(int param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulong64 uVar10;
  EMemoryTraceInit EVar11;
  uchar *puVar12;
  uchar *_Str;
  uchar *puVar13;
  int iVar14;
  size_t sVar15;
  longlong local_res18;
  TStringView<char8_t> local_b8;
  longlong local_a8;
  uchar *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  uchar *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  uchar *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  uchar *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<char8_t> local_58;
  
  EVar11 = Disabled;
  if (1 < param_1) {
    local_a8 = (longlong)param_1;
    local_res18 = 1;
    do {
      _Str = (uchar *)param_2[local_res18];
      sVar5 = 0;
      if (_Str != (uchar *)0x0) {
        sVar5 = strlen((char *)_Str);
      }
      iStack_90 = (int)sVar5;
      local_b8._12_4_ = uStack_8c;
      local_b8.Size = iStack_90;
      local_b8.DataPtr = _Str;
      local_98 = _Str;
      iVar1 = UE::String::FindFirstChar(&local_b8,'-',CaseSensitive);
      while (iVar1 != -1) {
        uVar8 = (uint)sVar5;
        uVar6 = uVar8;
        if ((int)(uVar8 - iVar1) < (int)uVar8) {
          uVar6 = uVar8 - iVar1;
        }
        sVar15 = 0;
        if (0 < (int)uVar6) {
          sVar15 = (size_t)uVar6;
        }
        iVar14 = (int)sVar15;
        local_b8.DataPtr = (uchar *)(longlong)iVar14;
        lVar9 = (longlong)(int)uVar8 - (longlong)local_b8.DataPtr;
        iVar1 = iVar14;
        if (iVar14 + -1 < iVar14) {
          iVar1 = iVar14 + -1;
        }
        iStack_80 = 0;
        if (0 < iVar1) {
          iStack_80 = iVar1;
        }
        local_88 = _Str + ((longlong)(int)uVar8 - (longlong)iStack_80);
        local_58._12_4_ = uStack_7c;
        local_58.Size = iStack_80;
        local_58.DataPtr = local_88;
        iVar1 = UE::String::FindFirstChar(&local_58,'-',CaseSensitive);
        if (iVar1 == -1) {
          iVar1 = iVar14;
        }
        iVar2 = 0;
        if (iVar14 < 0) {
          iVar2 = iVar14;
        }
        iVar4 = iVar14 - iVar2;
        if (iVar1 < iVar14 - iVar2) {
          iVar4 = iVar1;
        }
        iVar1 = 0;
        if (0 < iVar4) {
          iVar1 = iVar4;
        }
        iVar4 = 0;
        if (iVar1 < 0) {
          iVar4 = iVar1;
        }
        iVar7 = iVar1 - iVar4;
        if (7 < iVar7) {
          iVar7 = 7;
        }
        iVar3 = 0;
        if (0 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar3 != 0) {
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            ((char *)(_Str + (longlong)iVar2 + iVar4 + lVar9),"-trace=",
                             (longlong)iVar3);
          if ((iVar4 == 0) && ("-trace="[iVar3] == '\0')) {
            iVar4 = 7;
            if (iVar1 < 7) {
              iVar4 = iVar1;
            }
            puVar13 = _Str + (longlong)iVar4 + iVar2 + lVar9;
            if (iVar1 + -7 < iVar1 - iVar4) {
              iVar4 = 7;
            }
            iVar2 = 0;
            if (0 < iVar1 - iVar4) {
              iVar2 = iVar1 - iVar4;
            }
            while (iVar2 != 0) {
              local_58._12_4_ = uStack_6c;
              local_58.Size = iVar2;
              local_78 = puVar13;
              iStack_70 = iVar2;
              local_58.DataPtr = puVar13;
              iVar7 = UE::String::FindFirstChar(&local_58,',',CaseSensitive);
              iVar4 = iVar2;
              if (iVar7 != -1) {
                iVar4 = iVar7;
              }
              iVar7 = 0;
              if (iVar2 < 0) {
                iVar7 = iVar2;
              }
              iVar3 = iVar2 - iVar7;
              if (iVar4 < iVar2 - iVar7) {
                iVar3 = iVar4;
              }
              puVar12 = puVar13 + iVar7;
              iVar4 = 0;
              if (0 < iVar3) {
                iVar4 = iVar3;
              }
              if (iVar4 != 0) {
                uVar10 = (ulong64)iVar4;
                iVar7 = FGenericPlatformStricmp::Strnicmp((char *)puVar12,"memalloc",uVar10);
                if ((iVar7 == 0) && ("memalloc"[uVar10] == '\0')) {
                  EVar11 = EVar11 | Light;
                }
                else {
                  iVar7 = FGenericPlatformStricmp::Strnicmp((char *)puVar12,"callstack",uVar10);
                  if ((iVar7 == 0) && ("callstack"[uVar10] == '\0')) {
                    EVar11 = EVar11 | Callstacks;
                  }
                  else {
                    iVar7 = FGenericPlatformStricmp::Strnicmp((char *)puVar12,"memtag",uVar10);
                    if ((iVar7 != 0) || ("memtag"[uVar10] != '\0')) {
                      iVar7 = FGenericPlatformStricmp::Strnicmp((char *)puVar12,"probing",uVar10);
                      if ((iVar7 == 0) && ("probing"[uVar10] == '\0')) {
                        EVar11 = EVar11 | Probing;
                      }
                      else {
                        iVar7 = iVar4;
                        if (6 < iVar4) {
                          iVar7 = 6;
                        }
                        iVar3 = 0;
                        if (0 < iVar7) {
                          iVar3 = iVar7;
                        }
                        if (iVar3 != 0) {
                          iVar7 = FGenericPlatformStricmp::Strnicmp
                                            ((char *)puVar12,"memory",(longlong)iVar3);
                          if ((iVar7 == 0) && ("memory"[iVar3] == '\0')) {
                            iVar7 = FGenericPlatformStricmp::Strnicmp
                                              ((char *)puVar12,"memory",uVar10);
                            if ((iVar7 == 0) && ("memory"[uVar10] == '\0')) {
                              return Full;
                            }
                            iVar7 = FGenericPlatformStricmp::Strnicmp
                                              ((char *)puVar12,"memory_light",uVar10);
                            if ((iVar7 == 0) && ("memory_light"[uVar10] == '\0')) {
                              return Light;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar7 = (iVar2 - iVar4) + -1;
              iVar4 = iVar2;
              if (iVar7 < iVar2) {
                iVar4 = iVar7;
              }
              iStack_60 = 0;
              if (0 < iVar4) {
                iStack_60 = iVar4;
              }
              puVar13 = puVar13 + ((longlong)iVar2 - (longlong)iStack_60);
              local_58._12_4_ = uStack_5c;
              local_58.Size = iStack_60;
              iVar2 = iStack_60;
              local_68 = puVar13;
              local_58.DataPtr = puVar13;
            }
          }
        }
        iVar2 = 1;
        if (1 < iVar1) {
          iVar2 = iVar1;
        }
        if (iVar14 - iVar2 < iVar14) {
          sVar15 = (size_t)(uint)(iVar14 - iVar2);
        }
        sVar5 = 0;
        if (0 < (int)sVar15) {
          sVar5 = sVar15;
        }
        iStack_90 = (int)sVar5;
        _Str = local_b8.DataPtr + (longlong)(_Str + (lVar9 - iStack_90));
        local_b8._12_4_ = uStack_8c;
        local_b8.Size = iStack_90;
        local_b8.DataPtr = _Str;
        local_98 = _Str;
        iVar1 = UE::String::FindFirstChar(&local_b8,'-',CaseSensitive);
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < local_a8);
  }
  return EVar11;
}

// MemoryTrace_ShouldEnable<wchar_t> @ 141984610

EMemoryTraceInit __cdecl MemoryTrace_ShouldEnable<wchar_t>(int param_1,wchar_t **param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulong64 uVar11;
  int iVar12;
  size_t sVar13;
  EMemoryTraceInit EVar14;
  int iVar15;
  TStringView<wchar_t> local_c8;
  longlong local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined1 local_88 [16];
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  
  EVar14 = Disabled;
  if (1 < param_1) {
    local_98 = (longlong)param_1;
    local_b8 = 1;
    do {
      _Str = param_2[local_b8];
      sVar6 = 0;
      local_a8 = _Str;
      if (_Str != (wchar_t *)0x0) {
        sVar6 = wcslen(_Str);
      }
      iStack_a0 = (int)sVar6;
      local_c8.DataPtr = local_a8;
      local_c8.Size = (int)sVar6;
      local_c8._12_4_ = uStack_9c;
      iVar3 = UE::String::FindFirstChar(&local_c8,L'-',CaseSensitive);
      while (iVar3 != -1) {
        uVar9 = (uint)sVar6;
        uVar7 = uVar9;
        if ((int)(uVar9 - iVar3) < (int)uVar9) {
          uVar7 = uVar9 - iVar3;
        }
        sVar13 = 0;
        if (0 < (int)uVar7) {
          sVar13 = (size_t)uVar7;
        }
        iVar12 = (int)sVar13;
        lVar10 = (longlong)(int)uVar9 - (longlong)iVar12;
        iVar3 = iVar12;
        if (iVar12 + -1 < iVar12) {
          iVar3 = iVar12 + -1;
        }
        iStack_70 = 0;
        if (0 < iVar3) {
          iStack_70 = iVar3;
        }
        local_c8.DataPtr = _Str + ((longlong)(int)uVar9 - (longlong)iStack_70);
        local_c8._12_4_ = uStack_6c;
        local_c8.Size = iStack_70;
        local_a8 = (wchar_t *)lVar10;
        local_78 = local_c8.DataPtr;
        iVar3 = UE::String::FindFirstChar(&local_c8,L'-',CaseSensitive);
        if (iVar3 == -1) {
          iVar3 = iVar12;
        }
        iVar4 = 0;
        if (iVar12 < 0) {
          iVar4 = iVar12;
        }
        iVar15 = iVar12 - iVar4;
        if (iVar3 < iVar12 - iVar4) {
          iVar15 = iVar3;
        }
        lVar10 = iVar4 + lVar10;
        iVar3 = 0;
        if (0 < iVar15) {
          iVar3 = iVar15;
        }
        iVar4 = 0;
        if (iVar3 < 0) {
          iVar4 = iVar3;
        }
        iVar15 = iVar3 - iVar4;
        if (7 < iVar3 - iVar4) {
          iVar15 = 7;
        }
        iVar5 = 0;
        if (0 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar5 != 0) {
          iVar4 = FGenericPlatformStricmp::Strnicmp(_Str + iVar4 + lVar10,"-trace=",(longlong)iVar5)
          ;
          if ((iVar4 == 0) && ("-trace="[iVar5] == '\0')) {
            iVar4 = 7;
            if (iVar3 < 7) {
              iVar4 = iVar3;
            }
            pwVar1 = _Str + iVar4 + lVar10;
            if (iVar3 + -7 < iVar3 - iVar4) {
              iVar4 = 7;
            }
            iVar15 = 0;
            if (0 < iVar3 - iVar4) {
              iVar15 = iVar3 - iVar4;
            }
            local_88._8_4_ = iVar15;
            local_88._0_8_ = pwVar1;
            local_c8._12_4_ = local_88._12_4_;
            while (iVar15 != 0) {
              local_c8.Size = iVar15;
              local_c8.DataPtr = pwVar1;
              iVar5 = UE::String::FindFirstChar(&local_c8,L',',CaseSensitive);
              iVar4 = iVar15;
              if (iVar5 != -1) {
                iVar4 = iVar5;
              }
              iVar5 = 0;
              if (iVar15 < 0) {
                iVar5 = iVar15;
              }
              iVar8 = iVar15 - iVar5;
              if (iVar4 < iVar15 - iVar5) {
                iVar8 = iVar4;
              }
              iVar4 = 0;
              if (0 < iVar8) {
                iVar4 = iVar8;
              }
              pwVar2 = pwVar1 + iVar5;
              if (iVar4 != 0) {
                uVar11 = (ulong64)iVar4;
                iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"memalloc",uVar11);
                if ((iVar5 == 0) && ("memalloc"[uVar11] == '\0')) {
                  EVar14 = EVar14 | Light;
                }
                else {
                  iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"callstack",uVar11);
                  if ((iVar5 == 0) && ("callstack"[uVar11] == '\0')) {
                    EVar14 = EVar14 | Callstacks;
                  }
                  else {
                    iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"memtag",uVar11);
                    if ((iVar5 != 0) || ("memtag"[uVar11] != '\0')) {
                      iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"probing",uVar11);
                      if ((iVar5 == 0) && ("probing"[uVar11] == '\0')) {
                        EVar14 = EVar14 | Probing;
                      }
                      else {
                        iVar5 = iVar4;
                        if (6 < iVar4) {
                          iVar5 = 6;
                        }
                        iVar8 = 0;
                        if (0 < iVar5) {
                          iVar8 = iVar5;
                        }
                        if (iVar8 != 0) {
                          iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"memory",(longlong)iVar8)
                          ;
                          if ((iVar5 == 0) && ("memory"[iVar8] == '\0')) {
                            iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"memory",uVar11);
                            if ((iVar5 == 0) && ("memory"[uVar11] == '\0')) {
                              return Full;
                            }
                            iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,"memory_light",uVar11);
                            if ((iVar5 == 0) && ("memory_light"[uVar11] == '\0')) {
                              return Light;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar5 = (iVar15 - iVar4) + -1;
              iVar4 = iVar15;
              if (iVar5 < iVar15) {
                iVar4 = iVar5;
              }
              iStack_60 = 0;
              if (0 < iVar4) {
                iStack_60 = iVar4;
              }
              pwVar1 = pwVar1 + ((longlong)iVar15 - (longlong)iStack_60);
              local_88._8_4_ = iStack_60;
              local_88._0_8_ = pwVar1;
              local_88._12_4_ = uStack_5c;
              iVar15 = iStack_60;
              local_c8._12_4_ = uStack_5c;
              local_68 = pwVar1;
            }
          }
        }
        iVar4 = 1;
        if (1 < iVar3) {
          iVar4 = iVar3;
        }
        if (iVar12 - iVar4 < iVar12) {
          sVar13 = (size_t)(uint)(iVar12 - iVar4);
        }
        sVar6 = 0;
        if (0 < (int)sVar13) {
          sVar6 = sVar13;
        }
        iStack_50 = (int)sVar6;
        _Str = _Str + ((longlong)iVar12 - (longlong)iStack_50) + (longlong)local_a8;
        local_c8._12_4_ = uStack_4c;
        local_c8.Size = iStack_50;
        local_c8.DataPtr = _Str;
        local_a8 = _Str;
        _iStack_a0 = local_c8._8_8_;
        local_58 = _Str;
        iVar3 = UE::String::FindFirstChar(&local_c8,L'-',CaseSensitive);
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 < local_98);
  }
  return EVar14;
}

// PIXBeginEvent<> @ 141984b20

void __cdecl PIXBeginEvent<>(uint param_1,char *param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  PIXEventsThreadInfo *pPVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *local_res10;
  LARGE_INTEGER local_res18;
  
  pPVar3 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
  puVar1 = pPVar3->biasedLimit;
  if (puVar1 != (ulong64 *)0x0) {
    puVar2 = pPVar3->destination;
    if (puVar2 < puVar1) {
      local_res18.QuadPart = 0;
      QueryPerformanceCounter(&local_res18);
      puVar2[1] = (ulonglong)param_1;
      local_res10 = puVar2 + 2;
      if (param_2 == (char *)0x0) {
        *local_res10 = 0;
        local_res10 = puVar2 + 3;
      }
      else if (((ulonglong)param_2 & 7) == 0) {
        do {
          if (puVar1 + 0x3e <= local_res10) break;
          uVar4 = *(ulonglong *)param_2;
          param_2 = (char *)((longlong)param_2 + 8);
          *local_res10 = uVar4;
          local_res10 = local_res10 + 1;
        } while ((uVar4 + 0xfefefefefefefeff & ~uVar4 & 0x8080808080808080) == 0);
      }
      else {
        PIXCopyEventStringArgumentSlow(&local_res10,puVar1 + 0x3e,param_2);
      }
      *local_res10 = 0xfff80;
      uVar4 = (longlong)local_res10 - (longlong)pPVar3->destination >> 3;
      uVar5 = (uint)uVar4 & 0xff;
      if (0x7f < uVar4) {
        uVar5 = 0x7f;
      }
      *puVar2 = (ulonglong)(uVar5 & 0x7f) | local_res18.QuadPart << 0x14 | 0xf2080;
      pPVar3->destination = local_res10;
    }
    else {
      PIXEventsDetail::PIXBeginEventAllocate<char_const_*>(pPVar3,(ulonglong)param_1,param_2);
    }
  }
  return;
}

// PIXBeginEvent<> @ 141984c60

void __cdecl PIXBeginEvent<>(uint param_1,wchar_t *param_2)

{
  PIXEventsDetail::PIXBeginEvent<wchar_t_const_*>((ulonglong)param_1,param_2);
  return;
}

// PIXBeginEvent<char_const_*> @ 141984c70

void __cdecl PIXEventsDetail::PIXBeginEvent<char_const_*>(ulong64 param_1,char *param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  PIXEventsThreadInfo *pPVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *local_res18;
  LARGE_INTEGER local_res20;
  
  pPVar3 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
  puVar1 = pPVar3->biasedLimit;
  if (puVar1 != (ulong64 *)0x0) {
    puVar2 = pPVar3->destination;
    if (puVar2 < puVar1) {
      local_res20.QuadPart = 0;
      QueryPerformanceCounter(&local_res20);
      puVar2[1] = param_1;
      local_res18 = puVar2 + 2;
      if (param_2 == (char *)0x0) {
        *local_res18 = 0;
        local_res18 = puVar2 + 3;
      }
      else if (((ulonglong)param_2 & 7) == 0) {
        do {
          if (puVar1 + 0x3e <= local_res18) break;
          uVar4 = *(ulonglong *)param_2;
          param_2 = (char *)((longlong)param_2 + 8);
          *local_res18 = uVar4;
          local_res18 = local_res18 + 1;
        } while ((uVar4 + 0xfefefefefefefeff & ~uVar4 & 0x8080808080808080) == 0);
      }
      else {
        PIXCopyEventStringArgumentSlow(&local_res18,puVar1 + 0x3e,param_2);
      }
      *local_res18 = 0xfff80;
      uVar4 = (longlong)local_res18 - (longlong)pPVar3->destination >> 3;
      uVar5 = (uint)uVar4 & 0xff;
      if (0x7f < uVar4) {
        uVar5 = 0x7f;
      }
      *puVar2 = (ulonglong)(uVar5 & 0x7f) | local_res20.QuadPart << 0x14 | 0xf2080;
      pPVar3->destination = local_res18;
    }
    else {
      PIXBeginEventAllocate<char_const_*>(pPVar3,param_1,param_2);
    }
  }
  return;
}

// PIXBeginEvent<wchar_t_const_*> @ 141984db0

void __cdecl PIXEventsDetail::PIXBeginEvent<wchar_t_const_*>(ulong64 param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  ulong64 *puVar2;
  uint6 uVar3;
  PIXEventsThreadInfo *pPVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ulong64 *puVar9;
  ulong64 *local_res18;
  LARGE_INTEGER local_res20;
  
  pPVar4 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
  puVar9 = pPVar4->biasedLimit;
  if (puVar9 != (ulong64 *)0x0) {
    puVar2 = pPVar4->destination;
    if (puVar2 < puVar9) {
      local_res20.QuadPart = 0;
      puVar9 = puVar9 + 0x3e;
      QueryPerformanceCounter(&local_res20);
      puVar2[1] = param_1;
      local_res18 = puVar2 + 2;
      if (param_2 == (wchar_t *)0x0) {
        *local_res18 = 0;
LAB_141984ea8:
        local_res18 = local_res18 + 1;
      }
      else if (((ulonglong)param_2 & 7) == 0) {
        PIXCopyEventStringArgumentFast(&local_res18,puVar9,param_2);
      }
      else if (local_res18 < puVar9) {
        pwVar8 = param_2 + 2;
        do {
          uVar5 = (ulong64)(ushort)pwVar8[-2];
          if (uVar5 == 0) {
            *local_res18 = 0;
            local_res18 = local_res18 + 1;
            break;
          }
          if (pwVar8[-1] == L'\0') {
LAB_141984e8f:
            *local_res18 = uVar5;
            goto LAB_141984ea8;
          }
          uVar7 = CONCAT22(pwVar8[-1],pwVar8[-2]);
          uVar5 = (ulong64)uVar7;
          if (*pwVar8 == L'\0') goto LAB_141984e8f;
          uVar3 = CONCAT24(*pwVar8,uVar7);
          uVar5 = (ulong64)uVar3;
          pwVar1 = pwVar8 + 1;
          if (*pwVar1 == L'\0') goto LAB_141984e8f;
          pwVar8 = pwVar8 + 4;
          *local_res18 = CONCAT26(*pwVar1,uVar3);
          local_res18 = local_res18 + 1;
        } while (local_res18 < puVar9);
      }
      *local_res18 = 0xfff80;
      uVar6 = (longlong)local_res18 - (longlong)pPVar4->destination >> 3;
      uVar7 = (uint)uVar6 & 0xff;
      if (0x7f < uVar6) {
        uVar7 = 0x7f;
      }
      *puVar2 = (ulonglong)(uVar7 & 0x7f) | local_res20.QuadPart << 0x14 | 0xf0080;
      pPVar4->destination = local_res18;
    }
    else {
      PIXBeginEventAllocate<wchar_t_const_*>(pPVar4,param_1,param_2);
    }
  }
  return;
}

// PIXBeginEventAllocate<char_const_*> @ 141984f10

void __cdecl
PIXEventsDetail::PIXBeginEventAllocate<char_const_*>
          (PIXEventsThreadInfo *param_1,ulong64 param_2,char *param_3)

{
  ulong64 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulong64 *puVar5;
  ulonglong *local_res20;
  
  lVar2 = PIXEventsReplaceBlock(param_1,0);
  if (lVar2 != 0) {
    puVar1 = param_1->destination;
    if (puVar1 < param_1->biasedLimit) {
      puVar5 = param_1->biasedLimit + 0x3e;
      puVar1[1] = param_2;
      local_res20 = puVar1 + 2;
      if (param_3 == (char *)0x0) {
        *local_res20 = 0;
        local_res20 = puVar1 + 3;
      }
      else if (((ulonglong)param_3 & 7) == 0) {
        do {
          if (puVar5 <= local_res20) break;
          uVar3 = *(ulonglong *)param_3;
          param_3 = (char *)((longlong)param_3 + 8);
          *local_res20 = uVar3;
          local_res20 = local_res20 + 1;
        } while ((uVar3 + 0xfefefefefefefeff & ~uVar3 & 0x8080808080808080) == 0);
      }
      else {
        PIXCopyEventStringArgumentSlow(&local_res20,puVar5,param_3);
      }
      *local_res20 = 0xfff80;
      uVar3 = (longlong)local_res20 - (longlong)param_1->destination >> 3;
      uVar4 = (uint)uVar3 & 0xff;
      if (0x7f < uVar3) {
        uVar4 = 0x7f;
      }
      *puVar1 = (ulonglong)(uVar4 & 0x7f) | lVar2 << 0x14 | 0xf2080;
      param_1->destination = local_res20;
    }
  }
  return;
}

// PIXBeginEventAllocate<wchar_t_const_*> @ 141985030

void __cdecl
PIXEventsDetail::PIXBeginEventAllocate<wchar_t_const_*>
          (PIXEventsThreadInfo *param_1,ulong64 param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  ulong64 *puVar2;
  uint6 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  ulong64 *puVar8;
  ulonglong *local_res20;
  
  lVar4 = PIXEventsReplaceBlock(param_1,0);
  if (lVar4 != 0) {
    puVar2 = param_1->destination;
    if (puVar2 < param_1->biasedLimit) {
      puVar8 = param_1->biasedLimit + 0x3e;
      puVar2[1] = param_2;
      local_res20 = puVar2 + 2;
      if (param_3 == (wchar_t *)0x0) {
        *local_res20 = 0;
LAB_141985119:
        local_res20 = local_res20 + 1;
      }
      else if (((ulonglong)param_3 & 7) == 0) {
        PIXCopyEventStringArgumentFast(&local_res20,puVar8,param_3);
      }
      else if (local_res20 < puVar8) {
        pwVar7 = param_3 + 2;
        do {
          uVar5 = (ulonglong)(ushort)pwVar7[-2];
          if (uVar5 == 0) {
            *local_res20 = 0;
            local_res20 = local_res20 + 1;
            break;
          }
          if (pwVar7[-1] == L'\0') {
LAB_141985100:
            *local_res20 = uVar5;
            goto LAB_141985119;
          }
          uVar6 = CONCAT22(pwVar7[-1],pwVar7[-2]);
          uVar5 = (ulonglong)uVar6;
          if (*pwVar7 == L'\0') goto LAB_141985100;
          uVar3 = CONCAT24(*pwVar7,uVar6);
          uVar5 = (ulonglong)uVar3;
          pwVar1 = pwVar7 + 1;
          if (*pwVar1 == L'\0') goto LAB_141985100;
          pwVar7 = pwVar7 + 4;
          *local_res20 = CONCAT26(*pwVar1,uVar3);
          local_res20 = local_res20 + 1;
        } while (local_res20 < puVar8);
      }
      *local_res20 = 0xfff80;
      uVar5 = (longlong)local_res20 - (longlong)param_1->destination >> 3;
      uVar6 = (uint)uVar5 & 0xff;
      if (0x7f < uVar5) {
        uVar6 = 0x7f;
      }
      *puVar2 = (ulonglong)(uVar6 & 0x7f) | lVar4 << 0x14 | 0xf0080;
      param_1->destination = local_res20;
    }
  }
  return;
}

// PIXCopyStringArguments<char_const_*> @ 141985170

void __cdecl
PIXEventsDetail::PIXCopyStringArguments<char_const_*>
          (ulong64 **param_1,ulong64 *param_2,char **param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar1 = (ulonglong *)*param_3;
  if (puVar1 == (ulonglong *)0x0) {
    **param_1 = 0;
    *param_1 = *param_1 + 1;
    return;
  }
  if (((ulonglong)puVar1 & 7) == 0) {
    puVar3 = *param_1;
    do {
      if (param_2 <= puVar3) {
        return;
      }
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      *puVar3 = uVar2;
      puVar3 = *param_1 + 1;
      *param_1 = puVar3;
    } while ((uVar2 + 0xfefefefefefefeff & ~uVar2 & 0x8080808080808080) == 0);
    return;
  }
  PIXCopyEventStringArgumentSlow(param_1,param_2,(char *)puVar1);
  return;
}

// PIXCopyStringArguments<wchar_t_const_*> @ 1419851a0

void __cdecl
PIXEventsDetail::PIXCopyStringArguments<wchar_t_const_*>
          (ulong64 **param_1,ulong64 *param_2,wchar_t **param_3)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  pwVar1 = *param_3;
  if (pwVar1 == (wchar_t *)0x0) {
    **param_1 = 0;
    *param_1 = *param_1 + 1;
    return;
  }
  if (((ulonglong)pwVar1 & 7) == 0) {
    puVar3 = *param_1;
    do {
      if (param_2 <= puVar3) {
        return;
      }
      uVar2 = *(ulonglong *)pwVar1;
      pwVar1 = pwVar1 + 4;
      *puVar3 = uVar2;
      puVar3 = *param_1 + 1;
      *param_1 = puVar3;
    } while ((short)uVar2 != 0 &&
             ((uVar2 & 0xffff0000) != 0 &&
             ((uVar2 & 0xffff00000000) != 0 && (uVar2 & 0xffff000000000000) != 0)));
    return;
  }
  PIXCopyEventStringArgumentSlow(param_1,param_2,pwVar1);
  return;
}

// SerializeByteOrderSwapped<unsigned_short> @ 1419858f0

FArchive * __cdecl
ArchiveUtil::SerializeByteOrderSwapped<unsigned_short>(FArchive *param_1,ushort *param_2)

{
  ushort local_res8 [4];
  
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))();
    *param_2 = *param_2 >> 8 | *param_2 << 8;
    return param_1;
  }
  local_res8[0] = *param_2 >> 8 | *param_2 << 8;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
  return param_1;
}

// SerializeByteOrderSwapped<unsigned_int> @ 141985960

FArchive * __cdecl
ArchiveUtil::SerializeByteOrderSwapped<unsigned_int>(FArchive *param_1,uint *param_2)

{
  uint uVar1;
  uint local_res8 [2];
  
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))();
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    return param_1;
  }
  uVar1 = *param_2;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
  return param_1;
}

// SerializeByteOrderSwapped<unsigned___int64> @ 1419859d0

FArchive * __cdecl
ArchiveUtil::SerializeByteOrderSwapped<unsigned___int64>(FArchive *param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))();
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    return param_1;
  }
  uVar1 = *param_2;
  local_res8 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
  return param_1;
}

// UpperBoundInternal<FBacktracer::FFunction,int,unsigned_int,FIdentityFunctor,FIdPredicate> @ 141985a40

int __cdecl
AlgoImpl::UpperBoundInternal<FBacktracer::FFunction,int,unsigned_int,FIdentityFunctor,FIdPredicate>
          (FFunction *param_1,int param_2,uint *param_3,FIdentityFunctor param_4,
          FIdPredicate param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Id <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<FBacktracer::FModule,int,unsigned_int,FIdentityFunctor,FIdPredicate> @ 141985a80

int __cdecl
AlgoImpl::UpperBoundInternal<FBacktracer::FModule,int,unsigned_int,FIdentityFunctor,FIdPredicate>
          (FModule *param_1,int param_2,uint *param_3,FIdentityFunctor param_4,FIdPredicate param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Id <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>_> @ 141985ad0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>_>
          (_Atomic_padded<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>_> @ 141985ae0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>_>
          (_Atomic_padded<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>_> @ 141985af0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>_>
          (_Atomic_padded<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>_> @ 141985b00

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>_>
          (_Atomic_padded<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>_> @ 141985b10

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>_>
          (_Atomic_padded<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>_> @ 141985b20

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>_>
          (_Atomic_padded<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*> @ 141985b30

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
          (FHashHeader **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*> @ 141985b40

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
          (FHashHeader **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> @ 141985b50

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
          (FHashHeader **param_1)

{
  return (long64)*param_1;
}

// EnumerateType @ 141985c80

EnumerateType * __thiscall `TraceAuxiliaryStatus'::__l2::EnumerateType::EnumerateType(void *this)

{
  *(undefined2 *)((longlong)this + 0x18) = 0;
  *(longlong *)this = (longlong)this + 0x20;
  *(longlong *)((longlong)this + 8) = (longlong)this + 0x20;
  *(longlong *)((longlong)this + 0x10) = (longlong)this + 0x420;
  *(undefined4 *)((longlong)this + 0x420) = 0;
  *(undefined4 *)((longlong)this + 0x424) = 0x14;
  return this;
}

// SuperluminalExternalProfiler @ 1419874d0

SuperluminalExternalProfiler * __thiscall
SuperluminalExternalProfiler::SuperluminalExternalProfiler(SuperluminalExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  SuperluminalExternalProfiler *pSVar3;
  
  *this = (SuperluminalExternalProfiler)&___7SuperluminalExternalProfiler__6B_;
  pIVar2 = IModularFeatures::Get();
  pSVar3 = this + 1;
  if (this == (SuperluminalExternalProfiler *)0x0) {
    pSVar3 = (SuperluminalExternalProfiler *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,pSVar3);
  return this;
}

// ~EnumerateType @ 141987aa0

void __thiscall `TraceAuxiliaryStatus'::__l2::EnumerateType::~EnumerateType(void *this)

{
  if (*(char *)((longlong)this + 0x18) != '\0') {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~SuperluminalExternalProfiler @ 1419884b0

void __thiscall
SuperluminalExternalProfiler::~SuperluminalExternalProfiler(SuperluminalExternalProfiler *this)

{
  *this = (SuperluminalExternalProfiler)&___7FExternalProfiler__6B_;
  return;
}

// operator+ @ 1419888b0

FResourceSizeEx * __cdecl
operator+(FResourceSizeEx *__return_storage_ptr__,FResourceSizeEx *param_1,FResourceSizeEx *param_2)

{
  FResourceSizeEx::operator+=(param_1,param_2);
  __return_storage_ptr__->ResourceSizeMode = param_1->ResourceSizeMode;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&__return_storage_ptr__->DedicatedSystemMemoryBytesMap,
             &param_1->DedicatedSystemMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&__return_storage_ptr__->DedicatedVideoMemoryBytesMap,
             &param_1->DedicatedVideoMemoryBytesMap);
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
            (&__return_storage_ptr__->UnknownMemoryBytesMap,&param_1->UnknownMemoryBytesMap);
  FResourceSizeEx::~FResourceSizeEx(param_1);
  return __return_storage_ptr__;
}

// operator() @ 141988e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`ParseTokens'::__l2::<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  char *pcVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  ulonglong _Size;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  FScriptContainerElement *pFVar9;
  TStringView<wchar_t> *pTVar10;
  int iVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_1b8 [32];
  FString local_168;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  wchar_t local_c8 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar7 = 0x4f;
  if (param_1->Size < 0x4f) {
    iVar7 = param_1->Size;
  }
  _Size = (longlong)iVar7 * 2;
  if (0 < iVar7) {
    memcpy(local_c8,param_1->DataPtr,_Size);
  }
  if (0x9f < _Size) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  pcVar2 = *(char **)this;
  iVar11 = 0;
  local_c8[iVar7] = L'\0';
  if (*pcVar2 == '\0') {
LAB_141989081:
    if (**(char **)((longlong)this + 0x18) == '\0') {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      if ((((TStringView<wchar_t> *)pFVar3->Data <= param_1) &&
          (param_1 < (TStringView<wchar_t> *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar7 + 1;
      uVar5 = *(undefined8 *)&param_1->Size;
      pFVar9 = pFVar3->Data;
      *(wchar_t **)(pFVar9 + (longlong)iVar7 * 0x10) = param_1->DataPtr;
      *(undefined8 *)(pFVar9 + (longlong)iVar7 * 0x10 + 8) = uVar5;
      return;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar7 = *(int *)&pFVar3[1].Data;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    pFVar13 = pFVar3->Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)(pFVar13 + 8) = 0;
    pFVar9 = (FScriptContainerElement *)
             ::FString::ConstructFromPtrSize
                       (&local_d8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    if (pFVar13 != pFVar9) {
      if (*(void **)pFVar13 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar13);
      }
      *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = 0;
      *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar9 + 8);
      *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
      *(undefined8 *)(pFVar9 + 8) = 0;
    }
    goto LAB_14198903d;
  }
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  iVar7 = FGenericPlatformStricmp::Stricmp(local_c8,GDefaultChannels.Name);
  if (iVar7 == 0) {
    pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
    local_148 = GDefaultChannels.ChannelList;
    if (GDefaultChannels.ChannelList != (wchar_t *)0x0) {
      sVar8 = wcslen(GDefaultChannels.ChannelList);
      iVar11 = (int)sVar8;
    }
    pTVar10 = &local_118;
    local_118._12_4_ = uStack_13c;
    local_118.Size = iVar11;
    bVar6 = false;
    local_118.DataPtr = local_148;
    iStack_140 = iVar11;
  }
  else {
    iVar7 = FGenericPlatformStricmp::Stricmp(local_c8,GMemoryChannels.Name);
    if (iVar7 == 0) {
      pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
      local_138 = GMemoryChannels.ChannelList;
      if (GMemoryChannels.ChannelList != (wchar_t *)0x0) {
        sVar8 = wcslen(GMemoryChannels.ChannelList);
        iVar11 = (int)sVar8;
      }
      pTVar10 = &local_108;
      local_108._12_4_ = uStack_12c;
      local_108.Size = iVar11;
      bVar6 = false;
      local_108.DataPtr = local_138;
      iStack_130 = iVar11;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Stricmp(local_c8,GMemoryLightChannels.Name);
      if (iVar7 == 0) {
        pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
        local_128 = GMemoryLightChannels.ChannelList;
        if (GMemoryLightChannels.ChannelList != (wchar_t *)0x0) {
          sVar8 = wcslen(GMemoryLightChannels.ChannelList);
          iVar11 = (int)sVar8;
        }
        pTVar10 = &local_f8;
        local_f8._12_4_ = uStack_11c;
        local_f8.Size = iVar11;
        bVar6 = false;
        local_f8.DataPtr = local_128;
        iStack_120 = iVar11;
      }
      else {
        if ((GConfig == (FConfigCacheIni *)0x0) ||
           (bVar6 = FConfigCacheIni::GetString
                              (GConfig,L"Trace.ChannelPresets",local_c8,&local_168,&GEngineIni),
           !bVar6)) {
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          goto LAB_141989081;
        }
        pTVar12 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
        if (local_168.Data.ArrayNum == 0) {
          local_158 = (FScriptContainerElement *)0x15060d16c;
LAB_14198900c:
          sVar8 = wcslen((wchar_t *)local_158);
          iVar11 = (int)sVar8;
        }
        else {
          local_158 = local_168.Data.AllocatorInstance.Data;
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14198900c;
        }
        pTVar10 = &local_e8;
        local_e8._12_4_ = uStack_14c;
        local_e8.Size = iVar11;
        bVar6 = true;
        local_e8.DataPtr = (wchar_t *)local_158;
        iStack_150 = iVar11;
      }
    }
  }
  ParseTokens(pTVar10,false,
              *(TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),
              bVar6,pTVar12);
  local_d8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
LAB_14198903d:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141989290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>::operator()
          (void *this,EForkProcessRole param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  HANDLE hObject;
  ForAnyElementType FVar6;
  bool bVar7;
  FString local_28;
  
  if (param_1 == Child) {
    pwVar5 = FCommandLine::Get();
    ::FString::FString(&local_28,pwVar5);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    FTraceAuxiliary::Initialize((wchar_t *)FVar6.Data);
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2409,"FTraceAux_TryAutoConnect",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x969);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2409);
    }
    if ((((GTraceAutoStart != false) && (bVar3 = UE::Trace::IsTracing(), !bVar3)) &&
        ((bVar3 = FForkProcessHelper::IsForkRequested(), !bVar3 ||
         (bVar3 = FForkProcessHelper::IsForkedChildProcess(), bVar3)))) &&
       (hObject = OpenEventW(0x1f0003,0,L"Local\\UnrealInsightsAutoConnect"), hObject != (HANDLE)0x0
       )) {
      if (3 < (byte)LogTrace._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
      FTraceAuxiliaryImpl::StartWorkerThread(&GTraceAuxiliary);
      uVar2 = GTraceAuxiliary.CommandlineChannels._5172_4_;
      uVar1 = GTraceAuxiliary.CommandlineChannels._5128_4_;
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1835,"FTraceAux_Start",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                   ,0x72b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
      }
      pwVar5 = L"default";
      if (uVar1 != uVar2) {
        pwVar5 = (wchar_t *)0x0;
      }
      bVar4 = TraceAuxiliaryStartShared(pwVar5,(FOptions *)0x0,(FLogCategoryBase *)&LogCore);
      if (bVar4) {
        FTraceAuxiliaryImpl::Connect
                  (&GTraceAuxiliary,Network,L"127.0.0.1",(FLogCategoryBase *)&LogCore,0);
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      CloseHandle(hObject);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 141989b60

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy,`FTraceAuxiliary::Initialize'[::B]::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989bc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`TraceAuxiliaryAddPostForkCallback'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989bf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989c20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FInstanceCountingObject::_scalar_deleting_destructor_(FInstanceCountingObject *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  int *piVar4;
  FWindowsRecursiveMutex *lpCriticalSection;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FInstanceCountingObject__6B_;
  if ((Globals == (FGlobalVars *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Globals",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\InstanceCounter.cpp"
                         ,0x49,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  lpCriticalSection = &Globals->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             FindChecked((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)Globals,this->Name);
    *piVar4 = *piVar4 + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->DoLog != false) && (4 < (byte)LogInstanceCount._0_1_)) {
      ::FName::ToString(&this->Name,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInstanceCount);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x18);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 141989d40

void * __thiscall FMallocWrapper::_scalar_deleting_destructor_(FMallocWrapper *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989da0

void * __thiscall
FNameAsStringProxyArchive::_scalar_deleting_destructor_
          (FNameAsStringProxyArchive *this,uint param_1)

{
  *(undefined ***)this = &___7FNameAsStringProxyArchive__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989df0

void * __thiscall
_anon_4B7900F2::FPlatformEvents::_scalar_deleting_destructor_(FPlatformEvents *this,uint param_1)

{
  FEvent *pFVar1;
  schar *psVar2;
  
  this->_padding_ = (longlong)&::FPlatformEvents::_vftable_;
  pFVar1 = (this->ReadyEvent).Event;
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
  if (this->Thread != (FRunnableThread *)0x0) {
    ControlTraceW(0,L"NT Kernel Logger",&this->Trace,1);
    if (this->TraceHandle != 0xffffffffffffffff) {
      CloseTrace();
      this->TraceHandle = 0xffffffffffffffff;
    }
    (**(code **)(this->Thread->_padding_ + 0x20))();
  }
  psVar2 = (this->ThreadNameSet).Table.CurrentData.Distances;
  if (psVar2 != (schar *)0x0) {
    FMemory::Free(psVar2);
    FMemory::Free((this->ThreadNameSet).Table.CurrentData.Keys);
    FMemory::Free((this->ThreadNameSet).Table.CurrentData.Values);
  }
  (this->ThreadNameSet).Table.NumSlotsMinusOne = 0;
  *(undefined8 *)&(this->ThreadNameSet).Table.CurrentData = 0;
  (this->ThreadNameSet).Table.CurrentData.Distances = (schar *)0x0;
  (this->ThreadNameSet).Table.MaxLookups = '\0';
  (this->ThreadNameSet).Table.CurrentData.Keys = (uint *)0x0;
  (this->ThreadNameSet).Table.CurrentData.Values = (FNoopStruct *)0x0;
  (this->ThreadNameSet).Table.NumElements = 0;
  psVar2 = (this->ThreadNameSet).Table.CurrentData.Distances;
  if (psVar2 != (schar *)0x0) {
    FMemory::Free(psVar2);
    FMemory::Free((this->ThreadNameSet).Table.CurrentData.Keys);
    FMemory::Free((this->ThreadNameSet).Table.CurrentData.Values);
  }
  (this->ThreadNameSet).Table.NumSlotsMinusOne = 0;
  (this->ThreadNameSet).Table.MaxLookups = '\0';
  *(undefined8 *)&(this->ThreadNameSet).Table.CurrentData = 0;
  (this->ThreadNameSet).Table.CurrentData.Distances = (schar *)0x0;
  (this->ThreadNameSet).Table.NumElements = 0;
  (this->ThreadNameSet).Table.CurrentData.Keys = (uint *)0x0;
  (this->ThreadNameSet).Table.CurrentData.Values = (FNoopStruct *)0x0;
  FEventRef::~FEventRef(&this->ReadyEvent);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141989f80

void * __thiscall
FScopedDebugInfo::_scalar_deleting_destructor_(FScopedDebugInfo *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopedDebugInfo *pFVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FScopedDebugInfo__6B_;
  pFVar3 = TlsGetValue(GThreadDebugInfoTLSID);
  if (pFVar3 != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentInnermostDebugInfo == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ScopedDebugInfo.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  TlsSetValue(GThreadDebugInfoTLSID,this->NextOuterInfo);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14198a010

void * __thiscall FTraceMalloc::_scalar_deleting_destructor_(FTraceMalloc *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTraceMalloc__6B_;
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x10);
  }
  return this;
}

// CallstackTrace_CreateInternal @ 14198edb0

void __cdecl CallstackTrace_CreateInternal(FMalloc *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  WCHAR WVar2;
  FMalloc *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FModuleTrace *pFVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  FBacktracer *lpCriticalSection_00;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar10;
  FModule *pFVar11;
  LPWSTR pWVar12;
  wchar_t *pwVar13;
  undefined1 local_38 [32];
  
  pFVar9 = FWindowsPlatformMisc::GetHostArchitecture((FString *)(local_38 + 8));
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"arm64");
  if ((uchar  [8])local_38._8_8_ != (uchar  [8])0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  if ((iVar8 != 0) && (FBacktracer::Instance == (FBacktracer *)0x0)) {
    lpCriticalSection_00 = (FBacktracer *)(**(code **)((longlong)*param_1 + 0x28))(param_1,0xc0,8);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection_00,4000);
    lpCriticalSection_00->Malloc = param_1;
    (lpCriticalSection_00->CallstackTracer).KnownSet.Malloc = param_1;
    (lpCriticalSection_00->CallstackTracer).KnownSet.HashTable =
         (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
          )0x0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &(lpCriticalSection_00->CallstackTracer).KnownSet.WriteCriticalSection,4000);
    lpCriticalSection = &(lpCriticalSection_00->FunctionLookups).WriteCriticalSection;
    (lpCriticalSection_00->CallstackTracer).CallstackIdCounter = (atomic<unsigned_int>)0x1;
    (lpCriticalSection_00->FunctionLookups).Malloc = param_1;
    (lpCriticalSection_00->FunctionLookups).HashTable =
         (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
          )0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    lpCriticalSection_00->bReentranceCheck = false;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((lpCriticalSection_00->FunctionLookups).HashTable !=
         (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
          )0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("HashTable.load(std::memory_order_relaxed) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Containers\\GrowOnlyLockFreeHash.h"
                           ,0x51,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    for (lVar4 = 0x3f; 0xfffffUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    iVar8 = 1 << ((byte)lVar4 & 0x1f);
    pFVar3 = (lpCriticalSection_00->FunctionLookups).Malloc;
    aVar10 = (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
              )(**(code **)((longlong)*pFVar3 + 0x28))(pFVar3,(longlong)iVar8 * 8 + 0x10,0);
    *(undefined8 *)aVar10 = 0;
    *(int *)((longlong)aVar10 + 8) = iVar8;
    *(undefined4 *)((longlong)aVar10 + 0xc) = 0;
    memset((undefined8 *)((longlong)aVar10 + 0x10),0,(longlong)iVar8 * 8);
    (lpCriticalSection_00->FunctionLookups).HashTable = aVar10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00->ModulesCapacity = 8;
    lpCriticalSection_00->ModulesNum = 0;
    pFVar11 = (FModule *)
              (**(code **)((longlong)*lpCriticalSection_00->Malloc + 0x28))
                        (lpCriticalSection_00->Malloc,0xc0,0);
    lpCriticalSection_00->Modules = pFVar11;
    FBacktracer::Instance = lpCriticalSection_00;
    pWVar12 = GetCommandLineW();
    if (pWVar12 != (LPWSTR)0x0) {
      WVar2 = *pWVar12;
      while (WVar2 != L'\0') {
        pwVar13 = pWVar12 + 1;
        if (((WCHAR)(WVar2 - (-(ushort)((ushort)WVar2 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar8 = FGenericPlatformStricmp::Strnicmp(pwVar13,L"tracefullcallstacks",0x13),
           iVar8 == 0)) {
          if (pWVar12 != (LPWSTR)0x0) {
            GFullBacktraces = true;
          }
          break;
        }
        pWVar12 = pwVar13;
        WVar2 = *pwVar13;
      }
    }
    if (((FModuleTrace::Instance == (FModuleTrace *)0x0) &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0)) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      Instance.Subscribers.ArrayNum = 0;
      FModuleTrace::Instance = &Instance;
      Instance.Subscribers.ArrayMax = 0x40;
      Instance.CallbackCookie = (void *)0x0;
      Instance.ProgramHeapId = 0;
      atexit(`Modules_Create'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&_TSS0);
    }
    pFVar6 = FModuleTrace::Instance;
    if (FModuleTrace::Instance != (FModuleTrace *)0x0) {
      local_38._0_8_ = `CallstackTrace_CreateInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
      if (((FModuleTrace::Instance <= (FModuleTrace *)local_38) &&
          (local_38 <
           (FModuleTrace::Instance->Subscribers).AllocatorInstance.InlineData +
           (FModuleTrace::Instance->Subscribers).ArrayMax)) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pFVar6->Subscribers).ArrayNum;
      piVar1 = &(pFVar6->Subscribers).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<void_(__cdecl*)(bool,void_*,wchar_t_const_*)>_>
                          (0x808,(ForElementType<void_(__cdecl*)(bool,void_*,wchar_t_const_*)> *)
                                 pFVar6,piVar1);
      }
      (pFVar6->Subscribers).ArrayNum = iVar8 + 1;
      *(undefined8 *)(pFVar6->Subscribers).AllocatorInstance.InlineData[iVar8].Pad = local_38._0_8_;
    }
  }
  return;
}

// CallstackTrace_FilterModule @ 14198f160

bool __cdecl CallstackTrace_FilterModule(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar3 = param_1->Size;
  local_28.Size = 8;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  local_28.DataPtr = L"Binaries";
  pwVar1 = param_1->DataPtr;
  local_18.DataPtr = pwVar1 + ((longlong)iVar3 - (longlong)iVar4);
  local_18.Size = iVar4;
  iVar2 = UE::String::FindFirst(&local_18,&local_28,CaseSensitive);
  if (iVar2 == -1) {
    local_18.Size = 10;
    local_28.Size = iVar4;
    local_18.DataPtr = L"ThirdParty";
    local_28.DataPtr = pwVar1 + ((longlong)iVar3 - (longlong)iVar4);
    iVar3 = UE::String::FindFirst(&local_28,&local_18,CaseSensitive);
    if (iVar3 != -1) {
      return true;
    }
  }
  return false;
}

// CallstackTrace_GetCurrentId @ 14198f240

uint __cdecl CallstackTrace_GetCurrentId(void)

{
  uint uVar1;
  
  if ((-1 < CallstackChannel->Enabled) && (FBacktracer::Instance != (FBacktracer *)0x0)) {
    uVar1 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    return uVar1;
  }
  return 0;
}

// CallstackTrace_InitializeInternal @ 14198f270

void __cdecl CallstackTrace_InitializeInternal(void)

{
  if (FModuleTrace::Instance != (FModuleTrace *)0x0) {
    FModuleTrace::Initialize(FModuleTrace::Instance);
  }
  GModulesAreInitialized = true;
  return;
}

// CreateProfileDirectoryAndFilename @ 141990220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
CreateProfileDirectoryAndFilename(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  FDateTime this;
  longlong *plVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint uVar12;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  wchar_t *local_b8;
  int local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GGetMapNameDelegate,
             &local_58);
  if (((GGetMapNameDelegate._16_4_ == 0) || (GGetMapNameDelegate._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)GGetMapNameDelegate._8_8_ + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("GGetMapNameDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ProfilingHelpers.cpp"
                       ,0xe0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar1)();
      return pFVar7;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GGetMapNameDelegate,
             &local_40);
  plVar9 = (longlong *)0x0;
  if (GGetMapNameDelegate._16_4_ != 0) {
    plVar9 = (longlong *)GGetMapNameDelegate._8_8_;
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  iVar11 = local_b0 + -1;
  if (local_b0 == 0) {
    iVar11 = 0;
  }
  FString::AssignRange(&local_d8,local_b8,iVar11);
  if (local_b8 != (wchar_t *)0x0) {
    FMemory::Free(local_b8);
  }
  FString::FString(&local_98,"Windows");
  pFVar7 = FPaths::ProfilingDir(&local_78);
  FString::ConcatFF(&local_88,pFVar7,param_1);
  FString::ConcatFC(&local_e8,&local_88,L"/");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar10.Data = local_e8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,FVar10.Data,0);
  this = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this.Ticks,&local_68,L"%m.%d-%H.%M");
  FString::PrintfImpl(&local_f8,L"%s-%s-%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar4 = 0;
  iVar11 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iVar11 = iVar4;
  }
  iVar6 = iVar11;
  if (100 < iVar11) {
    iVar6 = 100;
  }
  iVar5 = iVar4;
  if (0 < iVar6) {
    iVar5 = iVar6;
  }
  FString::RemoveAt(&local_f8,0,iVar11 - iVar5,No);
  pIVar8 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x60);
  FString::ConcatFF(&local_a8,&local_e8,&local_f8);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar8,FVar10.Data,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FString::PrintfImpl(&local_c8,L"%s%s");
  iVar11 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar11 = iVar4;
  }
  iVar6 = iVar11;
  if (100 < iVar11) {
    iVar6 = 100;
  }
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  FString::RemoveAt(&local_c8,iVar4,iVar11 - iVar4,No);
  FVar10.Data = local_e8.Data.AllocatorInstance.Data;
  iVar4 = 2;
  iVar11 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  if ((local_e8.Data.ArrayNum == 0) && (iVar11 != -1)) {
    iVar6 = iVar11 + 2;
LAB_141990537:
    local_108.ArrayNum = local_e8.Data.ArrayNum;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar6 == 0) {
      local_108.ArrayMax = 0;
      goto LAB_14199058a;
    }
  }
  else {
    iVar6 = iVar11 + 1;
    if (local_e8.Data.ArrayNum == 0) goto LAB_141990537;
  }
  local_108.ArrayNum = local_e8.Data.ArrayNum;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar12 = local_e8.Data.ArrayNum + iVar6;
  if ((int)uVar12 < local_e8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar12,0,&local_108.AllocatorInstance,local_e8.Data.ArrayNum,&local_108.ArrayMax);
  if (local_e8.Data.ArrayNum != 0) {
    memcpy(local_108.AllocatorInstance.Data,FVar10.Data,(longlong)local_e8.Data.ArrayNum * 2);
  }
LAB_14199058a:
  FString::PathAppend((FString *)&local_108,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar11);
  iVar11 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  if ((local_108.ArrayNum != 0) || (iVar11 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,&local_108,iVar4 + iVar11);
  FString::PathAppend(__return_storage_ptr__,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar11)
  ;
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateProfileFilename @ 141990670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
CreateProfileFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,bool param_3)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  ForAnyElementType FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  char cVar6;
  int iVar7;
  FDateTime FVar8;
  FEngineVersion *this;
  wchar_t *pwVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_res20 [2];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GGetMapNameDelegate,
             &local_58);
  if (((GGetMapNameDelegate._16_4_ == 0) || (GGetMapNameDelegate._8_8_ == 0)) ||
     (cVar6 = (**(code **)(*(longlong *)GGetMapNameDelegate._8_8_ + 0x38))(), cVar6 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GGetMapNameDelegate,
               &local_58);
    plVar10 = (longlong *)0x0;
    if (GGetMapNameDelegate._16_4_ != 0) {
      plVar10 = (longlong *)GGetMapNameDelegate._8_8_;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    iVar12 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    FString::AssignRange(&local_98,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar12);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    FString::operator=(&local_98,L"LoadTimeFile");
  }
  FString::FString(&local_78,"Windows");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FString::FString(&ProfilingSessionFolderName,L"");
    atexit(`CreateProfileFilename'::__l2::
           _dynamic_atexit_destructor_for__ProfilingSessionFolderName__);
    _Init_thread_footer(&_TSS0);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  iVar12 = 0;
  if (bSetProfilingSessionFolderName == false) {
    FVar8 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)FVar8.Ticks,(FString *)&local_58,L"%m.%d-%H.%M.%S");
    FString::PrintfImpl(&local_c8,L"%s-%s-%s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    uVar3 = local_c8.Data._8_8_;
    iVar14 = local_c8.Data.ArrayNum;
    local_a8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    uVar4 = local_c8.Data._8_8_;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = (int)uVar3;
    local_c8.Data.ArrayMax = SUB84(uVar3,4);
    local_a8.Data.ArrayNum = local_c8.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data._8_8_ = uVar4;
    if ((void *)local_58.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.DestructionSentinel._0_8_);
      iVar14 = local_a8.Data.ArrayNum;
    }
    iVar11 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar11 = iVar12;
    }
    iVar14 = iVar11;
    if (100 < iVar11) {
      iVar14 = 100;
    }
    iVar7 = iVar12;
    if (0 < iVar14) {
      iVar7 = iVar14;
    }
    FString::RemoveAt(&local_a8,0,iVar11 - iVar7,No);
    iVar14 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar14 = iVar12;
    }
    FString::AssignRange
              (&ProfilingSessionFolderName,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar14);
    bSetProfilingSessionFolderName = true;
  }
  else {
    iVar14 = ProfilingSessionFolderName.Data.ArrayNum + -1;
    if (ProfilingSessionFolderName.Data.ArrayNum == 0) {
      iVar14 = iVar12;
    }
    FString::AssignRange
              (&local_a8,(wchar_t *)ProfilingSessionFolderName.Data.AllocatorInstance.Data,iVar14);
  }
  this = FEngineVersion::Current();
  FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
  local_res20[0] = 0;
  pwVar9 = FCommandLine::Get();
  FParse::Value(pwVar9,L"-gABC=",local_res20);
  FString::PrintfImpl(&local_68,L"%s-%s-%i");
  iVar14 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar14 = iVar12;
  }
  iVar11 = iVar14;
  if (100 < iVar14) {
    iVar11 = 100;
  }
  if (0 < iVar11) {
    iVar12 = iVar11;
  }
  FString::RemoveAt(&local_68,0,iVar14 - iVar12,No);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayMax = 0;
  iVar12 = (param_1->Data).ArrayNum;
  local_b8.Data.ArrayNum = 0;
  if (iVar12 < 2) {
    FVar8 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)FVar8.Ticks,(FString *)&local_58,L"%d-%H.%M.%S");
    FString::PrintfImpl(&local_c8,L"%s-%s-%s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = local_c8.Data.ArrayNum;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    if ((void *)local_58.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.DestructionSentinel._0_8_);
    }
  }
  else if (&local_b8 != param_1) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_b8.Data.ArrayNum = iVar12;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,(ForAnyElementType *)&local_b8,iVar12,&local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar12 * 2);
  }
  iVar14 = 0;
  iVar12 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar12 = iVar14;
  }
  iVar11 = iVar12;
  if (100 < iVar12) {
    iVar11 = 100;
  }
  iVar7 = iVar14;
  if (0 < iVar11) {
    iVar7 = iVar11;
  }
  FString::RemoveAt(&local_b8,0,iVar12 - iVar7,No);
  FWindowsPlatformProcess::GetCurrentProcessId();
  FString::PrintfImpl(&local_88,L"Pid%d_%s%s");
  iVar12 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar12 = iVar14;
  }
  iVar11 = iVar12;
  if (100 < iVar12) {
    iVar11 = 100;
  }
  iVar7 = iVar14;
  if (0 < iVar11) {
    iVar7 = iVar11;
  }
  FString::RemoveAt(&local_88,0,iVar12 - iVar7,No);
  FVar5.Data = local_68.Data.AllocatorInstance.Data;
  FVar2.Data = local_a8.Data.AllocatorInstance.Data;
  iVar12 = local_88.Data.ArrayNum + -1;
  if (param_3) {
    iVar11 = local_a8.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    if ((local_a8.Data.ArrayNum == 0) && (iVar12 != -1)) {
      iVar7 = iVar12 + 2;
LAB_141990b57:
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar7 == 0) {
        local_c8.Data._8_8_ = local_a8.Data._8_8_ & 0xffffffff;
        goto LAB_141990c42;
      }
    }
    else {
      iVar7 = iVar12 + 1;
      if (local_a8.Data.ArrayNum == 0) goto LAB_141990b57;
    }
    local_c8.Data.ArrayNum = local_a8.Data.ArrayNum;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar13 = local_a8.Data.ArrayNum + iVar7;
    if ((int)uVar13 < local_a8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_c8,local_a8.Data.ArrayNum,
               &local_c8.Data.ArrayMax);
  }
  else {
    if (local_88.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    iVar11 = local_68.Data.ArrayNum;
    if ((iVar11 == 0) && (iVar12 != -1)) {
      iVar7 = iVar12 + 2;
LAB_141990bf1:
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar7 == 0) {
        local_c8.Data._8_8_ = local_68.Data._8_8_ & 0xffffffff;
        goto LAB_141990c42;
      }
    }
    else {
      iVar7 = iVar12 + 1;
      if (iVar11 == 0) goto LAB_141990bf1;
    }
    local_c8.Data.ArrayNum = iVar11;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar13 = iVar11 + iVar7;
    if ((int)uVar13 < iVar11) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_c8,iVar11,&local_c8.Data.ArrayMax);
    FVar2.Data = FVar5.Data;
  }
  if (iVar11 != 0) {
    memcpy(local_c8.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar11 * 2);
  }
LAB_141990c42:
  FString::PathAppend(&local_c8,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar12);
  FVar2.Data = local_c8.Data.AllocatorInstance.Data;
  iVar12 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar12 = iVar14;
  }
  FString::AssignRange
            (__return_storage_ptr__,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar12);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateProfileFilename @ 141990d50

FString * __cdecl
CreateProfileFilename(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  CreateProfileFilename(__return_storage_ptr__,&local_18,param_1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBuildNameForPerfTesting @ 141994d90

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl GetBuildNameForPerfTesting(FString *__return_storage_ptr__)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FEngineVersion *this;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int local_res8 [2];
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar4,L"-BuildName=",__return_storage_ptr__,true,(wchar_t **)0x0);
  if (bVar3) {
    pFVar5 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    bVar3 = true;
    iVar2 = (__return_storage_ptr__->Data).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar2 * 2 + -2;
    if (iVar2 == 0) {
      pFVar6 = pFVar5 + (longlong)iVar2 * 2;
    }
    do {
      if ((__return_storage_ptr__->Data).ArrayNum != iVar2) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if (((bVar3) || (*(ushort *)pFVar5 < 0x30)) || (0x39 < *(ushort *)pFVar5)) {
        uVar1 = *(ushort *)pFVar5;
        bVar3 = false;
        if (((uVar1 != 0x5f) && (0x19 < (ushort)(uVar1 - 0x61))) && (0x19 < (ushort)(uVar1 - 0x41)))
        goto LAB_141994e41;
      }
      pFVar5 = pFVar5 + 2;
    } while( true );
  }
LAB_141994e74:
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    this = FEngineVersion::Current();
    FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
    local_res8[0] = 0;
    pwVar4 = FCommandLine::Get();
    FParse::Value(pwVar4,L"-gABC=",local_res8);
    FString::PrintfImpl(&local_28,L"CL%d");
    if (__return_storage_ptr__ != &local_28) {
      pFVar5 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
LAB_141994e41:
  if (1 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  FString::Empty(__return_storage_ptr__);
  goto LAB_141994e74;
}

// GetChangeListNumberForPerfTesting @ 141994f30

int __cdecl GetChangeListNumberForPerfTesting(void)

{
  uint uVar1;
  FEngineVersion *this;
  wchar_t *pwVar2;
  uint local_res8 [8];
  
  this = FEngineVersion::Current();
  uVar1 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
  local_res8[0] = 0;
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-gABC=",(int *)local_res8);
  if (local_res8[0] != 0) {
    uVar1 = local_res8[0];
  }
  return uVar1;
}

// IsValidCPPIdentifier @ 1419a0c30

bool __cdecl IsValidCPPIdentifier(FString *param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->Data).ArrayNum;
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  bVar3 = true;
  pFVar5 = pFVar4 + (longlong)iVar2 * 2 + -2;
  if (iVar2 == 0) {
    pFVar5 = pFVar4 + (longlong)iVar2 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (((bVar3) || (*(ushort *)pFVar4 < 0x30)) || (0x39 < *(ushort *)pFVar4)) {
      uVar1 = *(ushort *)pFVar4;
      bVar3 = false;
      if (((uVar1 != 0x5f) && (0x19 < (ushort)(uVar1 - 0x61))) && (0x19 < (ushort)(uVar1 - 0x41))) {
        return false;
      }
    }
    pFVar4 = pFVar4 + 2;
  }
  return true;
}

// LaunchTraceServerCommand @ 1419a0cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl LaunchTraceServerCommand(ELaunchTraceServerCommand param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  DWORD DVar4;
  FString *pFVar5;
  void *pvVar6;
  TStringBuilderBase<wchar_t> *this;
  FStaticBasicLogRecord *pFVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_be8 [32];
  DWORD local_b98 [2];
  FString local_b90;
  _PROCESS_INFORMATION local_b80;
  TStringView<wchar_t> local_b68;
  wchar_t *local_b58;
  undefined4 local_b50;
  FString local_b48;
  _STARTUPINFOW local_b38;
  TStringBuilderBase<wchar_t> local_ac8;
  WCHAR local_aa8 [292];
  wchar_t local_860 [4];
  undefined1 local_858 [16];
  uint local_848;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  pFVar5 = FPaths::EngineDir(&local_b48);
  local_b50 = 0x24;
  local_b68.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar1 = (pFVar5->Data).ArrayNum;
  local_b68.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_b68.Size = 0;
  }
  local_b58 = L"Binaries/Win64/UnrealTraceServer.exe";
  FPaths::CombineInternal(&local_b90,&local_b68,2);
  if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b48.Data.AllocatorInstance.Data);
  }
  bVar2 = FPaths::FileExists(&local_b90);
  if (!bVar2) {
    if (3 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    bVar2 = false;
    goto LAB_1419a110a;
  }
  local_ac8.Base = local_aa8;
  local_ac8.CurPos = local_aa8;
  local_ac8.bIsDynamic = false;
  local_ac8.bIsExternal = false;
  local_ac8.End = local_860;
  pvVar6 = FGenericPlatformString::Memcpy(local_aa8,L"\"",2);
  local_ac8.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  uVar9 = 0;
  uVar10 = local_b90.Data.ArrayNum - 1;
  if (local_b90.Data.ArrayNum == 0) {
    uVar10 = uVar9;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   (&local_ac8,(wchar_t *)local_b90.Data.AllocatorInstance.Data,uVar10);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L"\"",1);
  if (param_1 == Fork) {
    if (local_ac8.End < local_ac8.CurPos + 5) {
      TStringBuilderBase<wchar_t>::Extend(&local_ac8,5);
    }
    pwVar8 = L" fork";
LAB_1419a0e6d:
    pvVar6 = FGenericPlatformString::Memcpy(local_ac8.CurPos,pwVar8,10);
    local_ac8.CurPos = (wchar_t *)((longlong)pvVar6 + 10);
  }
  else if (param_1 == Kill) {
    if (local_ac8.End < local_ac8.CurPos + 5) {
      TStringBuilderBase<wchar_t>::Extend(&local_ac8,5);
    }
    pwVar8 = L" kill";
    goto LAB_1419a0e6d;
  }
  if (param_2) {
    if (local_ac8.End < local_ac8.CurPos + 0xb) {
      TStringBuilderBase<wchar_t>::Extend(&local_ac8,0xb);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_ac8.CurPos,L" --sponsor ",0x16);
    local_ac8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x16);
    FWindowsPlatformProcess::GetCurrentProcessId();
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_ac8,L"%u");
  }
  BVar3 = QueryInformationJobObject
                    ((HANDLE)0x0,JobObjectBasicLimitInformation,local_858,0x40,(LPDWORD)0x0);
  if ((BVar3 != 0) && ((local_848 & 0x800) != 0)) {
    uVar9 = 0x1000000;
  }
  pwVar8 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar8,L"traceshowstore");
  local_b38.cb = 0x68;
  uVar10 = 0x10;
  if (!bVar2) {
    uVar10 = 0x8000000;
  }
  local_b80.dwProcessId = 0;
  local_b80.dwThreadId = 0;
  local_b38.lpReserved = (LPWSTR)0x0;
  local_b38.lpDesktop = (LPWSTR)0x0;
  local_b38.lpTitle = (LPWSTR)0x0;
  local_b38.dwX = 0;
  local_b38.dwY = 0;
  local_b38.dwXSize = 0;
  local_b38.dwYSize = 0;
  local_b38.dwXCountChars = 0;
  local_b38.dwYCountChars = 0;
  local_b38.dwFillAttribute = 0;
  local_b38.dwFlags = 0;
  local_b38.wShowWindow = 0;
  local_b38.cbReserved2 = 0;
  local_b38._68_4_ = 0;
  local_b38.lpReserved2 = (LPBYTE)0x0;
  local_b38.hStdInput = (HANDLE)0x0;
  local_b38.hStdOutput = (HANDLE)0x0;
  local_b38.hStdError = (HANDLE)0x0;
  local_b80.hProcess = (HANDLE)0x0;
  local_b80.hThread = (HANDLE)0x0;
  if (local_ac8.End < local_ac8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_ac8,1);
  }
  *local_ac8.CurPos = L'\0';
  BVar3 = CreateProcessW((LPCWSTR)0x0,local_ac8.Base,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,uVar10 | uVar9,(LPVOID)0x0,(LPCWSTR)0x0,
                         &local_b38,&local_b80);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,DVar4);
    if (2 < (byte)LogCore._0_1_) {
      if (local_ac8.End < local_ac8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_ac8,1);
      }
      *local_ac8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    bVar2 = false;
  }
  else {
    bVar2 = false;
    DVar4 = WaitForSingleObject(local_b80.hProcess,5000);
    if (DVar4 == 0x102) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCore);
      }
    }
    else {
      local_b98[0] = 0xa9e0;
      GetExitCodeProcess(local_b80.hProcess,local_b98);
      if (local_b98[0] == 0) {
        if (param_1 == Kill) {
          if (4 < (byte)LogCore._0_1_) {
            pFVar7 = &LOG_Static;
LAB_1419a10dd:
            UE::Logging::Private::BasicLog<5>(pFVar7,(FLogCategoryBase *)&LogCore);
          }
        }
        else if (4 < (byte)LogCore._0_1_) {
          pFVar7 = (FStaticBasicLogRecord *)&PTR_u_UTS__Unreal_Tra_1506c6a60;
          goto LAB_1419a10dd;
        }
        bVar2 = true;
      }
      else if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCore);
      }
    }
    CloseHandle(local_b80.hProcess);
    CloseHandle(local_b80.hThread);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ac8);
LAB_1419a110a:
  if (local_b90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b90.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// MemoryTrace_Alloc @ 1419a2470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MemoryTrace_Alloc(ulong64 param_1,ulong64 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  ulong64 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (!GTraceAllowed) {
    return;
  }
  iVar1 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  iVar3 = 0;
  if (param_3 != 0) {
    iVar3 = iVar1;
  }
  bVar2 = (byte)(iVar3 << 3) | (byte)param_2 & 7;
  if (param_5 == 0) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      param_5 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      param_5 = 0;
    }
  }
  if (param_4 == 0) {
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a25af;
    UE::Trace::Private::FLogScope::Enter<FMemoryAllocSystemFields>((TLogScope<0> *)&local_38);
LAB_1419a2588:
    *local_38 = param_1;
    *(uint *)(local_38 + 1) = param_5;
    *(int *)((longlong)local_38 + 0xc) = (int)(param_2 >> 3);
    *(byte *)(local_38 + 2) = bVar2;
  }
  else {
    if (param_4 == 1) {
      if (MemAllocChannel->Enabled < 0) goto LAB_1419a25af;
      UE::Trace::Private::FLogScope::Enter<FMemoryAllocVideoFields>((TLogScope<0> *)&local_38);
      goto LAB_1419a2588;
    }
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a25af;
    UE::Trace::Private::FLogScope::Enter<FMemoryAllocFields>((TLogScope<0> *)&local_38);
    *local_38 = param_1;
    *(uint *)(local_38 + 1) = param_5;
    *(int *)((longlong)local_38 + 0xc) = (int)(param_2 >> 3);
    *(byte *)(local_38 + 2) = bVar2;
    *(char *)((longlong)local_38 + 0x11) = (char)param_4;
  }
  *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
LAB_1419a25af:
  MemoryTrace_UpdateInternal();
  return;
}

// MemoryTrace_AnnounceCustomTag @ 1419a25e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl MemoryTrace_AnnounceCustomTag(int param_1,int param_2,wchar_t *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (GTagTrace == (FTagTrace *)0x0) {
    iVar3 = -1;
  }
  else {
    local_48.Data = (FScriptContainerElement *)0x0;
    if (param_3 == (wchar_t *)0x0) {
      local_40 = (FScriptContainerElement *)0x0;
      local_38 = 0;
    }
    else {
      sVar4 = wcslen(param_3);
      local_38 = (int)sVar4;
      uVar7 = local_38 + 1;
      FVar6.Data = (FScriptContainerElement *)0x0;
      if (0x80 < uVar7) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar7,1);
        FVar6.Data = local_48.Data;
      }
      local_40 = local_c8;
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        local_40 = FVar6.Data;
      }
      pcVar5 = FGenericPlatformString::Convert<wchar_t,char>((char *)local_40,uVar7,param_3,uVar7);
      if ((pcVar5 == (char *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar3 = FTagTrace::AnnounceCustomTag(GTagTrace,param_1,param_2,(char *)local_40);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return iVar3;
}

// MemoryTrace_AnnounceFNameTag @ 1419a2730

int __cdecl MemoryTrace_AnnounceFNameTag(FName *param_1)

{
  int iVar1;
  undefined1 local_res10 [4];
  undefined1 local_res14;
  
  if (GTagTrace != (FTagTrace *)0x0) {
    local_res14 = 0;
    iVar1 = FTagTrace::AnnounceFNameTag
                      (GTagTrace,*param_1,-1,(wchar_t *)0x0,(TOptional<int>)local_res10);
    return iVar1;
  }
  return -1;
}

// MemoryTrace_Create @ 1419a2780

FMalloc * __cdecl MemoryTrace_Create(FMalloc *param_1)

{
  FTextSectionEditor lpAddress;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  LPWSTR lpCmdLine;
  size_t sVar6;
  FTrampolineBlock *pFVar7;
  HMODULE hModule;
  HANDLE hProcess;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  uint uVar11;
  size_t sVar12;
  EMemoryTraceInit EVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  FTextSectionEditor local_res8;
  int local_res10 [2];
  uint local_res18;
  longlong local_res20;
  TStringView<wchar_t> local_d8;
  wchar_t *local_c8;
  longlong local_c0;
  LPWSTR *local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined1 local_88 [16];
  wchar_t *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  
  local_res10[0] = 0;
  local_res8.HeadBlock = (FTrampolineBlock *)param_1;
  lpCmdLine = GetCommandLineW();
  local_b8 = CommandLineToArgvW(lpCmdLine,local_res10);
  EVar13 = Disabled;
  if (1 < local_res10[0]) {
    local_c0 = 1;
    local_98 = (longlong)local_res10[0];
    do {
      pwVar16 = local_b8[local_c0];
      sVar6 = 0;
      local_c8 = pwVar16;
      local_a8 = pwVar16;
      if (pwVar16 != (wchar_t *)0x0) {
        sVar6 = wcslen(pwVar16);
      }
      iStack_a0 = (int)sVar6;
      local_d8.DataPtr = local_a8;
      local_d8.Size = (int)sVar6;
      local_d8._12_4_ = uStack_9c;
      iVar2 = UE::String::FindFirstChar(&local_d8,L'-',CaseSensitive);
      while (iVar2 != -1) {
        uVar9 = (uint)sVar6;
        uVar3 = uVar9;
        if ((int)(uVar9 - iVar2) < (int)uVar9) {
          uVar3 = uVar9 - iVar2;
        }
        sVar12 = 0;
        if (0 < (int)uVar3) {
          sVar12 = (size_t)uVar3;
        }
        uVar11 = (uint)sVar12;
        local_a8 = (wchar_t *)(longlong)(int)uVar11;
        lVar15 = (longlong)(int)uVar9 - (longlong)local_a8;
        uVar3 = uVar11;
        if ((int)(uVar11 - 1) < (int)uVar11) {
          uVar3 = uVar11 - 1;
        }
        uStack_70 = 0;
        if (0 < (int)uVar3) {
          uStack_70 = uVar3;
        }
        local_d8.DataPtr = pwVar16 + ((longlong)(int)uVar9 - (longlong)(int)uStack_70);
        local_d8._12_4_ = uStack_6c;
        local_d8.Size = uStack_70;
        local_res18 = uVar11;
        local_res20 = lVar15;
        local_78 = local_d8.DataPtr;
        uVar3 = UE::String::FindFirstChar(&local_d8,L'-',CaseSensitive);
        if (uVar3 == 0xffffffff) {
          uVar3 = uVar11;
        }
        uVar9 = 0;
        if ((int)uVar11 < 0) {
          uVar9 = uVar11;
        }
        uVar1 = uVar11 - uVar9;
        if ((int)uVar3 < (int)(uVar11 - uVar9)) {
          uVar1 = uVar3;
        }
        uVar3 = 0;
        if (0 < (int)uVar1) {
          uVar3 = uVar1;
        }
        uVar11 = 0;
        if ((int)uVar3 < 0) {
          uVar11 = uVar3;
        }
        iVar2 = uVar3 - uVar11;
        if (7 < (int)(uVar3 - uVar11)) {
          iVar2 = 7;
        }
        iVar4 = 0;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        if (iVar4 != 0) {
          iVar2 = FGenericPlatformStricmp::Strnicmp
                            (pwVar16 + (longlong)(int)uVar11 + (int)uVar9 + lVar15,"-trace=",
                             (longlong)iVar4);
          if ((iVar2 == 0) && ("-trace="[iVar4] == '\0')) {
            uVar11 = 7;
            if ((int)uVar3 < 7) {
              uVar11 = uVar3;
            }
            pwVar14 = pwVar16 + (longlong)(int)uVar11 + (int)uVar9 + lVar15;
            if ((int)(uVar3 - 7) < (int)(uVar3 - uVar11)) {
              uVar11 = 7;
            }
            iVar2 = 0;
            if (0 < (int)(uVar3 - uVar11)) {
              iVar2 = uVar3 - uVar11;
            }
            local_88._8_4_ = iVar2;
            local_88._0_8_ = pwVar14;
            lVar15 = local_res20;
            local_d8._12_4_ = local_88._12_4_;
            if (iVar2 != 0) {
              do {
                local_d8.Size = iVar2;
                local_d8.DataPtr = pwVar14;
                iVar5 = UE::String::FindFirstChar(&local_d8,L',',CaseSensitive);
                iVar4 = iVar2;
                if (iVar5 != -1) {
                  iVar4 = iVar5;
                }
                iVar5 = 0;
                if (iVar2 < 0) {
                  iVar5 = iVar2;
                }
                iVar8 = iVar2 - iVar5;
                if (iVar4 < iVar2 - iVar5) {
                  iVar8 = iVar4;
                }
                iVar4 = 0;
                if (0 < iVar8) {
                  iVar4 = iVar8;
                }
                pwVar16 = pwVar14 + iVar5;
                if (iVar4 != 0) {
                  uVar10 = (ulong64)iVar4;
                  iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar16,"memalloc",uVar10);
                  if ((iVar5 == 0) && ("memalloc"[uVar10] == '\0')) {
                    EVar13 = EVar13 | Light;
                  }
                  else {
                    iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar16,"callstack",uVar10);
                    if ((iVar5 == 0) && ("callstack"[uVar10] == '\0')) {
                      EVar13 = EVar13 | Callstacks;
                    }
                    else {
                      iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar16,"memtag",uVar10);
                      if ((iVar5 != 0) || ("memtag"[uVar10] != '\0')) {
                        iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar16,"probing",uVar10);
                        if ((iVar5 == 0) && ("probing"[uVar10] == '\0')) {
                          EVar13 = EVar13 | Probing;
                        }
                        else {
                          iVar5 = iVar4;
                          if (6 < iVar4) {
                            iVar5 = 6;
                          }
                          iVar8 = 0;
                          if (0 < iVar5) {
                            iVar8 = iVar5;
                          }
                          if (iVar8 != 0) {
                            iVar5 = FGenericPlatformStricmp::Strnicmp
                                              (pwVar16,"memory",(longlong)iVar8);
                            if ((iVar5 == 0) && ("memory"[iVar8] == '\0')) {
                              iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar16,"memory",uVar10);
                              if ((iVar5 == 0) && ("memory"[uVar10] == '\0')) {
                                EVar13 = Full;
                                goto LAB_1419a2c59;
                              }
                              iVar5 = FGenericPlatformStricmp::Strnicmp
                                                (pwVar16,"memory_light",uVar10);
                              if ((iVar5 == 0) && ("memory_light"[uVar10] == '\0')) {
                                EVar13 = Light;
                                goto LAB_1419a2c59;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar5 = (iVar2 - iVar4) + -1;
                iVar4 = iVar2;
                if (iVar5 < iVar2) {
                  iVar4 = iVar5;
                }
                iStack_60 = 0;
                if (0 < iVar4) {
                  iStack_60 = iVar4;
                }
                pwVar14 = pwVar14 + ((longlong)iVar2 - (longlong)iStack_60);
                local_88._8_4_ = iStack_60;
                local_88._0_8_ = pwVar14;
                local_88._12_4_ = uStack_5c;
                iVar2 = iStack_60;
                local_d8._12_4_ = uStack_5c;
                local_68 = pwVar14;
              } while (iStack_60 != 0);
              sVar12 = (size_t)local_res18;
              lVar15 = local_res20;
              pwVar16 = local_c8;
            }
          }
        }
        uVar9 = 1;
        if (1 < (int)uVar3) {
          uVar9 = uVar3;
        }
        uVar9 = (int)sVar12 - uVar9;
        if ((int)uVar9 < (int)sVar12) {
          sVar12 = (size_t)uVar9;
        }
        sVar6 = 0;
        if (0 < (int)sVar12) {
          sVar6 = sVar12;
        }
        iStack_50 = (int)sVar6;
        pwVar16 = pwVar16 + (lVar15 - iStack_50) + (longlong)local_a8;
        local_d8._12_4_ = uStack_4c;
        local_d8.Size = iStack_50;
        local_d8.DataPtr = pwVar16;
        local_c8 = pwVar16;
        local_a8 = pwVar16;
        _iStack_a0 = local_d8._8_8_;
        local_58 = pwVar16;
        iVar2 = UE::String::FindFirstChar(&local_d8,L'-',CaseSensitive);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 < local_98);
  }
LAB_1419a2c59:
  pFVar7 = (FTrampolineBlock *)MemoryTrace_CreateInternal(local_res8.HeadBlock,EVar13);
  LocalFree(local_b8);
  if (pFVar7 != local_res8.HeadBlock) {
    FVirtualWinApiHooks::bLight = false;
    local_res8.HeadBlock = (FTrampolineBlock *)0x0;
    FVirtualWinApiHooks::VmFreeOrig =
         FTextSectionEditor::HookImpl(&local_res8,VirtualFree_exref,FVirtualWinApiHooks::VmFree);
    FVirtualWinApiHooks::VmFreeExOrig =
         FTextSectionEditor::HookImpl(&local_res8,VirtualFreeEx_exref,FVirtualWinApiHooks::VmFreeEx)
    ;
    FVirtualWinApiHooks::VmAlloc2Orig =
         (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0;
    hModule = LoadLibraryW(L"kernelbase.dll");
    if (hModule != (HMODULE)0x0) {
      FVirtualWinApiHooks::VmAlloc2Orig =
           (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
           GetProcAddress(hModule,"VirtualAlloc2");
      FreeLibrary(hModule);
    }
    if (FVirtualWinApiHooks::VmAlloc2Orig !=
        (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0) {
      FVirtualWinApiHooks::VmAlloc2Orig =
           FTextSectionEditor::HookImpl
                     (&local_res8,FVirtualWinApiHooks::VmAlloc2Orig,FVirtualWinApiHooks::VmAlloc2);
    }
    FVirtualWinApiHooks::VmAllocExOrig =
         FTextSectionEditor::HookImpl
                   (&local_res8,VirtualAllocEx_exref,FVirtualWinApiHooks::VmAllocEx);
    FVirtualWinApiHooks::VmAllocOrig =
         FTextSectionEditor::HookImpl(&local_res8,VirtualAlloc_exref,FVirtualWinApiHooks::VmAlloc);
    for (lpAddress.HeadBlock = local_res8.HeadBlock; lpAddress.HeadBlock != (FTrampolineBlock *)0x0;
        lpAddress.HeadBlock = (lpAddress.HeadBlock)->Next) {
      VirtualProtect(lpAddress.HeadBlock,(ulonglong)(lpAddress.HeadBlock)->Size,0x20,
                     (PDWORD)&local_res8);
    }
    hProcess = GetCurrentProcess();
    FlushInstructionCache(hProcess,(LPCVOID)0x0,0);
  }
  return (FMalloc *)pFVar7;
}

// MemoryTrace_CreateInternal @ 1419a2df0

FMalloc * __cdecl MemoryTrace_CreateInternal(FMalloc *param_1,int param_2,char **param_3)

{
  EMemoryTraceInit EVar1;
  FMalloc *pFVar2;
  
  EVar1 = MemoryTrace_ShouldEnable<char>(param_2,param_3);
  pFVar2 = MemoryTrace_CreateInternal(param_1,EVar1);
  return pFVar2;
}

// MemoryTrace_CreateInternal @ 1419a2e20

FMalloc * __cdecl MemoryTrace_CreateInternal(FMalloc *param_1,int param_2,wchar_t **param_3)

{
  EMemoryTraceInit EVar1;
  FMalloc *pFVar2;
  
  EVar1 = MemoryTrace_ShouldEnable<wchar_t>(param_2,param_3);
  pFVar2 = MemoryTrace_CreateInternal(param_1,EVar1);
  return pFVar2;
}

// MemoryTrace_CreateInternal @ 1419a2e50

FMalloc * __cdecl MemoryTrace_CreateInternal(FMalloc *param_1,EMemoryTraceInit param_2)

{
  if ((param_2 & AllocEvents) == Disabled) {
    return param_1;
  }
  atexit(`MemoryTrace_CreateInternal'::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  GTraceMalloc.Buffer._0_8_ = &___7FTraceMalloc__6B_;
  GTraceMalloc.bIsConstructed = true;
  GTraceMalloc.Buffer._8_8_ = param_1;
  if ((param_2 & Tags) != Disabled) {
    GTagTrace = FTraceMalloc::Malloc((FTraceMalloc *)&GTraceMalloc,0x38,8);
    FTagTrace::FTagTrace(GTagTrace,(FMalloc *)&GTraceMalloc);
  }
  if ((param_2 & Callstacks) != Disabled) {
    CallstackTrace_Create((FMalloc *)&GTraceMalloc);
  }
  SMallocWrapper.Buffer._8_8_ = param_1;
  SMallocWrapper.Buffer._0_8_ = &___7FMallocWrapper__6B_;
  SMallocWrapper.bIsConstructed = true;
  return (FMalloc *)&SMallocWrapper;
}

// MemoryTrace_EnableTracePump @ 1419a2f20

void __cdecl MemoryTrace_EnableTracePump(void)

{
  GDoPumpTrace = true;
  return;
}

// MemoryTrace_Free @ 1419a2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MemoryTrace_Free(ulong64 param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (!GTraceAllowed) {
    return;
  }
  if (param_3 == 0) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      param_3 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      param_3 = 0;
    }
  }
  if (param_2 == 0) {
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a3036;
    UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_28);
LAB_1419a301a:
    *local_28 = param_1;
    *(uint *)(local_28 + 1) = param_3;
  }
  else {
    if (param_2 == 1) {
      if (MemAllocChannel->Enabled < 0) goto LAB_1419a3036;
      UE::Trace::Private::FLogScope::Enter<FMemoryFreeVideoFields>((TLogScope<0> *)&local_28);
      goto LAB_1419a301a;
    }
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a3036;
    UE::Trace::Private::FLogScope::Enter<FMemoryFreeFields>((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(uint *)(local_28 + 1) = param_3;
    *(char *)((longlong)local_28 + 0xc) = (char)param_2;
  }
  *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
LAB_1419a3036:
  MemoryTrace_UpdateInternal();
  return;
}

// MemoryTrace_GetActiveTag @ 1419a3060

int __cdecl MemoryTrace_GetActiveTag(void)

{
  return *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xbb0);
}

// MemoryTrace_GetAllocator @ 1419a3090

FMalloc * __cdecl MemoryTrace_GetAllocator(void)

{
  FUndestructed<FTraceMalloc> *pFVar1;
  
  pFVar1 = (FUndestructed<FTraceMalloc> *)0x0;
  if (GTraceMalloc.bIsConstructed) {
    pFVar1 = &GTraceMalloc;
  }
  return (FMalloc *)pFVar1;
}

// MemoryTrace_HeapSpec @ 1419a30b0

uint __cdecl MemoryTrace_HeapSpec(uint param_1,wchar_t *param_2,EMemoryTraceHeapFlags param_3)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  atomic<unsigned_int> *local_28;
  int local_20;
  
  aVar2 = HeapIdCount;
  if (!GTraceAllowed) {
    return 0;
  }
  LOCK();
  HeapIdCount = (atomic<unsigned_int>)((int)HeapIdCount + 1);
  UNLOCK();
  sVar5 = wcslen(param_2);
  if ((uint)aVar2 <= param_1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ParentId < Id",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MemoryTrace.cpp"
                       ,0x2c3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryHeapSpecFields>
              ((FImportantLogScope *)&stack0xffffffffffffffd8,(uint)sVar5 * 2);
    *local_28 = aVar2;
    local_28[1] = (atomic<unsigned_int>)param_1;
    FMemoryHeapSpecFields::Name<wchar_t_const_*,unsigned_int>
              ((FMemoryHeapSpecFields *)&stack0xffffffffffffffd8,param_2,(uint)sVar5);
    *(EMemoryTraceHeapFlags *)(local_28 + 2) = param_3;
    LOCK();
    *(int *)(&local_28->field_0x0 + local_20) = *(int *)(&local_28->field_0x0 + local_20) + 1;
    UNLOCK();
  }
  return (uint)aVar2;
}

// MemoryTrace_InitMemoryProbe @ 1419a31a0

void __cdecl MemoryTrace_InitMemoryProbe(void)

{
  return;
}

// MemoryTrace_InitTags @ 1419a31b0

void __cdecl MemoryTrace_InitTags(FMalloc *param_1)

{
  GTagTrace = (FTagTrace *)(**(code **)((longlong)*param_1 + 0x28))(param_1,0x38,8);
  FTagTrace::FTagTrace(GTagTrace,param_1);
  return;
}

// MemoryTrace_Initialize @ 1419a31f0

void __cdecl MemoryTrace_Initialize(void)

{
  ulong64 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FGenericPlatformMemoryConstants *pFVar5;
  FNextSharedBuffer *pFVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  FSharedBuffer *pFVar10;
  undefined4 local_res8;
  FNextSharedBuffer local_18;
  
  GTraceAllowed = true;
  pFVar5 = FWindowsPlatformMemory::GetConstants();
  if (-1 < MemAllocChannel->Enabled) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_unsigned_int___cdecl_FMemoryInitFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryInitFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_FMemoryInitFields::GetUid(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_FMemoryInitFields::GetUid(void)'::__l2::Uid =
             FMemoryInitFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryInitFields::GetUid(void)'::
                             __l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar10 = UE::Trace::Private::GSharedBuffer;
    uVar9 = `public:_static_unsigned_int___cdecl_FMemoryInitFields::GetUid(void)'::__l2::Uid >> 1;
    LOCK();
    iVar7 = UE::Trace::Private::GSharedBuffer->Cursor;
    UE::Trace::Private::GSharedBuffer->Cursor = UE::Trace::Private::GSharedBuffer->Cursor + -0x4c01;
    UNLOCK();
    if (iVar7 + -0x4c01 < 0) {
      pFVar6 = UE::Trace::Private::Writer_NextSharedBuffer(&local_18,pFVar10,iVar7,-0x4c01);
      pFVar10 = pFVar6->Buffer;
      iVar7 = pFVar6->RegionStart;
    }
    puVar8 = (undefined4 *)((longlong)pFVar10 - ((longlong)iVar7 >> 10));
    local_res8 = CONCAT22(0xf,(short)uVar9);
    *puVar8 = local_res8;
    puVar1 = (ulong64 *)(puVar8 + 1);
    *puVar1 = pFVar5->PageSize;
    puVar8[3] = 0x1000;
    *(undefined2 *)(puVar8 + 4) = 0x802;
    *(undefined1 *)((longlong)puVar8 + 0x12) = 3;
    LOCK();
    piVar2 = (int *)((longlong)((int)pFVar10 - (int)puVar1) + (longlong)puVar1);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar9 = MemoryTrace_RootHeapSpec(L"System memory",None);
  if (uVar9 != 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("SystemRootHeap == EMemoryTraceRootHeap::SystemMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MemoryTrace.cpp"
                       ,0x1c0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = MemoryTrace_RootHeapSpec(L"Video memory",None);
  if (uVar9 != 1) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("VideoRootHeap == EMemoryTraceRootHeap::VideoMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MemoryTrace.cpp"
                       ,0x1c2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  CallstackTrace_Initialize();
  return;
}

// MemoryTrace_IsActive @ 1419a33b0

bool __cdecl MemoryTrace_IsActive(void)

{
  return GTraceAllowed;
}

// MemoryTrace_MarkAllocAsHeap @ 1419a33c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MemoryTrace_MarkAllocAsHeap
          (ulong64 param_1,uint param_2,EMemoryTraceHeapAllocationFlags param_3,uint param_4)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (GTraceAllowed) {
    if (param_4 == 0) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        param_4 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        param_4 = 0;
      }
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryHeapMarkAllocFields>((TLogScope<0> *)&local_28);
      *local_28 = param_1;
      *(uint *)(local_28 + 1) = param_4;
      *(ushort *)((longlong)local_28 + 0xc) = (ushort)(param_3 | Heap);
      *(uint *)((longlong)local_28 + 0xe) = param_2;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
  }
  return;
}

// MemoryTrace_ReallocAlloc @ 1419a34c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MemoryTrace_ReallocAlloc(ulong64 param_1,ulong64 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  ulong64 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (!GTraceAllowed) {
    return;
  }
  iVar1 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  iVar3 = 0;
  if (param_3 != 0) {
    iVar3 = iVar1;
  }
  bVar2 = (byte)(iVar3 << 3) | (byte)param_2 & 7;
  if (param_5 == 0) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      param_5 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      param_5 = 0;
    }
  }
  if (param_4 == 0) {
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a35d6;
    UE::Trace::Private::FLogScope::Enter<FMemoryReallocAllocSystemFields>((TLogScope<0> *)&local_38)
    ;
    *local_38 = param_1;
    *(uint *)(local_38 + 1) = param_5;
    *(int *)((longlong)local_38 + 0xc) = (int)(param_2 >> 3);
    *(byte *)(local_38 + 2) = bVar2;
  }
  else {
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a35d6;
    UE::Trace::Private::FLogScope::Enter<FMemoryReallocAllocFields>((TLogScope<0> *)&local_38);
    *local_38 = param_1;
    *(uint *)(local_38 + 1) = param_5;
    *(int *)((longlong)local_38 + 0xc) = (int)(param_2 >> 3);
    *(byte *)(local_38 + 2) = bVar2;
    *(char *)((longlong)local_38 + 0x11) = (char)param_4;
  }
  *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
LAB_1419a35d6:
  MemoryTrace_UpdateInternal();
  return;
}

// MemoryTrace_ReallocFree @ 1419a3610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MemoryTrace_ReallocFree(ulong64 param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (!GTraceAllowed) {
    return;
  }
  if (param_3 == 0) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      param_3 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      param_3 = 0;
    }
  }
  if (param_2 == 0) {
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a36ef;
    UE::Trace::Private::FLogScope::Enter<FMemoryReallocFreeSystemFields>((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(uint *)(local_28 + 1) = param_3;
  }
  else {
    if (MemAllocChannel->Enabled < 0) goto LAB_1419a36ef;
    UE::Trace::Private::FLogScope::Enter<FMemoryReallocFreeFields>((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(uint *)(local_28 + 1) = param_3;
    *(char *)((longlong)local_28 + 0xc) = (char)param_2;
  }
  *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
LAB_1419a36ef:
  MemoryTrace_UpdateInternal();
  return;
}

// MemoryTrace_RootHeapSpec @ 1419a3720

uint __cdecl MemoryTrace_RootHeapSpec(wchar_t *param_1,EMemoryTraceHeapFlags param_2)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  atomic<unsigned_int> *local_18;
  int local_10;
  
  aVar3 = RootHeapCount;
  if (!GTraceAllowed) {
    return 0;
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)RootHeapCount + 1);
  UNLOCK();
  bVar4 = 0xf < (uint)RootHeapCount;
  RootHeapCount = aVar2;
  if (bVar4) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Id <= EMemoryTraceRootHeap::EndReserved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MemoryTrace.cpp"
                       ,0x2d8,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  sVar6 = wcslen(param_1);
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryHeapSpecFields>
              ((FImportantLogScope *)&stack0xffffffffffffffe8,(uint)sVar6 * 2);
    *local_18 = aVar3;
    local_18[1] = (atomic<unsigned_int>)0xffffffff;
    FMemoryHeapSpecFields::Name<wchar_t_const_*,unsigned_int>
              ((FMemoryHeapSpecFields *)&stack0xffffffffffffffe8,param_1,(uint)sVar6);
    *(EMemoryTraceHeapFlags *)(local_18 + 2) = param_2 | Root;
    LOCK();
    *(int *)(&local_18->field_0x0 + local_10) = *(int *)(&local_18->field_0x0 + local_10) + 1;
    UNLOCK();
  }
  return (uint)aVar3;
}

// MemoryTrace_SwapOp @ 1419a3820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MemoryTrace_SwapOp(ulong64 param_1,EMemoryTraceSwapOperation param_2,uint param_3,uint param_4)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (GTraceAllowed) {
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryMemorySwapOpFields>((TLogScope<0> *)&local_28);
      *local_28 = param_1;
      *(uint *)(local_28 + 1) = param_4;
      *(uint *)((longlong)local_28 + 0xc) = param_3;
      *(EMemoryTraceSwapOperation *)(local_28 + 2) = param_2;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  return;
}

// MemoryTrace_UnmarkAllocAsHeap @ 1419a38d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MemoryTrace_UnmarkAllocAsHeap(ulong64 param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (GTraceAllowed) {
    if (param_3 == 0) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        param_3 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        param_3 = 0;
      }
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryHeapUnmarkAllocFields>((TLogScope<0> *)&local_28);
      *local_28 = param_1;
      *(uint *)(local_28 + 1) = param_3;
      *(uint *)((longlong)local_28 + 0xc) = param_2;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
  }
  return;
}

// MemoryTrace_UpdateAlloc @ 1419a39b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MemoryTrace_UpdateAlloc(ulong64 param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (GTraceAllowed) {
    if (param_3 == 0) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        param_3 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        param_3 = 0;
      }
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryUpdateAllocFields>((TLogScope<0> *)&local_28);
      *local_28 = param_1;
      *(uint *)(local_28 + 1) = param_3;
      *(char *)((longlong)local_28 + 0xc) = (char)param_2;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  return;
}

// MemoryTrace_UpdateInternal @ 1419a3aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MemoryTrace_UpdateInternal(void)

{
  uint uVar1;
  atomic<unsigned_int> aVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)GMarkerCounter + 1);
  UNLOCK();
  uVar1 = (uint)GMarkerCounter & 0xfff;
  GMarkerCounter = aVar2;
  if ((uVar1 == 0) && (-1 < MemAllocChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FMemoryMarkerFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  if (GDoPumpTrace != false) {
    UE::Trace::Update();
  }
  return;
}

// Modules_Create @ 1419a3b40

void __cdecl Modules_Create(FMalloc *param_1)

{
  if ((FModuleTrace::Instance == (FModuleTrace *)0x0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0)) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FModuleTrace::Instance = &Instance;
      atexit(`Modules_Create'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&_TSS0);
      return;
    }
  }
  return;
}

// Modules_Initialize @ 1419a3bc0

void __cdecl Modules_Initialize(void)

{
  undefined4 *puVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<unsigned_int> aVar5;
  FModuleTrace *this;
  bool bVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  int iVar8;
  longlong *plVar9;
  atomic<unsigned_int> aVar10;
  FImportantLogScope FStack_28;
  FImportantLogScope FStack_18;
  
  this = FModuleTrace::Instance;
  aVar10 = HeapIdCount;
  if (FModuleTrace::Instance == (FModuleTrace *)0x0) {
    return;
  }
  if (GTraceAllowed) {
    LOCK();
    aVar5 = (atomic<unsigned_int>)((int)HeapIdCount + 1);
    UNLOCK();
    bVar6 = HeapIdCount == (atomic<unsigned_int>)0x0;
    HeapIdCount = aVar5;
    if ((bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ParentId < Id",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MemoryTrace.cpp"
                           ,0x2c3,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FImportantLogScope::Enter<FMemoryHeapSpecFields>(&FStack_28,0xc);
      puVar1 = (undefined4 *)(FStack_28.Ptr + FStack_28.AuxCursor);
      *(atomic<unsigned_int> *)FStack_28.Ptr = aVar10;
      *(atomic<unsigned_int> *)((longlong)FStack_28.Ptr + 4) = (atomic<unsigned_int>)0x0;
      *puVar1 = 0x18300;
      *(undefined1 *)puVar1 = 1;
      *(undefined8 *)(puVar1 + 1) = u_Module._0_8_;
      puVar1[3] = u_Module._8_4_;
      iVar8 = FStack_28.AuxCursor + 0xc;
      FStack_28.AuxCursor = FStack_28.AuxCursor + 0x10;
      (&((atomic<unsigned_int> *)((longlong)FStack_28.Ptr + 4))->field_0x0)[iVar8] = 3;
      *(undefined2 *)((longlong)FStack_28.Ptr + 8) = 0;
      LOCK();
      *(int *)(FStack_28.Ptr + FStack_28.BufferOffset) =
           *(int *)(FStack_28.Ptr + FStack_28.BufferOffset) + 1;
      UNLOCK();
    }
  }
  else {
    aVar10 = (atomic<unsigned_int>)0x0;
  }
  this->ProgramHeapId = (uint)aVar10;
  if (-1 < ModuleChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FDiagnosticsModuleInitFields>(&FStack_18,3);
    puVar2 = FStack_18.Ptr + FStack_18.AuxCursor;
    puVar2[0] = '\0';
    puVar2[1] = '`';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = FStack_18.Ptr + FStack_18.AuxCursor;
    *puVar2 = '\x01';
    *(short *)(puVar2 + 4) = s_pdb._0_2_;
    puVar2[6] = s_pdb[2];
    FStack_18.AuxCursor = FStack_18.AuxCursor + 7;
    FStack_18.Ptr[FStack_18.AuxCursor] = '\x03';
    *FStack_18.Ptr = '\0';
    LOCK();
    *(int *)(FStack_18.Ptr + FStack_18.BufferOffset) =
         *(int *)(FStack_18.Ptr + FStack_18.BufferOffset) + 1;
    UNLOCK();
  }
  hModule = LoadLibraryW(L"ntdll.dll");
  if ((hModule == (HMODULE)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("NtDll",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsModuleDiagnostics.cpp"
                         ,0x18,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = GetProcAddress(hModule,"LdrRegisterDllNotification");
  (*pFVar7)(0,`FModuleTrace::Initialize'::__l2::<lambda_1>::<lambda_invoker_cdecl>,this,
            &this->CallbackCookie);
  plVar9 = *(longlong **)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x18) + 0x20);
  lVar3 = plVar9[1];
  do {
    if (plVar9[4] == 0) {
      return;
    }
    FModuleTrace::OnDllLoaded(this,(_UNICODE_STRING *)(plVar9 + 7),plVar9[4]);
    plVar9 = (longlong *)*plVar9;
  } while (plVar9 != (longlong *)lVar3);
  return;
}

// Modules_Subscribe @ 1419a3be0

void __cdecl Modules_Subscribe(_func___cdecl_void_bool_void_ptr_wchar_t_ptr *param_1)

{
  int *piVar1;
  code *pcVar2;
  FModuleTrace *pFVar3;
  bool bVar4;
  int iVar5;
  TTypeCompatibleBytes<void_(__cdecl*)(bool,void_*,wchar_t_const_*)> local_18;
  
  pFVar3 = FModuleTrace::Instance;
  if (FModuleTrace::Instance != (FModuleTrace *)0x0) {
    local_18.Pad = (uchar  [8])param_1;
    if ((FModuleTrace::Instance <= (FModuleTrace *)&stack0xffffffffffffffe8) &&
       (&stack0xffffffffffffffe8 <
        (FModuleTrace::Instance->Subscribers).AllocatorInstance.InlineData +
        (FModuleTrace::Instance->Subscribers).ArrayMax)) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = (pFVar3->Subscribers).ArrayNum;
    piVar1 = &(pFVar3->Subscribers).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<void_(__cdecl*)(bool,void_*,wchar_t_const_*)>_>
                        (0x808,(ForElementType<void_(__cdecl*)(bool,void_*,wchar_t_const_*)> *)
                               pFVar3,piVar1);
    }
    (pFVar3->Subscribers).ArrayNum = iVar5 + 1;
    *&(pFVar3->Subscribers).AllocatorInstance.InlineData[iVar5].Pad = local_18.Pad;
  }
  return;
}

// PIXCopyEventStringArgumentFast @ 1419a6320

void __cdecl PIXCopyEventStringArgumentFast(ulong64 **param_1,ulong64 *param_2,char *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = *param_1;
  do {
    if (param_2 <= puVar2) {
      return;
    }
    uVar1 = *(ulonglong *)param_3;
    param_3 = (char *)((longlong)param_3 + 8);
    *puVar2 = uVar1;
    puVar2 = *param_1 + 1;
    *param_1 = puVar2;
  } while ((uVar1 + 0xfefefefefefefeff & ~uVar1 & 0x8080808080808080) == 0);
  return;
}

// PIXCopyEventStringArgumentFast @ 1419a6390

void __cdecl PIXCopyEventStringArgumentFast(ulong64 **param_1,ulong64 *param_2,wchar_t *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = *param_1;
  do {
    if (param_2 <= puVar2) {
      return;
    }
    uVar1 = *(ulonglong *)param_3;
    param_3 = param_3 + 4;
    *puVar2 = uVar1;
    puVar2 = *param_1 + 1;
    *param_1 = puVar2;
  } while ((short)uVar1 != 0 &&
           ((uVar1 & 0xffff0000) != 0 &&
           ((uVar1 & 0xffff00000000) != 0 && (uVar1 & 0xffff000000000000) != 0)));
  return;
}

// PIXCopyEventStringArgumentSlow @ 1419a6430

void __cdecl PIXCopyEventStringArgumentSlow(ulong64 **param_1,ulong64 *param_2,char *param_3)

{
  char *pcVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong *puVar10;
  
  puVar10 = *param_1;
  if (puVar10 < param_2) {
    pcVar9 = param_3 + 2;
    while( true ) {
      uVar8 = (ulonglong)(byte)pcVar9[-2];
      if (uVar8 == 0) break;
      if (pcVar9[-1] == '\0') {
LAB_1419a64f0:
        *puVar10 = uVar8;
        *param_1 = *param_1 + 1;
        return;
      }
      uVar2 = CONCAT11(pcVar9[-1],pcVar9[-2]);
      uVar8 = (ulonglong)uVar2;
      if (*pcVar9 == '\0') goto LAB_1419a64f0;
      uVar3 = CONCAT12(*pcVar9,uVar2);
      uVar8 = (ulonglong)uVar3;
      if (pcVar9[1] == '\0') goto LAB_1419a64f0;
      uVar4 = CONCAT13(pcVar9[1],uVar3);
      uVar8 = (ulonglong)uVar4;
      if (pcVar9[2] == '\0') goto LAB_1419a64f0;
      uVar5 = CONCAT14(pcVar9[2],uVar4);
      uVar8 = (ulonglong)uVar5;
      if (pcVar9[3] == '\0') goto LAB_1419a64f0;
      uVar6 = CONCAT15(pcVar9[3],uVar5);
      uVar8 = (ulonglong)uVar6;
      if (pcVar9[4] == '\0') goto LAB_1419a64f0;
      uVar7 = CONCAT16(pcVar9[4],uVar6);
      uVar8 = (ulonglong)uVar7;
      pcVar1 = pcVar9 + 5;
      if (*pcVar1 == '\0') goto LAB_1419a64f0;
      pcVar9 = pcVar9 + 8;
      *puVar10 = CONCAT17(*pcVar1,uVar7);
      *param_1 = *param_1 + 1;
      puVar10 = *param_1;
      if (param_2 <= puVar10) {
        return;
      }
    }
    *puVar10 = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}

// PIXCopyEventStringArgumentSlow @ 1419a6510

void __cdecl PIXCopyEventStringArgumentSlow(ulong64 **param_1,ulong64 *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  uint uVar2;
  uint6 uVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  ulonglong *puVar6;
  
  puVar6 = *param_1;
  if (puVar6 < param_2) {
    pwVar5 = param_3 + 2;
    while( true ) {
      uVar4 = (ulonglong)(ushort)pwVar5[-2];
      if (uVar4 == 0) break;
      if (pwVar5[-1] == L'\0') {
LAB_1419a6570:
        *puVar6 = uVar4;
        *param_1 = *param_1 + 1;
        return;
      }
      uVar2 = CONCAT22(pwVar5[-1],pwVar5[-2]);
      uVar4 = (ulonglong)uVar2;
      if (*pwVar5 == L'\0') goto LAB_1419a6570;
      uVar3 = CONCAT24(*pwVar5,uVar2);
      uVar4 = (ulonglong)uVar3;
      pwVar1 = pwVar5 + 1;
      if (*pwVar1 == L'\0') goto LAB_1419a6570;
      pwVar5 = pwVar5 + 4;
      *puVar6 = CONCAT26(*pwVar1,uVar3);
      *param_1 = *param_1 + 1;
      puVar6 = *param_1;
      if (param_2 <= puVar6) {
        return;
      }
    }
    *puVar6 = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}

// PIXEndEventAllocate @ 1419a6590

void __cdecl PIXEventsDetail::PIXEndEventAllocate(PIXEventsThreadInfo *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = PIXEventsReplaceBlock(param_1,1);
  if ((lVar2 != 0) && (puVar1 = param_1->destination, puVar1 < param_1->biasedLimit)) {
    *puVar1 = lVar2 << 0x14 | 1;
    puVar1[1] = 0xfff80;
    param_1->destination = puVar1 + 1;
  }
  return;
}

// ParseTokens @ 1419a65f0

void __cdecl
ParseTokens(TStringView<wchar_t> *param_1,bool param_2,
           TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
           TArray<FString,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  TStringView<wchar_t> local_58;
  code *local_48;
  undefined1 **local_40;
  TStringView<wchar_t> local_38;
  undefined1 *local_28;
  TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *local_20;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_18;
  undefined1 *local_10;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28 = local_res10;
  local_58.Size = 1;
  local_18 = param_5;
  local_10 = local_res20;
  local_40 = &local_28;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`ParseTokens'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call;
  local_58.DataPtr = L",";
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  local_20 = param_3;
  UE::String::ParseTokens
            (&local_38,&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_48,None)
  ;
  return;
}

// SendDataToPCViaUnrealConsole @ 1419a8fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SendDataToPCViaUnrealConsole(FString *param_1,FString *param_2)

{
  IFileManager *pIVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pIVar1 = IFileManager::Get();
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x100))(pIVar1,&local_38,pwVar3);
  if (2 < (byte)LogProfilingDebugging._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogProfilingDebugging);
  }
  FString::ConcatFF(&local_18,param_1,&local_38);
  FString::ConcatFC(&local_28,&local_18,L"\r\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  FMsg::SendNotificationString((wchar_t *)FVar2.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// StartFromCommandlineArguments @ 1419abde0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl StartFromCommandlineArguments(wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EConnectionType EVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  pmf_54149989 local_res10;
  FString local_48;
  FString local_38;
  
  pFVar7 = (FScriptContainerElement *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar2 = FParse::Value(param_1,L"-trace=",&local_38,false,(wchar_t **)0x0);
  if ((!bVar2) && (bVar2 = FParse::Param(param_1,L"trace"), bVar2)) {
    FString::operator=(&local_38,GDefaultChannels.ChannelList);
  }
  EVar5 = None;
  bVar2 = FParse::Param(param_1,L"tracefiletrunc");
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar3 = FParse::Value(param_1,L"-tracehost=",&local_48,true,(wchar_t **)0x0);
  if (bVar3) {
    EVar5 = Network;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
LAB_1419abf2e:
    if (local_38.Data.ArrayNum < 2) {
      FString::operator=(&local_38,GDefaultChannels.ChannelList);
      goto LAB_1419abf44;
    }
LAB_1419abf4a:
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
    if (GTraceAutoStart == false) {
      local_res10 = (pmf_54149989)FTraceAuxiliaryImpl::AddCommandlineChannel;
      FTraceAuxiliaryImpl::
      ForEachChannel<void_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&),FLogCategoryLogTrace_&>
                (&GTraceAuxiliary,(wchar_t *)local_38.Data.AllocatorInstance.Data,true,&local_res10,
                 &LogTrace);
    }
    else {
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1835,"FTraceAux_Start",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                   ,0x72b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
      }
      bVar4 = TraceAuxiliaryStartShared
                        ((wchar_t *)FVar1.Data,(FOptions *)&local_res10,(FLogCategoryBase *)&LogCore
                        );
      if (bVar4) {
        if (((bVar2) && (EVar5 == File)) && (FVar6.Data != (FScriptContainerElement *)0x0)) {
          GTraceAuxiliary.bTruncateFile = true;
        }
        bVar2 = FTraceAuxiliaryImpl::Connect
                          (&GTraceAuxiliary,EVar5,(wchar_t *)FVar6.Data,(FLogCategoryBase *)&LogCore
                           ,0);
        if (bVar3) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto LAB_1419abf7d;
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  else {
    bVar3 = FParse::Value(param_1,L"-tracehost",&local_48,true,(wchar_t **)0x0);
    if (bVar3) {
      EVar5 = Network;
      FVar6.Data = (FScriptContainerElement *)L"localhost";
      goto LAB_1419abf2e;
    }
    bVar3 = FParse::Value(param_1,L"-tracefile=",&local_48,true,(wchar_t **)0x0);
    if (bVar3) {
      EVar5 = File;
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
      if ((local_48.Data.ArrayNum < 2) && (FVar6.Data = pFVar7, 2 < (byte)LogTrace._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
      goto LAB_1419abf2e;
    }
    bVar3 = FParse::Param(param_1,L"tracefile");
    FVar6.Data = pFVar7;
    if (bVar3) {
      EVar5 = File;
      FVar6.Data = (FScriptContainerElement *)0x0;
      goto LAB_1419abf2e;
    }
LAB_1419abf44:
    if (1 < local_38.Data.ArrayNum) goto LAB_1419abf4a;
  }
  bVar2 = false;
LAB_1419abf7d:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// TraceAuxiliaryConnectEpilogue @ 1419acc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryConnectEpilogue(void)

{
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  UE::Trace::EnumerateChannels
            (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,&local_138);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TraceAuxiliaryDisableChannels @ 1419accd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryDisableChannels(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_3d8 [32];
  undefined8 local_3a8;
  pmf_41f21a49 local_3a0;
  undefined8 local_398;
  pmf_41f21a49 local_390;
  undefined8 local_388;
  pmf_41f21a49 local_380;
  TStringBuilderBase<wchar_t> local_378;
  wchar_t local_358 [128];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  if (param_1->ArrayNum == 0) {
    local_378.Base = local_358;
    local_378.bIsDynamic = false;
    local_378.bIsExternal = false;
    local_378.CurPos = local_358;
    local_378.End = (wchar_t *)&local_258;
    UE::Trace::EnumerateChannels
              (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>,&local_378);
    local_3a0 = (pmf_41f21a49)FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>;
    local_3a8 = 0;
    if (local_378.End < (TStringBuilderBase<wchar_t> *)(local_378.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_378,1);
    }
    *local_378.CurPos = L'\0';
    FTraceAuxiliaryImpl::
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (&GTraceAuxiliary,local_378.Base,true,&local_3a0,
               (FLogCategoryBase *)&LogConsoleResponse,(void **)&local_3a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_378);
  }
  else {
    if (param_1->ArrayNum < 1) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar1;
      if (pwVar4 == (wchar_t *)0x0) {
        local_258.Base = local_238;
        local_258.bIsDynamic = false;
        local_258.bIsExternal = false;
        local_258.CurPos = local_238;
        local_258.End = (wchar_t *)&local_138;
        UE::Trace::EnumerateChannels
                  (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
                   <lambda_invoker_cdecl>,&local_258);
        local_390 = (pmf_41f21a49)FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>;
        local_398 = 0;
        if (local_258.End < (TStringBuilderBase<wchar_t> *)(local_258.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,1);
        }
        *local_258.CurPos = L'\0';
        FTraceAuxiliaryImpl::
        ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
                  (&GTraceAuxiliary,local_258.Base,true,&local_390,
                   (FLogCategoryBase *)&LogConsoleResponse,(void **)&local_398);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
        goto LAB_1419acf0b;
      }
    }
    local_388 = 0;
    local_380 = (pmf_41f21a49)FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>;
    FTraceAuxiliaryImpl::
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (&GTraceAuxiliary,pwVar4,true,&local_380,(FLogCategoryBase *)&LogConsoleResponse,
               (void **)&local_388);
  }
LAB_1419acf0b:
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  UE::Trace::EnumerateChannels
            (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,&local_138);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TraceAuxiliaryEmitStats @ 1419acfe0

void __cdecl TraceAuxiliaryEmitStats(FStatistics *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ushort uVar5;
  FLowLevelMemTracker *pFVar6;
  bool bVar7;
  
  uVar1 = param_1->CacheAllocated;
  uVar2 = param_1->SharedBufferAllocated;
  uVar3 = param_1->FixedBufferAllocated;
  uVar4 = param_1->BlockPoolAllocated;
  if (-1 < CountersChannel->Enabled) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1091,"FTraceAux_Stats_Counters",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x443);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1091);
    }
    __GTraceCounterTrace_MemoryUsed.Value = (atomic<__int64>)param_1->MemoryUsed;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_MemoryUsed.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_MemoryUsed.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_MemoryUsed.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_MemoryUsed.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_MemoryUsed.CounterId._2_2_ = 0;
          __GTraceCounterTrace_MemoryUsed.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_MemoryUsed.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_MemoryUsed.Value);
    }
    __GTraceCounterTrace_Memory_BlockPool.Value = (atomic<__int64>)param_1->BlockPoolAllocated;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_BlockPool.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_BlockPool.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_Memory_BlockPool.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_BlockPool.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_BlockPool.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_BlockPool.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_BlockPool.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_BlockPool.Value);
    }
    __GTraceCounterTrace_Memory_FixedBuffers.Value._4_4_ = 0;
    __GTraceCounterTrace_Memory_FixedBuffers.Value._0_4_ = param_1->FixedBufferAllocated;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_FixedBuffers.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_FixedBuffers.CounterName,TraceCounterType_Int
                           ,__GTraceCounterTrace_Memory_FixedBuffers.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_FixedBuffers.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_FixedBuffers.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_FixedBuffers.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_FixedBuffers.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_FixedBuffers.Value);
    }
    __GTraceCounterTrace_Memory_SharedBuffers.Value._4_4_ = 0;
    __GTraceCounterTrace_Memory_SharedBuffers.Value._0_4_ = param_1->SharedBufferAllocated;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_SharedBuffers.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_SharedBuffers.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterTrace_Memory_SharedBuffers.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_SharedBuffers.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_SharedBuffers.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_SharedBuffers.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_SharedBuffers.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_SharedBuffers.Value);
    }
    __GTraceCounterTrace_Memory_Cache.Value._4_4_ = 0;
    __GTraceCounterTrace_Memory_Cache.Value._0_4_ = param_1->CacheAllocated;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_Cache.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_Cache.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_Memory_Cache.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_Cache.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_Cache.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_Cache.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_Cache.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_Cache.Value);
    }
    __GTraceCounterTrace_Memory_Cache_Used.Value._4_4_ = 0;
    __GTraceCounterTrace_Memory_Cache_Used.Value._0_4_ = param_1->CacheUsed;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_Cache_Used.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_Cache_Used.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_Memory_Cache_Used.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_Cache_Used.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_Cache_Used.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_Cache_Used.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_Cache_Used.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_Cache_Used.Value);
    }
    __GTraceCounterTrace_Memory_Cache_Unused.Value =
         (atomic<__int64>)((ulonglong)param_1->CacheAllocated - (ulonglong)param_1->CacheUsed);
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_Cache_Unused.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_Cache_Unused.CounterName,TraceCounterType_Int
                           ,__GTraceCounterTrace_Memory_Cache_Unused.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_Cache_Unused.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_Cache_Unused.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_Cache_Unused.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_Cache_Unused.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_Cache_Unused.Value);
    }
    __GTraceCounterTrace_Memory_Cache_Wasted.Value._4_4_ = 0;
    __GTraceCounterTrace_Memory_Cache_Wasted.Value._0_4_ = param_1->CacheWaste;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Memory_Cache_Wasted.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Memory_Cache_Wasted.CounterName,TraceCounterType_Int
                           ,__GTraceCounterTrace_Memory_Cache_Wasted.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Memory_Cache_Wasted.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Memory_Cache_Wasted.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Memory_Cache_Wasted.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Memory_Cache_Wasted.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Memory_Cache_Wasted.Value);
    }
    __GTraceCounterTrace_Bandwidth_Emitted.Value = (atomic<__int64>)param_1->BytesEmitted;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Bandwidth_Emitted.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Bandwidth_Emitted.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_Bandwidth_Emitted.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Bandwidth_Emitted.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Bandwidth_Emitted.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Bandwidth_Emitted.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Bandwidth_Emitted.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Bandwidth_Emitted.Value);
    }
    __GTraceCounterTrace_Bandwidth_EmittedNotTraced.Value =
         (atomic<__int64>)(param_1->BytesEmitted - param_1->BytesTraced);
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId == (atomic<unsigned_int>)0x0)
        {
          __GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Bandwidth_EmittedNotTraced.Value);
    }
    __GTraceCounterTrace_Bandwidth_Traced.Value = (atomic<__int64>)param_1->BytesTraced;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Bandwidth_Traced.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Bandwidth_Traced.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_Bandwidth_Traced.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Bandwidth_Traced.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Bandwidth_Traced.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Bandwidth_Traced.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Bandwidth_Traced.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Bandwidth_Traced.Value);
    }
    __GTraceCounterTrace_Bandwidth_Sent.Value = (atomic<__int64>)param_1->BytesSent;
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_Bandwidth_Sent.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_Bandwidth_Sent.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_Bandwidth_Sent.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_Bandwidth_Sent.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_Bandwidth_Sent.CounterId._2_2_ = 0;
          __GTraceCounterTrace_Bandwidth_Sent.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_Bandwidth_Sent.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_Bandwidth_Sent.Value);
    }
    __GTraceCounterTrace_MemoryError.Value =
         (atomic<__int64>)
         (param_1->MemoryUsed - ((ulonglong)uVar2 + (ulonglong)uVar1 + (ulonglong)uVar3 + uVar4));
    LOCK();
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterTrace_MemoryError.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterTrace_MemoryError.CounterName,TraceCounterType_Int,
                           __GTraceCounterTrace_MemoryError.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterTrace_MemoryError.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterTrace_MemoryError.CounterId._2_2_ = 0;
          __GTraceCounterTrace_MemoryError.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterTrace_MemoryError.CounterId._0_2_,
                 (long64)__GTraceCounterTrace_MemoryError.Value);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    FLowLevelMemTracker::Construct();
  }
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1111,"FTraceAux_Stats_LLM",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x457);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1111);
    }
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::SetTagAmountForTracker
              (pFVar6,Default,LLMTagDeclaration_TraceLog.UniqueName,None,param_1->MemoryUsed,true);
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::SetTagAmountForTracker
              (pFVar6,Default,LLMTagDeclaration_TraceLog_BlockPool.UniqueName,None,
               param_1->BlockPoolAllocated,true);
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::SetTagAmountForTracker
              (pFVar6,Default,LLMTagDeclaration_TraceLog_FixedBuffers.UniqueName,None,
               (ulonglong)param_1->FixedBufferAllocated,true);
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::SetTagAmountForTracker
              (pFVar6,Default,LLMTagDeclaration_TraceLog_SharedBuffers.UniqueName,None,
               (ulonglong)param_1->SharedBufferAllocated,true);
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::SetTagAmountForTracker
              (pFVar6,Default,LLMTagDeclaration_TraceLog_Cache.UniqueName,None,
               (ulonglong)param_1->CacheAllocated,true);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// TraceAuxiliaryEnableChannels @ 1419ad6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryEnableChannels(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_178 [32];
  undefined8 local_148;
  pmf_41f21a49 local_140;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->ArrayNum == 0) {
    if ((byte)LogConsoleResponse._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)pFVar1;
    if (pwVar4 == (wchar_t *)0x0) goto LAB_1419ad7bd;
  }
  local_148 = 0;
  local_140 = (pmf_41f21a49)FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>;
  FTraceAuxiliaryImpl::
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
            (&GTraceAuxiliary,pwVar4,true,&local_140,(FLogCategoryBase *)&LogConsoleResponse,
             (void **)&local_148);
LAB_1419ad7bd:
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  UE::Trace::EnumerateChannels
            (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,&local_138);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TraceAuxiliaryFile @ 1419ad870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryFile(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  iVar1 = param_1->ArrayNum;
  pwVar6 = (wchar_t *)0x0;
  pwVar5 = (wchar_t *)0x0;
  pwVar7 = (wchar_t *)0x0;
  if (iVar1 == 2) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar2;
    }
    if (*(int *)(pFVar2 + 0x18) != 0) {
      pwVar7 = *(wchar_t **)(pFVar2 + 0x10);
      pwVar5 = pwVar6;
      goto LAB_1419ad8b2;
    }
LAB_1419ad8f9:
    pwVar7 = L"";
    pwVar5 = pwVar6;
  }
  else {
    if (iVar1 != 1) {
      if (2 < iVar1) {
        if ((byte)LogConsoleResponse._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
      goto LAB_1419ad8b2;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar2;
    }
    pwVar5 = wcschr(pwVar5,L'/');
    if (pwVar5 == (wchar_t *)0x0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar2;
      }
      pwVar5 = wcschr(pwVar5,L'\\');
      if (pwVar5 == (wchar_t *)0x0) {
        if ((param_1->ArrayNum < 1) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)pFVar2;
        }
        pwVar5 = wcschr(pwVar5,L'.');
        if (pwVar5 == (wchar_t *)0x0) {
          if ((param_1->ArrayNum < 1) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (*(int *)(pFVar2 + 8) == 0) {
            pwVar5 = L"";
          }
          else {
            pwVar5 = *(wchar_t **)pFVar2;
          }
          pwVar5 = wcschr(pwVar5,L':');
          if (pwVar5 == (wchar_t *)0x0) {
            if ((param_1->ArrayNum < 1) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (*(int *)(pFVar2 + 8) != 0) {
              pwVar7 = *(wchar_t **)pFVar2;
              pwVar5 = pwVar6;
              goto LAB_1419ad8b2;
            }
            goto LAB_1419ad8f9;
          }
        }
      }
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar2;
    }
  }
LAB_1419ad8b2:
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1835,"FTraceAux_Start",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x72b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
  }
  bVar4 = TraceAuxiliaryStartShared(pwVar7,(FOptions *)0x0,(FLogCategoryBase *)&LogConsoleResponse);
  if (bVar4) {
    bVar4 = FTraceAuxiliaryImpl::Connect
                      (&GTraceAuxiliary,File,pwVar5,(FLogCategoryBase *)&LogConsoleResponse,0);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      TraceAuxiliaryConnectEpilogue();
    }
  }
  else if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TraceAuxiliaryOnConnectionCallback @ 1419adb90

void __cdecl TraceAuxiliaryOnConnectionCallback(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1190,"FTraceAux_OnConnection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x4a6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1190);
  }
  FTraceAuxiliaryImpl::StartWorkerThread(&GTraceAuxiliary);
  EnterCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnConnection);
  bVar2 = false;
  FTraceAuxiliary::OnConnection._60_4_ = FTraceAuxiliary::OnConnection._60_4_ + 1;
  uVar7 = FTraceAuxiliary::OnConnection._48_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (int)FTraceAuxiliary::OnConnection._48_4_) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar6 + 8 + FTraceAuxiliary::OnConnection._40_8_) == 0) ||
          (*(longlong **)(lVar6 + FTraceAuxiliary::OnConnection._40_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar6 + FTraceAuxiliary::OnConnection._40_8_) + 0x68)
                  )(), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar6 = lVar6 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  FTraceAuxiliary::OnConnection._60_4_ = FTraceAuxiliary::OnConnection._60_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FTraceAuxiliary::OnConnection,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnConnection);
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// TraceAuxiliaryOnEndFrameCallback @ 1419add20

void __cdecl TraceAuxiliaryOnEndFrameCallback(void)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FImportantLogScope local_78;
  FStatistics local_68;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1147,"FTraceAux_OnEndFrame_Stats",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x47b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1147);
  }
  UE::Trace::SetUpdateCallback((_func___cdecl_void *)0x0);
  local_68.BytesSent = 0;
  local_68.BytesTraced = 0;
  local_68.BytesEmitted = 0;
  local_68.MemoryUsed = 0;
  local_68.BlockPoolAllocated = 0;
  local_68.BlockPoolFreeBlocks = 0;
  local_68.BlockPoolAllocatedBlocks = 0;
  local_68.SharedBufferAllocated = 0;
  local_68.FixedBufferAllocated = 0;
  local_68.CacheAllocated = 0;
  local_68.CacheUsed = 0;
  local_68.CacheWaste = 0;
  UE::Trace::GetStatistics(&local_68);
  TraceAuxiliaryEmitStats(&local_68);
  bVar3 = UE::Trace::IsTracing();
  if ((bVar3) || (bDoCsvStats != false)) {
    bDoCsvStats = true;
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1170,"FTraceAux_Stats_CSV",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x492);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1170);
    }
    uVar2 = _GCsvCategory_Trace.Index;
    if (__CsvProfilerStat1171 == false) {
      if (-1 < CountersChannel->Enabled) {
        UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineInlineStatFields>
                  (&local_78,0xc);
        lVar4 = (longlong)local_78.AuxCursor;
        *(ulonglong *)local_78.Ptr = ((ulonglong)(uVar2 & 0x7ff) | 0xa8362d98000) * 2;
        *(uint *)((longlong)local_78.Ptr + 8) = uVar2;
        *(undefined4 *)(lVar4 + (longlong)local_78.Ptr) = 0x18200;
        *(undefined1 *)(lVar4 + (longlong)local_78.Ptr) = 1;
        *(undefined8 *)(lVar4 + 4 + (longlong)local_78.Ptr) = s_MemoryUsedMb._0_8_;
        *(undefined4 *)(lVar4 + 0xc + (longlong)local_78.Ptr) = s_MemoryUsedMb._8_4_;
        local_78.AuxCursor = local_78.AuxCursor + 0x10;
        *(undefined1 *)((longlong)local_78.AuxCursor + (longlong)local_78.Ptr) = 3;
        LOCK();
        *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) =
             *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) + 1;
        UNLOCK();
      }
      __CsvProfilerStat1171 = true;
    }
    dVar1 = __real_3eb0000000000000;
    FCsvProfiler::RecordCustomStat
              ("MemoryUsedMb",_GCsvCategory_Trace.Index,
               (double)local_68.MemoryUsed * __real_3eb0000000000000,Set);
    uVar2 = _GCsvCategory_Trace.Index;
    if (__CsvProfilerStat1172 == false) {
      if (-1 < CountersChannel->Enabled) {
        UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineInlineStatFields>
                  (&local_78,0xb);
        lVar4 = (longlong)local_78.AuxCursor;
        *(ulonglong *)local_78.Ptr = ((ulonglong)(uVar2 & 0x7ff) | 0xa8362da0000) * 2;
        *(uint *)((longlong)local_78.Ptr + 8) = uVar2;
        *(undefined4 *)(lVar4 + (longlong)local_78.Ptr) = 0x16200;
        *(undefined1 *)(lVar4 + (longlong)local_78.Ptr) = 1;
        *(undefined8 *)(lVar4 + 4 + (longlong)local_78.Ptr) = s_BlockPoolMb._0_8_;
        *(undefined2 *)(lVar4 + 0xc + (longlong)local_78.Ptr) = s_BlockPoolMb._8_2_;
        *(char *)(lVar4 + 0xe + (longlong)local_78.Ptr) = s_BlockPoolMb[10];
        local_78.AuxCursor = local_78.AuxCursor + 0xf;
        *(undefined1 *)((longlong)local_78.AuxCursor + (longlong)local_78.Ptr) = 3;
        LOCK();
        *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) =
             *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) + 1;
        UNLOCK();
      }
      __CsvProfilerStat1172 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("BlockPoolMb",_GCsvCategory_Trace.Index,(double)local_68.BlockPoolAllocated * dVar1,
               Set);
    uVar2 = _GCsvCategory_Trace.Index;
    if (__CsvProfilerStat1173 == false) {
      if (-1 < CountersChannel->Enabled) {
        UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineInlineStatFields>
                  (&local_78,0xe);
        lVar4 = (longlong)local_78.AuxCursor;
        *(ulonglong *)local_78.Ptr = ((ulonglong)(uVar2 & 0x7ff) | 0xa8362da8000) * 2;
        *(uint *)((longlong)local_78.Ptr + 8) = uVar2;
        *(undefined4 *)(lVar4 + (longlong)local_78.Ptr) = 0x1c200;
        *(undefined1 *)(lVar4 + (longlong)local_78.Ptr) = 1;
        *(undefined8 *)(lVar4 + 4 + (longlong)local_78.Ptr) = s_FixedBuffersMb._0_8_;
        *(undefined4 *)(lVar4 + 0xc + (longlong)local_78.Ptr) = s_FixedBuffersMb._8_4_;
        *(undefined2 *)(lVar4 + 0x10 + (longlong)local_78.Ptr) = s_FixedBuffersMb._12_2_;
        local_78.AuxCursor = local_78.AuxCursor + 0x12;
        *(undefined1 *)((longlong)local_78.AuxCursor + (longlong)local_78.Ptr) = 3;
        LOCK();
        *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) =
             *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) + 1;
        UNLOCK();
      }
      __CsvProfilerStat1173 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("FixedBuffersMb",_GCsvCategory_Trace.Index,
               (double)((ulonglong)local_68._48_8_ >> 0x20) * dVar1,Set);
    uVar2 = _GCsvCategory_Trace.Index;
    if (__CsvProfilerStat1174 == false) {
      if (-1 < CountersChannel->Enabled) {
        UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineInlineStatFields>
                  (&local_78,0xf);
        lVar4 = (longlong)local_78.AuxCursor;
        *(ulonglong *)local_78.Ptr = ((ulonglong)(uVar2 & 0x7ff) | 0xa8362db0000) * 2;
        *(uint *)((longlong)local_78.Ptr + 8) = uVar2;
        *(undefined4 *)(lVar4 + (longlong)local_78.Ptr) = 0x1e200;
        *(undefined1 *)(lVar4 + (longlong)local_78.Ptr) = 1;
        *(undefined8 *)(lVar4 + 4 + (longlong)local_78.Ptr) = s_SharedBuffersMb._0_8_;
        *(undefined4 *)(lVar4 + 0xc + (longlong)local_78.Ptr) = s_SharedBuffersMb._8_4_;
        *(undefined2 *)(lVar4 + 0x10 + (longlong)local_78.Ptr) = s_SharedBuffersMb._12_2_;
        *(char *)(lVar4 + 0x12 + (longlong)local_78.Ptr) = s_SharedBuffersMb[0xe];
        local_78.AuxCursor = local_78.AuxCursor + 0x13;
        *(undefined1 *)((longlong)local_78.AuxCursor + (longlong)local_78.Ptr) = 3;
        LOCK();
        *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) =
             *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) + 1;
        UNLOCK();
      }
      __CsvProfilerStat1174 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("SharedBuffersMb",_GCsvCategory_Trace.Index,
               (double)(local_68._48_8_ & 0xffffffff) * dVar1,Set);
    uVar2 = _GCsvCategory_Trace.Index;
    if (__CsvProfilerStat1175 == false) {
      if (-1 < CountersChannel->Enabled) {
        UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineInlineStatFields>
                  (&local_78,7);
        lVar4 = (longlong)local_78.AuxCursor;
        *(ulonglong *)local_78.Ptr = ((ulonglong)(uVar2 & 0x7ff) | 0xa8362db8000) * 2;
        *(uint *)((longlong)local_78.Ptr + 8) = uVar2;
        *(undefined4 *)(lVar4 + (longlong)local_78.Ptr) = 0xe200;
        *(undefined1 *)(lVar4 + (longlong)local_78.Ptr) = 1;
        *(undefined4 *)(lVar4 + 4 + (longlong)local_78.Ptr) = s_CacheMb._0_4_;
        *(undefined2 *)(lVar4 + 8 + (longlong)local_78.Ptr) = s_CacheMb._4_2_;
        *(char *)(lVar4 + 10 + (longlong)local_78.Ptr) = s_CacheMb[6];
        local_78.AuxCursor = local_78.AuxCursor + 0xb;
        *(undefined1 *)((longlong)local_78.AuxCursor + (longlong)local_78.Ptr) = 3;
        LOCK();
        *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) =
             *(int *)((longlong)local_78.BufferOffset + (longlong)local_78.Ptr) + 1;
        UNLOCK();
      }
      __CsvProfilerStat1175 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("CacheMb",_GCsvCategory_Trace.Index,(double)(local_68._56_8_ & 0xffffffff) * dVar1,
               Set);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TraceAuxiliaryOnMessageCallback @ 1419ae2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryOnMessageCallback(FMessageEvent *param_1)

{
  EMessageType EVar1;
  char *_Str;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  pwVar4 = local_118;
  _Str = param_1->Description;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = pwVar4;
  if (_Str != (char *)0x0) {
    sVar3 = strlen(_Str);
    iVar2 = (int)sVar3;
    if (local_18 < local_118 + iVar2) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,(longlong)iVar2);
      pwVar4 = local_138.CurPos;
    }
    if (iVar2 != 0) {
      pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(pwVar4,iVar2,_Str,iVar2);
      local_138.CurPos = pwVar4;
    }
  }
  if (local_138.End < pwVar4 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    pwVar4 = local_138.CurPos;
  }
  *pwVar4 = L'\0';
  EVar1 = param_1->Type;
  if (EVar1 == Info) {
    if (4 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
  }
  else if (EVar1 == Display) {
    if (3 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
  }
  else if (EVar1 < GenericFatal) {
    if (EVar1 < WriteError) {
      if ((WarningStart < EVar1) && (2 < (byte)LogTrace._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
    }
    else if (1 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
  }
  else {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogTrace);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TraceAuxiliaryOnScopeBeginCallback @ 1419ae4e0

void __cdecl TraceAuxiliaryOnScopeBeginCallback(char *param_1)

{
  FCpuProfilerTrace::OutputBeginDynamicEvent(param_1,(char *)0x0,0);
  return;
}

// TraceAuxiliaryOnScopeEndCallback @ 1419ae4f0

void __cdecl TraceAuxiliaryOnScopeEndCallback(void)

{
  longlong lVar1;
  ulong64 uVar2;
  FThreadBuffer *pFVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  int *piVar7;
  ushort uVar8;
  uchar *puVar9;
  LARGE_INTEGER LStackX_8;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar7 = (int *)(lVar1 + 0xb58);
  pFVar3 = *(FThreadBuffer **)(lVar1 + 0xb60);
  *piVar7 = *piVar7 + -1;
  if (pFVar3 == (FThreadBuffer *)0x0) {
    pFVar3 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(&LStackX_8);
  uVar2 = pFVar3->LastCycle;
  pFVar3->LastCycle = (ulong64)LStackX_8;
  puVar9 = pFVar3->Buffer + pFVar3->BufferSize;
  uVar6 = (LStackX_8.QuadPart - uVar2) * 4;
  do {
    bVar5 = (byte)uVar6;
    bVar4 = 0;
    if (0x7f < uVar6) {
      bVar4 = 0x80;
    }
    uVar6 = uVar6 >> 7;
    *puVar9 = bVar4 | bVar5 & 0x7f;
    puVar9 = puVar9 + 1;
  } while (uVar6 != 0);
  uVar8 = ((short)puVar9 - (short)pFVar3) - 0x12;
  pFVar3->BufferSize = uVar8;
  if (*piVar7 == 0 || 0xf0 < uVar8) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar3);
  }
  return;
}

// TraceAuxiliaryOnTraceUpdateCallback @ 1419ae500

void __cdecl TraceAuxiliaryOnTraceUpdateCallback(void)

{
  FLowLevelMemTracker *pFVar1;
  FStatistics local_58;
  
  pFVar1 = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    pFVar1 = FLowLevelMemTracker::Construct();
  }
  if (pFVar1->bConfigurationComplete != (atomic<bool>)0x0) {
    local_58.BytesSent = 0;
    local_58.BytesTraced = 0;
    local_58.BytesEmitted = 0;
    local_58.MemoryUsed = 0;
    local_58.BlockPoolAllocated = 0;
    local_58.BlockPoolFreeBlocks = 0;
    local_58.BlockPoolAllocatedBlocks = 0;
    local_58.SharedBufferAllocated = 0;
    local_58.FixedBufferAllocated = 0;
    local_58.CacheAllocated = 0;
    local_58.CacheUsed = 0;
    local_58.CacheWaste = 0;
    UE::Trace::GetStatistics(&local_58);
    TraceAuxiliaryEmitStats(&local_58);
  }
  return;
}

// TraceAuxiliaryPause @ 1419ae570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryPause(void)

{
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  FTraceAuxiliaryImpl::PauseChannels(&GTraceAuxiliary);
  return;
}

// TraceAuxiliaryResume @ 1419ae5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryResume(void)

{
  wchar_t *pwVar1;
  undefined8 local_res8;
  pmf_41f21a49 local_res10 [3];
  
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  local_res10[0] = (pmf_41f21a49)FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>;
  pwVar1 = L"";
  if (GTraceAuxiliary.PausedPreset.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GTraceAuxiliary.PausedPreset.Data.AllocatorInstance.Data;
  }
  local_res8 = 0;
  FTraceAuxiliaryImpl::
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
            (&GTraceAuxiliary,pwVar1,false,local_res10,&LogTrace,(void **)&local_res8);
  FString::Empty(&GTraceAuxiliary.PausedPreset);
  return;
}

// TraceAuxiliarySend @ 1419ae640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliarySend(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  if (param_1->ArrayNum < 1) {
    if (2 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar1;
    }
    pwVar3 = (wchar_t *)0x0;
    if ((1 < param_1->ArrayNum) && (pwVar3 = L"", *(int *)(pFVar1 + 0x18) != 0)) {
      pwVar3 = *(wchar_t **)(pFVar1 + 0x10);
    }
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1835,"FTraceAux_Start",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x72b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
    }
    bVar2 = TraceAuxiliaryStartShared
                      (pwVar3,(FOptions *)0x0,(FLogCategoryBase *)&LogConsoleResponse);
    if (bVar2) {
      bVar2 = FTraceAuxiliaryImpl::Connect
                        (&GTraceAuxiliary,Network,pwVar4,(FLogCategoryBase *)&LogConsoleResponse,0);
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar2) {
        TraceAuxiliaryConnectEpilogue();
      }
    }
    else if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// TraceAuxiliarySnapshotFile @ 1419ae770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliarySnapshotFile(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (wchar_t *)0x0;
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar1;
    }
  }
  else if (1 < param_1->ArrayNum) {
    if (2 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
    return;
  }
  FTraceAuxiliaryImpl::WriteSnapshot
            (&GTraceAuxiliary,pwVar2,(FLogCategoryBase *)&LogConsoleResponse);
  return;
}

// TraceAuxiliarySnapshotSend @ 1419ae7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliarySnapshotSend(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  wchar_t *pwVar3;
  
  pwVar3 = (wchar_t *)0x0;
  pwVar2 = pwVar3;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)pFVar1;
    }
    pwVar2 = (wchar_t *)0x0;
    if (1 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x18) != 0) {
        _Str = *(wchar_t **)(pFVar1 + 0x10);
      }
      pwVar2 = (wchar_t *)_wtoi64(_Str);
    }
  }
  if (2 < param_1->ArrayNum) {
    if (2 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
    return;
  }
  FTraceAuxiliaryImpl::SendSnapshot
            (&GTraceAuxiliary,pwVar3,(uint)pwVar2,(FLogCategoryBase *)&LogConsoleResponse);
  return;
}

// TraceAuxiliaryStart @ 1419ae880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryStart(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  if (2 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  TraceAuxiliaryFile(param_1);
  return;
}

// TraceAuxiliaryStartShared @ 1419ae8c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl TraceAuxiliaryStartShared(wchar_t *param_1,FOptions *param_2,FLogCategoryBase *param_3)

{
  ForAnyElementType _Src;
  bool bVar1;
  int iVar2;
  pmf_54149989 local_res20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar1 = FForkProcessHelper::IsForkRequested();
  if ((!bVar1) || (bVar1 = FForkProcessHelper::IsForkedChildProcess(), bVar1)) {
    bVar1 = UE::Trace::IsTracing();
    if (!bVar1) {
      if (param_1 != (wchar_t *)0x0) {
        bVar1 = -1 < CpuChannel->Enabled;
        if (bVar1) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1815,"FTraceAux_EnableChannels",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                     ,0x717);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1815);
        }
        if ((Warning < param_3->CompileTimeVerbosity) && (Warning < param_3->Verbosity)) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,param_3);
        }
        TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::Reset((TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)&GTraceAuxiliary);
        local_res20 = (pmf_54149989)FTraceAuxiliaryImpl::AddCommandlineChannel;
        FTraceAuxiliaryImpl::
        ForEachChannel<void_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&),FLogCategoryLogTrace_&>
                  (&GTraceAuxiliary,param_1,true,&local_res20,&LogTrace);
        FTraceAuxiliaryImpl::EnableCommandlineChannels(&GTraceAuxiliary);
        if (bVar1) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      return true;
    }
    if ((Fatal < param_3->CompileTimeVerbosity) && (Fatal < param_3->Verbosity)) {
      AcquireSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
      _Src = GTraceAuxiliary.CurrentTraceTarget.TraceDest.Data.AllocatorInstance;
      local_18.Data = (FScriptContainerElement *)0x0;
      iVar2 = GTraceAuxiliary.CurrentTraceTarget.TraceDest.Data.ArrayNum;
      local_10 = iVar2;
      if (iVar2 == 0) {
        local_c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,&local_18,iVar2,&local_c);
        memcpy(local_18.Data,_Src.Data,(longlong)iVar2 * 2);
      }
      ReleaseSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
      UE::Logging::Private::BasicLog<2>(&LOG_Static,param_3);
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
  }
  return false;
}

// TraceAuxiliaryStatus @ 1419aeaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryStatus(void)

{
  ForAnyElementType _Src;
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined1 auStackY_b78 [32];
  ForAnyElementType local_b38;
  int local_b30;
  int local_b2c;
  FScriptContainerElement *local_b28;
  undefined8 uStack_b20;
  FScriptContainerElement *local_b18;
  undefined8 uStack_b10;
  FStatistics local_b08;
  TStringBuilderBase<wchar_t> local_ab8;
  wchar_t local_a98 [256];
  FString local_898;
  FString local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [512];
  int local_458 [2];
  TStringBuilderBase<wchar_t> local_450;
  wchar_t local_430 [512];
  wchar_t local_30 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b78;
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  local_ab8.bIsDynamic = false;
  local_ab8.bIsExternal = false;
  local_ab8.Base = local_a98;
  local_b18 = (FScriptContainerElement *)0x0;
  local_ab8.CurPos = local_a98;
  uStack_b10._0_4_ = 0;
  uStack_b10._4_4_ = 0;
  local_ab8.End = (wchar_t *)&local_898;
  local_b28 = (FScriptContainerElement *)0x0;
  uStack_b20._0_4_ = 0;
  uStack_b20._4_4_ = 0;
  bVar1 = UE::Trace::IsTracingTo((uint (*) [4])&local_888,(uint (*) [4])&local_898);
  if (bVar1) {
    local_b18 = local_888.Data.AllocatorInstance.Data;
    uStack_b10._0_4_ = local_888.Data.ArrayNum;
    uStack_b10._4_4_ = local_888.Data.ArrayMax;
    local_b28 = local_898.Data.AllocatorInstance.Data;
    uStack_b20._0_4_ = local_898.Data.ArrayNum;
    uStack_b20._4_4_ = local_898.Data.ArrayMax;
    AcquireSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
    _Src = GTraceAuxiliary.CurrentTraceTarget.TraceDest.Data.AllocatorInstance;
    local_b38.Data = (FScriptContainerElement *)0x0;
    iVar3 = GTraceAuxiliary.CurrentTraceTarget.TraceDest.Data.ArrayNum;
    local_b30 = iVar3;
    if (iVar3 == 0) {
      local_b2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_b38,iVar3,&local_b2c);
      memcpy(local_b38.Data,_Src.Data,(longlong)iVar3 * 2);
    }
    ReleaseSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
    if (local_b30 < 2) {
      local_ab8.CurPos = local_ab8.Base;
      if (local_ab8.End < (FString *)(local_ab8.Base + 0x2a)) {
        TStringBuilderBase<wchar_t>::Extend(&local_ab8,0x2a);
      }
      pvVar2 = FGenericPlatformString::Memcpy
                         (local_ab8.CurPos,L"Tracing to unknown target (externally set)",0x54);
      local_ab8.CurPos = (wchar_t *)((longlong)pvVar2 + 0x54);
    }
    else {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_ab8,L"Tracing to \'%s\', ");
      local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_888.Data.ArrayNum = 0;
      local_888.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)&local_b28,&local_888,Digits);
      local_898.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_898.Data.ArrayNum = 0;
      local_898.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)&local_b18,&local_898,Digits);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_ab8,L"session %s trace %s");
      if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_898.Data.AllocatorInstance.Data);
      }
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
    }
    if (local_b38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b38.Data);
    }
  }
  else {
    local_ab8.CurPos = local_ab8.Base;
    if (local_ab8.End < (FString *)(local_ab8.Base + 0xb)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ab8,0xb);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_ab8.CurPos,L"Not tracing",0x16);
    local_ab8.CurPos = (wchar_t *)((longlong)pvVar2 + 0x16);
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    if (local_ab8.End < (FString *)(local_ab8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_ab8,1);
    }
    *local_ab8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  local_b08.BytesSent = 0;
  local_b08.BytesTraced = 0;
  local_b08.BytesEmitted = 0;
  local_b08.MemoryUsed = 0;
  local_b08.BlockPoolAllocated = 0;
  local_b08.BlockPoolFreeBlocks = 0;
  local_b08.BlockPoolAllocatedBlocks = 0;
  local_b08.SharedBufferAllocated = 0;
  local_b08.FixedBufferAllocated = 0;
  local_b08.CacheAllocated = 0;
  local_b08.CacheUsed = 0;
  local_b08.CacheWaste = 0;
  UE::Trace::GetStatistics(&local_b08);
  if (((((3 < (byte)LogConsoleResponse._0_1_) &&
        (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
        3 < (byte)LogConsoleResponse._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
       3 < (byte)LogConsoleResponse._0_1_)) &&
      ((UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
       3 < (byte)LogConsoleResponse._0_1_ &&
       (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
       3 < (byte)LogConsoleResponse._0_1_)))) &&
     ((UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
      3 < (byte)LogConsoleResponse._0_1_ &&
      (UE::Logging::Private::BasicLog<4>
                 ((FStaticBasicLogRecord *)&PTR_u_Emitted____02f__1506c1528,
                  (FLogCategoryBase *)&LogConsoleResponse), 3 < (byte)LogConsoleResponse._0_1_)))) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  if ((3 < (byte)LogConsoleResponse._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
     3 < (byte)LogConsoleResponse._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_458[0] = 0;
  local_878.End = (wchar_t *)local_458;
  local_458[1] = 0x14;
  local_450.Base = local_430;
  local_450.CurPos = local_430;
  local_450.End = local_30;
  local_450.bIsDynamic = false;
  local_450.bIsExternal = false;
  local_30[0] = L'\0';
  local_30[1] = L'\0';
  local_30[2] = L'\x14';
  local_30[3] = L'\0';
  UE::Trace::EnumerateChannels
            (`TraceAuxiliaryStatus'::__l2::<lambda_1>::<lambda_invoker_cdecl>,&local_878);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    if (local_458[0] != 0) {
      if (local_878.End < local_878.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_878,1);
      }
      *local_878.CurPos = L'\0';
    }
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    if (3 < (byte)LogConsoleResponse._0_1_) {
      if (local_450.End < local_450.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_450,1);
      }
      *local_450.CurPos = L'\0';
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_450);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_ab8);
  return;
}

// TraceAuxiliaryStop @ 1419af230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TraceAuxiliaryStop(void)

{
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  FTraceAuxiliaryImpl::Stop(&GTraceAuxiliary);
  return;
}

// TraceBookmark @ 1419af270

void __cdecl TraceBookmark(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FImportantLogScope local_18;
  
  if (BookmarkChannel->Enabled < 0) {
    return;
  }
  if (!__BookmarkPoint1545) {
    if (-1 < BookmarkChannel->Enabled) {
      UE::Trace::Private::FImportantLogScope::Enter<FMiscBookmarkSpecFields>(&local_18,0x66);
      lVar8 = (longlong)local_18.AuxCursor;
      *(bool **)local_18.Ptr = &__BookmarkPoint1545;
      local_18.Ptr[8] = '\t';
      local_18.Ptr[9] = '\x06';
      local_18.Ptr[10] = '\0';
      local_18.Ptr[0xb] = '\0';
      puVar1 = local_18.Ptr + lVar8;
      puVar1[0] = '\0';
      puVar1[1] = 0x82;
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      local_18.Ptr[lVar8] = '\x01';
      *(undefined4 *)(local_18.Ptr + lVar8 + 4) = u__s._0_4_;
      iVar7 = local_18.AuxCursor + 4;
      puVar1 = local_18.Ptr + (longlong)iVar7 + 4;
      puVar1[0] = '\0';
      puVar1[1] = 'C';
      puVar1[2] = '\f';
      puVar1[3] = '\0';
      local_18.Ptr[(longlong)iVar7 + 4] = '\x01';
      uVar4 = s_C__Workspace_UnrealEngine_Engin._8_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 8) = s_C__Workspace_UnrealEngine_Engin._0_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x10) = uVar4;
      uVar4 = s_C__Workspace_UnrealEngine_Engin._24_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x18) =
           s_C__Workspace_UnrealEngine_Engin._16_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x20) = uVar4;
      uVar4 = s_C__Workspace_UnrealEngine_Engin._40_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x28) =
           s_C__Workspace_UnrealEngine_Engin._32_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x30) = uVar4;
      uVar4 = s_C__Workspace_UnrealEngine_Engin._56_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x38) =
           s_C__Workspace_UnrealEngine_Engin._48_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x40) = uVar4;
      uVar4 = s_C__Workspace_UnrealEngine_Engin._72_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x48) =
           s_C__Workspace_UnrealEngine_Engin._64_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x50) = uVar4;
      uVar4 = s_C__Workspace_UnrealEngine_Engin._88_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x58) =
           s_C__Workspace_UnrealEngine_Engin._80_8_;
      *(undefined8 *)(local_18.Ptr + (longlong)iVar7 + 0x60) = uVar4;
      *(undefined2 *)(local_18.Ptr + (longlong)iVar7 + 0x68) =
           s_C__Workspace_UnrealEngine_Engin._96_2_;
      local_18.AuxCursor = local_18.AuxCursor + 0x6e;
      local_18.Ptr[local_18.AuxCursor] = '\x03';
      LOCK();
      *(int *)(local_18.Ptr + local_18.BufferOffset) =
           *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
      UNLOCK();
    }
    __BookmarkPoint1545 = true;
  }
  uVar6 = 0;
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) != 0) {
      pwVar9 = *(wchar_t **)pFVar2;
      goto LAB_1419af3d1;
    }
  }
  pwVar9 = L"";
LAB_1419af3d1:
  if ((-1 < CallstackChannel->Enabled) && (FBacktracer::Instance != (FBacktracer *)0x0)) {
    uVar6 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
  }
  FMiscTrace::OutputBookmark<wchar_t_const_*>(uVar6,&__BookmarkPoint1545,pwVar9);
  return;
}

// TraceRegionBegin @ 1419af800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TraceRegionBegin(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  FString local_50;
  LARGE_INTEGER local_40;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar2 = param_1->ArrayNum;
  if (0 < iVar2) {
    iVar7 = 0;
    bVar4 = true;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar12 = pFVar8 + (longlong)iVar2 * 0x10;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_58);
      }
      iVar11 = 0;
      if (pFVar8 == pFVar12) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        FString::AppendChars(&local_50,L" ",1);
      }
      iVar10 = *(int *)(pFVar8 + 8) + -1;
      if (*(int *)(pFVar8 + 8) == 0) {
        iVar10 = iVar11;
      }
      FString::AppendChars(&local_50,*(wchar_t **)pFVar8,iVar10);
      pFVar8 = pFVar8 + 0x10;
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar9.Data = local_50.Data.AllocatorInstance.Data;
    }
    if (-1 < RegionChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMiscRegionBeginFields>((TLogScope<1> *)&local_38);
      QueryPerformanceCounter(&local_40);
      *local_38 = local_40;
      wVar1 = *(wchar_t *)FVar9.Data;
      pFVar8 = FVar9.Data;
      while (wVar1 != L'\0') {
        pFVar8 = pFVar8 + 2;
        iVar11 = iVar11 + 1;
        wVar1 = *(wchar_t *)pFVar8;
      }
      UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar9.Data,iVar11);
      pwVar5 = L"ConsoleCommandRegion";
      do {
        pwVar5 = pwVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (*pwVar5 != L'\0');
      UE::Trace::Private::Field_WriteStringWide(2,L"ConsoleCommandRegion",iVar7);
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      **(undefined1 **)(lVar3 + 0x20) = 6;
      lVar6 = *(longlong *)(lVar3 + 0x20) + 1;
      *(longlong *)(lVar3 + 0x20) = lVar6;
      if (lVar3 != local_30) {
        *(longlong *)(lVar3 + 0x28) = lVar6;
      }
      *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TraceRegionEnd @ 1419af9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TraceRegionEnd(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  FString local_50;
  LARGE_INTEGER local_40;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar2 = param_1->ArrayNum;
  if (0 < iVar2) {
    iVar6 = 0;
    bVar4 = true;
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar10 = pFVar7 + (longlong)iVar2 * 0x10;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_58);
      }
      if (pFVar7 == pFVar10) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        FString::AppendChars(&local_50,L" ",1);
      }
      iVar9 = *(int *)(pFVar7 + 8) + -1;
      if (*(int *)(pFVar7 + 8) == 0) {
        iVar9 = 0;
      }
      FString::AppendChars(&local_50,*(wchar_t **)pFVar7,iVar9);
      pFVar7 = pFVar7 + 0x10;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar8.Data = local_50.Data.AllocatorInstance.Data;
    }
    if (-1 < RegionChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMiscRegionEndFields>((TLogScope<1> *)&local_38);
      QueryPerformanceCounter(&local_40);
      *local_38 = local_40;
      wVar1 = *(wchar_t *)FVar8.Data;
      pFVar7 = FVar8.Data;
      while (wVar1 != L'\0') {
        pFVar7 = pFVar7 + 2;
        iVar6 = iVar6 + 1;
        wVar1 = *(wchar_t *)pFVar7;
      }
      UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar8.Data,iVar6);
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      **(undefined1 **)(lVar3 + 0x20) = 6;
      lVar5 = *(longlong *)(lVar3 + 0x20) + 1;
      *(longlong *)(lVar3 + 0x20) = lVar5;
      if (lVar3 != local_30) {
        *(longlong *)(lVar3 + 0x28) = lVar5;
      }
      *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PIXBeginCapture2 @ 1419b1a00

uint __cdecl PIXBeginCapture2(ulong param_1,PIXCaptureParameters *param_2)

{
  DWORD DVar1;
  HMODULE pHVar2;
  FARPROC UNRECOVERED_JUMPTABLE_00;
  INT_PTR IVar3;
  
  if (param_1 == 2) {
    pHVar2 = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((pHVar2 != (HMODULE)0x0) &&
       (UNRECOVERED_JUMPTABLE_00 = GetProcAddress(pHVar2,"BeginProgrammaticGpuCapture"),
       UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001419b1a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar3 = (*UNRECOVERED_JUMPTABLE_00)(param_2);
      return (int)IVar3;
    }
  }
  else {
    if (param_1 != 1) {
      return 0x80004001;
    }
    pHVar2 = GetModuleHandleW(L"WinPixTimingCapturer.dll");
    if ((pHVar2 != (HMODULE)0x0) &&
       (UNRECOVERED_JUMPTABLE_00 = GetProcAddress(pHVar2,"BeginProgrammaticTimingCapture"),
       UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001419b1a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar3 = (*UNRECOVERED_JUMPTABLE_00)(param_2,0x40);
      return (int)IVar3;
    }
  }
  DVar1 = GetLastError();
  if ((int)DVar1 < 1) {
    return DVar1;
  }
  return DVar1 & 0xffff | 0x80070000;
}

// PIXEndCapture @ 1419b1ab0

DWORD __cdecl PIXEndCapture(int param_1)

{
  DWORD DVar1;
  HMODULE pHVar2;
  FARPROC UNRECOVERED_JUMPTABLE_00;
  INT_PTR IVar3;
  
  pHVar2 = GetModuleHandleW(L"WinPixGpuCapturer.dll");
  if (pHVar2 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(pHVar2,"EndProgrammaticGpuCapture");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419b1ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar3 = (*UNRECOVERED_JUMPTABLE_00)();
      return (int)IVar3;
    }
  }
  pHVar2 = GetModuleHandleW(L"WinPixTimingCapturer.dll");
  if (pHVar2 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(pHVar2,"EndProgrammaticTimingCapture");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419b1b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar3 = (*UNRECOVERED_JUMPTABLE_00)((ulonglong)(uint)param_1);
      return (int)IVar3;
    }
  }
  DVar1 = GetLastError();
  if (0 < (int)DVar1) {
    DVar1 = DVar1 & 0xffff | 0x80070000;
  }
  return DVar1;
}

// OnConnection'' @ 1503450d0

void __cdecl `dynamic_atexit_destructor_for_'FTraceAuxiliary::OnConnection__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FTraceAuxiliary::OnConnection._40_8_,FTraceAuxiliary::OnConnection._48_4_);
  if (FTraceAuxiliary::OnConnection._40_8_ != 0) {
    FMemory::Free((void *)FTraceAuxiliary::OnConnection._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150345102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnConnection);
  return;
}

// OnSnapshotSaved'' @ 150345110

void __cdecl `dynamic_atexit_destructor_for_'FTraceAuxiliary::OnSnapshotSaved__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FTraceAuxiliary::OnSnapshotSaved._40_8_,FTraceAuxiliary::OnSnapshotSaved._48_4_);
  if (FTraceAuxiliary::OnSnapshotSaved._40_8_ != 0) {
    FMemory::Free((void *)FTraceAuxiliary::OnSnapshotSaved._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150345142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnSnapshotSaved);
  return;
}

// OnTraceStarted'' @ 150345150

void __cdecl `dynamic_atexit_destructor_for_'FTraceAuxiliary::OnTraceStarted__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FTraceAuxiliary::OnTraceStarted._40_8_,FTraceAuxiliary::OnTraceStarted._48_4_);
  if (FTraceAuxiliary::OnTraceStarted._40_8_ != 0) {
    FMemory::Free((void *)FTraceAuxiliary::OnTraceStarted._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150345182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnTraceStarted);
  return;
}

// OnTraceStopped'' @ 150345190

void __cdecl `dynamic_atexit_destructor_for_'FTraceAuxiliary::OnTraceStopped__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FTraceAuxiliary::OnTraceStopped._40_8_,FTraceAuxiliary::OnTraceStopped._48_4_);
  if (FTraceAuxiliary::OnTraceStopped._40_8_ != 0) {
    FMemory::Free((void *)FTraceAuxiliary::OnTraceStopped._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503451c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnTraceStopped);
  return;
}

// `dynamic_atexit_destructor_for_'AccumulatorTimerStartCmd'' @ 1503451d0

void __cdecl _dynamic_atexit_destructor_for__AccumulatorTimerStartCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AccumulatorTimerStartCmd);
  return;
}

// `dynamic_atexit_destructor_for_'AccumulatorTimerStopCmd'' @ 1503451f0

void __cdecl _dynamic_atexit_destructor_for__AccumulatorTimerStopCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AccumulatorTimerStopCmd);
  return;
}

// `dynamic_atexit_destructor_for_'FInstanceCountingDumpCommand'' @ 150345210

void __cdecl _dynamic_atexit_destructor_for__FInstanceCountingDumpCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FInstanceCountingDumpCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GGetMapNameDelegate'' @ 150345230

void __cdecl _dynamic_atexit_destructor_for__GGetMapNameDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GGetMapNameDelegate,
             (FWriteAccessScope *)&local_28);
  if ((GGetMapNameDelegate._16_4_ != 0) && (GGetMapNameDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)GGetMapNameDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&GGetMapNameDelegate.field_0x8,0,0,0x10);
    GGetMapNameDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (GGetMapNameDelegate._8_8_ != 0) {
    FMemory::Free((void *)GGetMapNameDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&GGetMapNameDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'GStaticStringTracer'' @ 1503452d0

void __cdecl _dynamic_atexit_destructor_for__GStaticStringTracer__(void)

{
  GStaticStringTracer.TracedAnsiStrings.HashSize = 0;
  if (GStaticStringTracer.TracedAnsiStrings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
     ) {
    FMemory::Free((void *)GStaticStringTracer.TracedAnsiStrings.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GStaticStringTracer.TracedAnsiStrings.Elements);
  GStaticStringTracer.TracedWideStrings.HashSize = 0;
  if (GStaticStringTracer.TracedWideStrings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
     ) {
    FMemory::Free((void *)GStaticStringTracer.TracedWideStrings.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GStaticStringTracer.TracedWideStrings.Elements);
                    /* WARNING: Could not recover jumptable at 0x00015034532d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GStaticStringTracer);
  return;
}

// `dynamic_atexit_destructor_for_'GTraceAuxiliary'' @ 150345340

void __cdecl _dynamic_atexit_destructor_for__GTraceAuxiliary__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  if (BVar2 == '\0') {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  }
  if (GTraceAuxiliary.CurrentTraceTarget.TraceDest.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GTraceAuxiliary.CurrentTraceTarget.TraceDest.Data.AllocatorInstance.Data);
  }
  if (GTraceAuxiliary.PausedPreset.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GTraceAuxiliary.PausedPreset.Data.AllocatorInstance.Data);
  }
  GTraceAuxiliary.CommandlineChannels._5440_4_ = 0;
  if (GTraceAuxiliary.CommandlineChannels._5432_8_ != 0) {
    FMemory::Free((void *)GTraceAuxiliary.CommandlineChannels._5432_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&GTraceAuxiliary);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 1503453e0

void __cdecl `Modules_Create'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  code *pcVar1;
  bool bVar2;
  HMODULE hModule;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  if (::Instance.CallbackCookie == (void *)0x0) {
    return;
  }
  hModule = LoadLibraryW(L"ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NtDll",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsModuleDiagnostics.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = GetProcAddress(hModule,"LdrUnregisterDllNotification");
                    /* WARNING: Could not recover jumptable at 0x00015034544e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(::Instance.CallbackCookie);
  return;
}

// `dynamic_atexit_destructor_for_'LoadTimerDumpCmd'' @ 150345460

void __cdecl _dynamic_atexit_destructor_for__LoadTimerDumpCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LoadTimerDumpCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LoadTimerDumpLowCmd'' @ 150345480

void __cdecl _dynamic_atexit_destructor_for__LoadTimerDumpLowCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LoadTimerDumpLowCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LoadTimerResetCmd'' @ 1503454a0

void __cdecl _dynamic_atexit_destructor_for__LoadTimerResetCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LoadTimerResetCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LogExternalProfiler'' @ 1503454c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogExternalProfiler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogExternalProfiler);
  return;
}

// `dynamic_atexit_destructor_for_'LogHistograms'' @ 1503454e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHistograms__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHistograms);
  return;
}

// `dynamic_atexit_destructor_for_'LogInstanceCount'' @ 150345500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInstanceCount__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInstanceCount);
  return;
}

// `dynamic_atexit_destructor_for_'LogPlatformEvents'' @ 150345520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPlatformEvents__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPlatformEvents);
  return;
}

// `dynamic_atexit_destructor_for_'LogTrace'' @ 150345540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTrace__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTrace);
  return;
}

// `dynamic_atexit_destructor_for_'Profiler'' @ 150345560

void __cdecl
`ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit'::__l2::
_dynamic_atexit_destructor_for__Profiler__(void)

{
  if (`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
      ::Profiler.Ptr != (FConcurrencyViewerExternalProfiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150345574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                 ::__l2::Profiler.Ptr)->_padding_)
              (`public:___cdecl_ConcurrencyViewerProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
               ::__l2::Profiler.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilerAQtime'' @ 150345580

void __cdecl
`AQtimeProfiler::FAtModuleInit::FAtModuleInit'::__l2::
_dynamic_atexit_destructor_for__ProfilerAQtime__(void)

{
  if (`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerAQtime.Ptr != (FAQtimeExternalProfiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150345594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
                 ::ProfilerAQtime.Ptr)->_padding_)
              (`public:___cdecl_AQtimeProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
               ProfilerAQtime.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilerPIX'' @ 1503455a0

void __cdecl
`PIXProfiler::FAtModuleInit::FAtModuleInit'::__l2::_dynamic_atexit_destructor_for__ProfilerPIX__
          (void)

{
  if (`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::ProfilerPIX.
      Ptr != (FPIXExternalProfiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503455b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
                 ProfilerPIX.Ptr)->_padding_)
              (`public:___cdecl_PIXProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
               ProfilerPIX.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilerSuperluminal'' @ 1503455c0

void __cdecl
`SuperluminalProfiler::FAtModuleInit::FAtModuleInit'::__l2::
_dynamic_atexit_destructor_for__ProfilerSuperluminal__(void)

{
  if (`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerSuperluminal.Ptr != (SuperluminalExternalProfiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503455d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                 ::__l2::ProfilerSuperluminal.Ptr)
              (`public:___cdecl_SuperluminalProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::
               __l2::ProfilerSuperluminal.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilerVSPerf'' @ 1503455e0

void __cdecl
`VSPerfProfiler::FAtModuleInit::FAtModuleInit'::__l2::
_dynamic_atexit_destructor_for__ProfilerVSPerf__(void)

{
  if (`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerVSPerf.Ptr != (FVSPerfExternalProfiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503455f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2
                 ::ProfilerVSPerf.Ptr)
              (`public:___cdecl_VSPerfProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
               ProfilerVSPerf.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilerVTune'' @ 150345600

void __cdecl
`VTuneProfiler::FAtModuleInit::FAtModuleInit'::__l2::_dynamic_atexit_destructor_for__ProfilerVTune__
          (void)

{
  if (`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerVTune.Ptr != (FVTuneExternalProfiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150345614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
                 ProfilerVTune.Ptr)->_padding_)
              (`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
               ProfilerVTune.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilingSessionFolderName'' @ 150345620

void __cdecl
`CreateProfileFilename'::__l2::_dynamic_atexit_destructor_for__ProfilingSessionFolderName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProfilingSessionFolderName.Data.AllocatorInstance.Data;
  if (ProfilingSessionFolderName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProfilingSessionFolderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150345640

void __cdecl `FLoadTimeTracker::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton.AccumulatedTimeInfo._72_4_ = 0;
  if (::Singleton.AccumulatedTimeInfo._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.AccumulatedTimeInfo._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton.AccumulatedTimeInfo);
  ::Singleton.TimeInfo._72_4_ = 0;
  if (::Singleton.TimeInfo._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.TimeInfo._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<double,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<double,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<double,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryChannelDisableCmd'' @ 1503456a0

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryChannelDisableCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryChannelDisableCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryChannelEnableCmd'' @ 1503456c0

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryChannelEnableCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryChannelEnableCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryFileCmd'' @ 1503456e0

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryFileCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryFileCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryPauseCmd'' @ 150345700

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryPauseCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryPauseCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryResumeCmd'' @ 150345720

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryResumeCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryResumeCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliarySendCmd'' @ 150345740

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliarySendCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliarySendCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliarySnapshotFileCmd'' @ 150345760

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliarySnapshotFileCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliarySnapshotFileCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliarySnapshotSendCmd'' @ 150345780

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliarySnapshotSendCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliarySnapshotSendCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryStartCmd'' @ 1503457a0

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryStartCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryStartCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryStatusCmd'' @ 1503457c0

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryStatusCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryStatusCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceAuxiliaryStopCmd'' @ 1503457e0

void __cdecl _dynamic_atexit_destructor_for__TraceAuxiliaryStopCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceAuxiliaryStopCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceBookmarkCmd'' @ 150345800

void __cdecl _dynamic_atexit_destructor_for__TraceBookmarkCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceBookmarkCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceRegionBeginCmd'' @ 150345820

void __cdecl _dynamic_atexit_destructor_for__TraceRegionBeginCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceRegionBeginCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TraceRegionEndCmd'' @ 150345840

void __cdecl _dynamic_atexit_destructor_for__TraceRegionEndCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TraceRegionEndCmd);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Trace'' @ 150345860

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Trace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Trace.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Trace.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Trace.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Bandwidth_Emitted'' @ 150345880

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_Emitted__(void)

{
  if ((__GTraceCounterTrace_Bandwidth_Emitted.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Bandwidth_Emitted.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Bandwidth_EmittedNotTraced'' @ 1503458a0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_EmittedNotTraced__(void)

{
  if ((__GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Bandwidth_EmittedNotTraced.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Bandwidth_Sent'' @ 1503458c0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_Sent__(void)

{
  if ((__GTraceCounterTrace_Bandwidth_Sent.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Bandwidth_Sent.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Bandwidth_Traced'' @ 1503458e0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Bandwidth_Traced__(void)

{
  if ((__GTraceCounterTrace_Bandwidth_Traced.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Bandwidth_Traced.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_MemoryError'' @ 150345900

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_MemoryError__(void)

{
  if ((__GTraceCounterTrace_MemoryError.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_MemoryError.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_MemoryUsed'' @ 150345920

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_MemoryUsed__(void)

{
  if ((__GTraceCounterTrace_MemoryUsed.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_MemoryUsed.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_BlockPool'' @ 150345940

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_BlockPool__(void)

{
  if ((__GTraceCounterTrace_Memory_BlockPool.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_BlockPool.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_Cache'' @ 150345960

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache__(void)

{
  if ((__GTraceCounterTrace_Memory_Cache.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_Cache.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_Cache_Unused'' @ 150345980

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache_Unused__(void)

{
  if ((__GTraceCounterTrace_Memory_Cache_Unused.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_Cache_Unused.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_Cache_Used'' @ 1503459a0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache_Used__(void)

{
  if ((__GTraceCounterTrace_Memory_Cache_Used.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_Cache_Used.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_Cache_Wasted'' @ 1503459c0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_Cache_Wasted__(void)

{
  if ((__GTraceCounterTrace_Memory_Cache_Wasted.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_Cache_Wasted.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_FixedBuffers'' @ 1503459e0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_FixedBuffers__(void)

{
  if ((__GTraceCounterTrace_Memory_FixedBuffers.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_FixedBuffers.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTrace_Memory_SharedBuffers'' @ 150345a00

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTrace_Memory_SharedBuffers__(void)

{
  if ((__GTraceCounterTrace_Memory_SharedBuffers.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTrace_Memory_SharedBuffers.CounterName);
    return;
  }
  return;
}


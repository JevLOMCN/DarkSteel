// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 180

// CPUIDStaticCache'' @ 140f131e0

/* WARNING: Removing unreachable block (ram,0x000140f13300) */
/* WARNING: Removing unreachable block (ram,0x000140f132df) */
/* WARNING: Removing unreachable block (ram,0x000140f132ba) */
/* WARNING: Removing unreachable block (ram,0x000140f132a1) */
/* WARNING: Removing unreachable block (ram,0x000140f13288) */
/* WARNING: Removing unreachable block (ram,0x000140f13255) */
/* WARNING: Removing unreachable block (ram,0x000140f1320b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FCPUIDQueriedData::CPUIDStaticCache__(void)

{
  longlong lVar1;
  uint *puVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if (FCPUIDQueriedData::CPUIDStaticCache.bHasCPUIDInstruction) {
    lVar1 = cpuid_basic_info(0);
    FCPUIDQueriedData::CPUIDStaticCache.Vendor._0_8_ = *(undefined8 *)(lVar1 + 4);
    FCPUIDQueriedData::CPUIDStaticCache.Vendor._8_4_ = *(undefined4 *)(lVar1 + 0xc);
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[1] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[2] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[3] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[4] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[5] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[6] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[7] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[8] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[9] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[10] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0xb] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0xc] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0xd] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0xe] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0xf] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x10] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x11] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x12] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x13] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x14] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x15] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x16] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x17] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x18] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x19] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x1a] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x1b] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x1c] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x1d] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x1e] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x1f] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x20] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x21] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x22] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x23] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x24] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x25] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x26] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x27] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x28] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x29] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x2a] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x2b] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x2c] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x2d] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x2e] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x2f] = '\0';
    puVar2 = (uint *)cpuid(0x80000000);
    FCPUIDQueriedData::CPUIDStaticCache.Vendor[0xc] = '\0';
    if (0x80000003 < *puVar2) {
      pcVar3 = (char *)cpuid_brand_part1_info(0x80000002);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._0_4_ = *(undefined4 *)pcVar3;
      FCPUIDQueriedData::CPUIDStaticCache.Brand._4_4_ = *(undefined4 *)(pcVar3 + 4);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._12_4_ = *(undefined4 *)(pcVar3 + 8);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._8_4_ = *(undefined4 *)(pcVar3 + 0xc);
      pcVar3 = (char *)cpuid_brand_part2_info(0x80000003);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._16_4_ = *(undefined4 *)pcVar3;
      FCPUIDQueriedData::CPUIDStaticCache.Brand._20_4_ = *(undefined4 *)(pcVar3 + 4);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._28_4_ = *(undefined4 *)(pcVar3 + 8);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._24_4_ = *(undefined4 *)(pcVar3 + 0xc);
      pcVar3 = (char *)cpuid_brand_part3_info(0x80000004);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._32_4_ = *(undefined4 *)pcVar3;
      FCPUIDQueriedData::CPUIDStaticCache.Brand._36_4_ = *(undefined4 *)(pcVar3 + 4);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._44_4_ = *(undefined4 *)(pcVar3 + 8);
      FCPUIDQueriedData::CPUIDStaticCache.Brand._40_4_ = *(undefined4 *)(pcVar3 + 0xc);
    }
    puVar2 = (uint *)cpuid_Version_info(1);
    FCPUIDQueriedData::CPUIDStaticCache.CPUInfo = *puVar2;
    FCPUIDQueriedData::CPUIDStaticCache.CPUInfo2 = puVar2[3];
    lVar1 = cpuid(0x80000006);
    uVar6 = *(uint *)(lVar1 + 0xc) & 0xff;
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x30] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x31] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x32] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x33] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x34] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x35] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x36] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x37] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x38] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x39] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x3a] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x3b] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x3c] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x3d] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x3e] = '\0';
    FCPUIDQueriedData::CPUIDStaticCache.Brand[0x3f] = '\0';
    if ((((char)*(uint *)(lVar1 + 0xc) == '\0') || ((uVar6 & uVar6 - 1) != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && !(Result & (Result - 1))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                           ,0xc57,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FCPUIDQueriedData::CPUIDStaticCache.CacheLineSize = uVar6;
    FCPUIDQueriedData::CPUIDStaticCache.bHasTimedPauseInstruction =
         FCPUIDQueriedData::CheckForTimedPauseInstruction();
    if ((4 < (byte)LogWindows._0_1_) &&
       (FCPUIDQueriedData::CPUIDStaticCache.bHasTimedPauseInstruction)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_FCPUIDQueriedData::FCPUIDQueriedData(void)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  return;
}

// DllDirectories'' @ 140f133b0

void __cdecl `dynamic_initializer_for_'FWindowsPlatformProcess::DllDirectories__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWindowsPlatformProcess::DllDirectories__);
  return;
}

// DllDirectoryStack'' @ 140f133d0

void __cdecl `dynamic_initializer_for_'FWindowsPlatformProcess::DllDirectoryStack__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWindowsPlatformProcess::DllDirectoryStack__);
  return;
}

// LaunchURLOverrideDelegate'' @ 140f133f0

void __cdecl `dynamic_initializer_for_'FWindowsPlatformProcess::LaunchURLOverrideDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWindowsPlatformProcess::LaunchURLOverrideDelegate__);
  return;
}

// SearchPathDllCache'' @ 140f13410

void __cdecl `dynamic_initializer_for_'FWindowsPlatformProcess::SearchPathDllCache__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWindowsPlatformProcess::SearchPathDllCache__);
  return;
}

// `dynamic_initializer_for_'CVarDriverDetectionMethod'' @ 140f13430

void __cdecl _dynamic_initializer_for__CVarDriverDetectionMethod__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDriverDetectionMethod,L"r.DriverDetectionMethod",local_res8,
             L"Defines which implementation is used to detect the GPU driver (to check for old drivers, logs and statistics)\n  0: Iterate available drivers in registry and choose the one with the same name, if in question use next method (happens)\n  1: Get the driver of the primary adapter (might not be correct when dealing with multiple adapters)\n  2: Use DirectX LUID (would be the best, not yet implemented)\n  3: Use Windows functions, use the primary device (might be wrong when API is using another adapter)\n  4: Use Windows functions, use names such as DirectX Device (newest, most promising)\n  5: Use Windows SetupAPI functions"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDriverDetectionMethod__);
  return;
}

// `dynamic_initializer_for_'CVarEnableFileShareDeleteFlag'' @ 140f13480

void __cdecl FileConstants::_dynamic_initializer_for__CVarEnableFileShareDeleteFlag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableFileShareDeleteFlag,L"file.allowdeleteopenfiles",&GEnableFileShareDeleteFlag
             ,
             L"Sets the the FILE_SHARE_DELETE flag on all file open operations so that files can be replaced while open. Only supported in editor builds."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableFileShareDeleteFlag__);
  return;
}

// `dynamic_initializer_for_'CVarForceCrashReportDialogOff'' @ 140f134d0

void __cdecl UE::Core::Private::_dynamic_initializer_for__CVarForceCrashReportDialogOff__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarForceCrashReportDialogOff,L"WindowsPlatformCrashContext.ForceCrashReportDialogOff"
             ,local_res8,
             L"If true, force the crash report dialog to not be displayed in the event of a crash.",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarForceCrashReportDialogOff__);
  return;
}

// `dynamic_initializer_for_'CVarLogPlatformMemoryStats'' @ 140f13520

void __cdecl _dynamic_initializer_for__CVarLogPlatformMemoryStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogPlatformMemoryStats,L"memory.WindowsPlatformMemoryGetStatsLimitTotalGB",
             &GWindowsPlatformMemoryGetStatsLimitTotalGB,
             L"Set a synthetic platform total memory size (in GB) which will be returned as Total and Available memory from GetStats\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogPlatformMemoryStats__);
  return;
}

// `dynamic_initializer_for_'CVarMinidumpIncludeReferencedMemory'' @ 140f13570

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarMinidumpIncludeReferencedMemory__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMinidumpIncludeReferencedMemory,
             L"WindowsPlatformCrashContext.MinidumpIncludeReferencedMemory",local_res8,
             L"Include referenced memory in minidumps for non-continuable errors (enable the MiniDumpWithIndirectlyReferencedMemory flag).\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinidumpIncludeReferencedMemory__);
  return;
}

// `dynamic_initializer_for_'CVarScreenshotOnGPUCrash'' @ 140f135c0

void __cdecl UE::Core::Private::_dynamic_initializer_for__CVarScreenshotOnGPUCrash__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarScreenshotOnGPUCrash,L"WindowsPlatformCrashContext.ScreenshotOnGPUCrash",
             local_res8,
             L"Take a screenshot of the game window to include in crash reports for GPU crashes (Windows only, cooked client only)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScreenshotOnGPUCrash__);
  return;
}

// `dynamic_initializer_for_'CVarUseContainerMemory'' @ 140f13610

void __cdecl _dynamic_initializer_for__CVarUseContainerMemory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseContainerMemory,L"memory.WindowsPlatformMemoryUseContainerMemory",
             &GWindowsUseContainerMemory,
             L"Set to assume that this process is running in a docker container and take the entire container\'s memory usage into consideration when computing available memory."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseContainerMemory__);
  return;
}

// `dynamic_initializer_for_'EnsureLock'' @ 140f13660

void __cdecl _dynamic_initializer_for__EnsureLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&EnsureLock,4000);
  atexit(_dynamic_atexit_destructor_for__EnsureLock__);
  return;
}

// `dynamic_initializer_for_'GCrashReportingThread'' @ 140f13690

void __cdecl _dynamic_initializer_for__GCrashReportingThread__(void)

{
  BOOL BVar1;
  HANDLE pvVar2;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  void **ppvVar4;
  
  FGenericPlatformMemoryStats::FGenericPlatformMemoryStats
            ((FGenericPlatformMemoryStats *)
             &GCrashReportingThread.TypedValue.SharedContext.SessionContext.MemoryStats);
  GCrashReportingThread.TypedValue.SharedContext.SessionContext.MemoryStats.
  WindowsSpecificMemoryStat = 0;
  ppvVar4 = GCrashReportingThread.TypedValue.InputEvents;
  GCrashReportingThread.TypedValue.SharedContext.SessionContext.MemoryStats.MemoryPressureStatus =
       Unknown;
  GCrashReportingThread.TypedValue.SharedContext.GPUBreadcrumbs.NumQueues = 0;
  do {
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *ppvVar4 = pvVar2;
    ppvVar4 = ppvVar4 + 1;
  } while (ppvVar4 != &GCrashReportingThread.TypedValue.CrashHandledEvent);
  GCrashReportingThread.TypedValue.CrashHandledEvent =
       CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if (GIgnoreDebugger == false) {
    BVar1 = IsDebuggerPresent();
    if (BVar1 != 0) goto LAB_140f13729;
  }
  SetUnhandledExceptionFilter(UnhandledStaticInitException);
LAB_140f13729:
  GCrashReportingThread.TypedValue.Thread =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FCrashReportingThread::CrashReportingThreadProc,
                    &GCrashReportingThread,0,(LPDWORD)&GCrashReportingThread);
  if (GCrashReportingThread.TypedValue.Thread != (HANDLE)0x0) {
    SetThreadPriority(GCrashReportingThread.TypedValue.Thread,-1);
  }
  if (GCrashReportingThread.TypedValue.CrashClientHandle != (FProcHandle)0x0) {
    FGenericCrashContext::OutOfProcessCrashReporterPid =
         GCrashReportingThread.TypedValue.CrashMonitorPid;
  }
  pTVar3 = FCoreDelegates::GetPreMainInitDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FCrashReportingThread>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar3
             ,(FCrashReportingThread *)&stack0x00000008,(pmf_ad9497c9)0x154f45db0);
  pTVar3 = FCoreDelegates::GetPreMainInitDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FCrashReportingThread>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar3
             ,(FCrashReportingThread *)&stack0x00000008,(pmf_ad9497c9)0x154f45db0);
  GCrashReportingThread.bIsSet = true;
  atexit(_dynamic_atexit_destructor_for__GCrashReportingThread__);
  return;
}

// `dynamic_initializer_for_'GMonitorLock'' @ 140f137e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__GMonitorLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GMonitorLock,4000);
  atexit(_dynamic_atexit_destructor_for__GMonitorLock__);
  return;
}

// `dynamic_initializer_for_'MicrosoftAsyncIOEventPool'' @ 140f13810

void __cdecl _dynamic_initializer_for__MicrosoftAsyncIOEventPool__(void)

{
  atexit(_dynamic_atexit_destructor_for__MicrosoftAsyncIOEventPool__);
  return;
}

// `dynamic_initializer_for_'OptionalAttachmentFilepaths'' @ 140f13830

void __cdecl _dynamic_initializer_for__OptionalAttachmentFilepaths__(void)

{
  atexit(_dynamic_atexit_destructor_for__OptionalAttachmentFilepaths__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WindowsSpecificMemoryStat'' @ 140f13850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WindowsSpecificMemoryStat__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WindowsSpecificMemoryStat ==
      (FThreadSafeStaticStat<FStat_STAT_WindowsSpecificMemoryStat>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WindowsSpecificMemoryStat");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WindowsSpecificMemoryStat,*pFVar1,
               L"Windows Specific Memory Stat","STATGROUP_MemoryPlatform","STATCAT_Advanced",
               L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StorageDevices'' @ 140f138e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__StorageDevices__(void)

{
  atexit(_dynamic_atexit_destructor_for__StorageDevices__);
  return;
}

// `dynamic_initializer_for_'TriggerFailedMicrosoftReadCmd'' @ 140f13900

void __cdecl _dynamic_initializer_for__TriggerFailedMicrosoftReadCmd__(void)

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
    puVar1[3] = TriggerFailedMicrosoftRead;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TriggerFailedMicrosoftReadCmd,L"TriggerFailedWindowsRead",
             L"Tests low level IO errors on Windows",
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
  atexit(_dynamic_atexit_destructor_for__TriggerFailedMicrosoftReadCmd__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_AvailablePhysical'' @ 140f13a40

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_AvailablePhysical__(void)

{
  __GTraceCounterMemory_AvailablePhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Available Physical",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_AvailablePhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_AvailablePhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_AvailableVirtual'' @ 140f13a80

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_AvailableVirtual__(void)

{
  __GTraceCounterMemory_AvailableVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Available Virtual",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_AvailableVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_AvailableVirtual__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_FreeAndZeroPageList'' @ 140f13ac0

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_FreeAndZeroPageList__(void)

{
  __GTraceCounterMemory_FreeAndZeroPageList.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Free & Zero Page List",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_FreeAndZeroPageList.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_FreeAndZeroPageList__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_PrivateBytesShaderCompilation'' @ 140f13b00

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_PrivateBytesShaderCompilation__(void)

{
  __GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Private Bytes (Local Shader Compile Workers)",TraceCounterType_Int
                  ,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_PrivateBytesShaderCompilation__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_TotalPhysical'' @ 140f13b40

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_TotalPhysical__(void)

{
  __GTraceCounterMemory_TotalPhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Total Physical",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_TotalPhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_TotalPhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_TotalVirtual'' @ 140f13b80

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_TotalVirtual__(void)

{
  __GTraceCounterMemory_TotalVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Total Virtual",TraceCounterType_Int,TraceCounterDisplayHint_Memory
                 );
  LOCK();
  __GTraceCounterMemory_TotalVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_TotalVirtual__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_UsedDedicatedVRAM'' @ 140f13bc0

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_UsedDedicatedVRAM__(void)

{
  __GTraceCounterMemory_UsedDedicatedVRAM.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / GPU Memory / Used Dedicated",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_UsedDedicatedVRAM.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_UsedDedicatedVRAM__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_UsedPhysical'' @ 140f13c00

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_UsedPhysical__(void)

{
  __GTraceCounterMemory_UsedPhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Used Physical (Main Process)",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_UsedPhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_UsedPhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_UsedVirtual'' @ 140f13c40

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_UsedVirtual__(void)

{
  __GTraceCounterMemory_UsedVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Used Virtual (Main Process)",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_UsedVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_UsedVirtual__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMemory_UsedVirtualShaderCompilation'' @ 140f13c80

void __cdecl _dynamic_initializer_for____GTraceCounterMemory_UsedVirtualShaderCompilation__(void)

{
  __GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Used Virtual (Local Shader Compile Workers)",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMemory_UsedVirtualShaderCompilation__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterSystem_CPU_Usage'' @ 140f13cc0

void __cdecl _dynamic_initializer_for____GTraceCounterSystem_CPU_Usage__(void)

{
  __GTraceCounterSystem_CPU_Usage.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / CPU / Total Usage",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterSystem_CPU_Usage.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterSystem_CPU_Usage__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterSystem_DemandZeroPageFaults'' @ 140f13d00

void __cdecl _dynamic_initializer_for____GTraceCounterSystem_DemandZeroPageFaults__(void)

{
  __GTraceCounterSystem_DemandZeroPageFaults.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Memory / Demand Zero Page Faults",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterSystem_DemandZeroPageFaults.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterSystem_DemandZeroPageFaults__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterSystem_GPU_Usage'' @ 140f13d40

void __cdecl _dynamic_initializer_for____GTraceCounterSystem_GPU_Usage__(void)

{
  __GTraceCounterSystem_GPU_Usage.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / GPU Engine / Total Usage",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterSystem_GPU_Usage.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterSystem_GPU_Usage__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterSystem_Network_Received'' @ 140f13d80

void __cdecl _dynamic_initializer_for____GTraceCounterSystem_Network_Received__(void)

{
  __GTraceCounterSystem_Network_Received.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Network / Total Bytes Received",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterSystem_Network_Received.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterSystem_Network_Received__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterSystem_Network_Sent'' @ 140f13dc0

void __cdecl _dynamic_initializer_for____GTraceCounterSystem_Network_Sent__(void)

{
  __GTraceCounterSystem_Network_Sent.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / Network / Total Bytes Sent",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterSystem_Network_Sent.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterSystem_Network_Sent__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterSystem_Thread_Count'' @ 140f13e00

void __cdecl _dynamic_initializer_for____GTraceCounterSystem_Thread_Count__(void)

{
  __GTraceCounterSystem_Thread_Count.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PC / CPU / Total Thread Count",TraceCounterType_Int,TraceCounterDisplayHint_None
                 );
  LOCK();
  __GTraceCounterSystem_Thread_Count.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterSystem_Thread_Count__);
  return;
}

// `scalar_deleting_destructor' @ 141a9a580

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// DestructItems<TTuple<FString,unsigned_long>,int> @ 141a9b050

void __cdecl
DestructItems<TTuple<FString,unsigned_long>,int>(TTuple<FString,unsigned_long> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`anonymous_namespace'::FStorageDevice,int> @ 141a9b090

void __cdecl
DestructItems<_anonymous_namespace_::FStorageDevice,int>(FStorageDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SerialNumber).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// WriteToString<256,char_const_(&)[13],FString_const_&> @ 141a9bad0

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,char_const_(&)[13],FString_const_&>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,char (*param_1) [13],
          FString *param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  pwVar3 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar4 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar3;
  __return_storage_ptr__->_padding_ = (longlong)pwVar3;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [13])0x0) {
    sVar2 = strlen(*param_1);
    iVar4 = (int)sVar2;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,256> *)(pwVar3 + iVar4)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pwVar3 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar4,*param_1,iVar4);
    __return_storage_ptr__->_padding_ = (longlong)pwVar3;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
             (wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
  return __return_storage_ptr__;
}

// operator() @ 141a9dc20

bool __thiscall
``anonymous_namespace'::CreateCrashReportClientPath'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1)

{
  int iVar1;
  wchar_t wVar2;
  DWORD DVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined8 *puVar8;
  
  pwVar4 = FGenericPlatformMisc::EngineDir();
  *(undefined2 *)**(undefined8 **)this = 0;
  TCString<wchar_t>::StrncatTruncateDest
            ((wchar_t *)**(undefined8 **)this,*(int *)((longlong)this + 8),pwVar4);
  pwVar4 = L"Binaries/";
  pwVar6 = (wchar_t *)**(undefined8 **)this;
  sVar5 = wcslen(pwVar6);
  iVar1 = *(int *)((longlong)this + 8);
  iVar7 = (int)sVar5 + 1;
  if (iVar7 < iVar1) {
    pwVar6 = pwVar6 + (int)sVar5;
    wVar2 = L'B';
    do {
      *pwVar6 = wVar2;
      pwVar4 = pwVar4 + 1;
      wVar2 = *pwVar4;
      pwVar6 = pwVar6 + 1;
      iVar7 = iVar7 + 1;
      if (wVar2 == L'\0') break;
    } while (iVar7 < iVar1);
    *pwVar6 = L'\0';
  }
  pwVar4 = L"Win64";
  pwVar6 = (wchar_t *)**(undefined8 **)this;
  sVar5 = wcslen(pwVar6);
  iVar1 = *(int *)((longlong)this + 8);
  iVar7 = (int)sVar5 + 1;
  if (iVar7 < iVar1) {
    pwVar6 = pwVar6 + (int)sVar5;
    wVar2 = L'W';
    do {
      *pwVar6 = wVar2;
      pwVar4 = pwVar4 + 1;
      wVar2 = *pwVar4;
      pwVar6 = pwVar6 + 1;
      iVar7 = iVar7 + 1;
      if (wVar2 == L'\0') break;
    } while (iVar7 < iVar1);
    *pwVar6 = L'\0';
  }
  puVar8 = *(undefined8 **)this;
  pwVar4 = L"/";
  pwVar6 = (wchar_t *)*puVar8;
  sVar5 = wcslen(pwVar6);
  iVar1 = *(int *)((longlong)this + 8);
  iVar7 = (int)sVar5 + 1;
  if (iVar7 < iVar1) {
    pwVar6 = pwVar6 + (int)sVar5;
    wVar2 = L'/';
    do {
      *pwVar6 = wVar2;
      pwVar4 = pwVar4 + 1;
      wVar2 = *pwVar4;
      pwVar6 = pwVar6 + 1;
      iVar7 = iVar7 + 1;
      if (wVar2 == L'\0') break;
    } while (iVar7 < iVar1);
    *pwVar6 = L'\0';
    puVar8 = *(undefined8 **)this;
  }
  wVar2 = *param_1;
  if (wVar2 != L'\0') {
    pwVar4 = (wchar_t *)*puVar8;
    sVar5 = wcslen(pwVar4);
    iVar1 = *(int *)((longlong)this + 8);
    iVar7 = (int)sVar5 + 1;
    if (iVar7 < iVar1) {
      pwVar4 = pwVar4 + (int)sVar5;
      do {
        *pwVar4 = wVar2;
        param_1 = param_1 + 1;
        wVar2 = *param_1;
        pwVar4 = pwVar4 + 1;
        iVar7 = iVar7 + 1;
        if (wVar2 == L'\0') break;
      } while (iVar7 < iVar1);
      *pwVar4 = L'\0';
    }
  }
  DVar3 = GetFileAttributesW((LPCWSTR)**(undefined8 **)this);
  return DVar3 != 0xffffffff;
}

// operator() @ 141a9e660

void __thiscall
``anonymous_namespace'::ReportCrashForMonitor'::__l28::<lambda_1>::operator()
          (void *this,tagTHREADENTRY32 *param_1)

{
  longlong lVar1;
  uint uVar2;
  FThreadManager *this_00;
  wchar_t *_Source;
  FString *pFVar3;
  int *piVar4;
  
  pFVar3 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
            ::__l2::GameThreadName;
  *(ulong *)(**(longlong **)this + 0x1000 + (ulonglong)**(uint **)((longlong)this + 8) * 4) =
       param_1->th32ThreadID;
  uVar2 = param_1->th32ThreadID;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::GameThreadName,L"GameThread");
      atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__
            );
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar4 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::RenderThreadName,L"RenderThread");
      atexit(`FThreadManager::GetThreadName'::__l2::
             _dynamic_atexit_destructor_for__RenderThreadName__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (uVar2 != GGameThreadId) {
    if (uVar2 == GRenderThreadId) {
      pFVar3 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::RenderThreadName;
    }
    else {
      this_00 = FThreadManager::Get();
      pFVar3 = FThreadManager::GetThreadNameInternal(this_00,uVar2);
    }
  }
  _Source = L"Unknown";
  if (1 < (pFVar3->Data).ArrayNum) {
    _Source = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  lVar1 = **(longlong **)this + (ulonglong)(uint)(**(int **)((longlong)this + 8) << 6) * 2;
  wcsncpy((wchar_t *)(lVar1 + 0x1800),_Source,0x3f);
  *(undefined2 *)(lVar1 + 0x187e) = 0;
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  return;
}

// `scalar_deleting_destructor' @ 141a9ecb0

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9ece0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9ed10

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9ed40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9ed70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(double),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(double),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9edb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsProcessSentinel,SharedPointerInternals::DefaultDeleter<FWindowsProcessSentinel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWindowsProcessSentinel,SharedPointerInternals::DefaultDeleter<FWindowsProcessSentinel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9edf0

void * __thiscall
FAsyncBufferedFileReaderWindows::_scalar_deleting_destructor_
          (FAsyncBufferedFileReaderWindows *this,uint param_1)

{
  BOOL BVar1;
  
  this->_padding_ = (longlong)&___7FAsyncBufferedFileReaderWindows__6B_;
  WaitForAsyncRead(this);
  if (this->Handle != (void *)0x0) {
    FPlatformFileTrace::BeginClose((ulong64)this->Handle);
    BVar1 = CloseHandle(this->Handle);
    if (BVar1 == 0) {
      FPlatformFileTrace::FailClose((ulong64)this->Handle);
    }
    else {
      FPlatformFileTrace::EndClose((ulong64)this->Handle);
    }
    this->Handle = (void *)0x0;
  }
  FMemory::Free(this->Buffers[0]);
  FMemory::Free(this->Buffers[1]);
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9ee90

void * __thiscall FEventWin::_scalar_deleting_destructor_(FEventWin *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FEventWin__6B_;
  if (this->Event != (HANDLE)0x0) {
    CloseHandle(this->Event);
  }
  this->_padding_ = (longlong)&___7FEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9eef0

void * __thiscall
FFileHandleWindows::_scalar_deleting_destructor_(FFileHandleWindows *this,uint param_1)

{
  BOOL BVar1;
  
  this->_padding_ = (longlong)&___7FFileHandleWindows__6B_;
  FPlatformFileTrace::BeginClose((ulong64)this->FileHandle);
  BVar1 = CloseHandle(this->FileHandle);
  if (BVar1 == 0) {
    FPlatformFileTrace::FailClose((ulong64)this->FileHandle);
  }
  else {
    FPlatformFileTrace::EndClose((ulong64)this->FileHandle);
  }
  this->FileHandle = (void *)0x0;
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9ef70

void * __thiscall FMallocTBB::_scalar_deleting_destructor_(FMallocTBB *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9efd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMappedFileHandleWindows::_scalar_deleting_destructor_(FMappedFileHandleWindows *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  BOOL BVar2;
  
  this->_padding_ = (longlong)&___7FMappedFileHandleWindows__6B_;
  if (this->NumOutstandingRegions != (atomic<int>)0x0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_virtual___cdecl_FMappedFileHandleWindows::~FMappedFileHandleWindows(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  CloseHandle(this->MappingHandle);
  FPlatformFileTrace::BeginClose((ulong64)this->Handle);
  BVar2 = CloseHandle(this->Handle);
  if (BVar2 == 0) {
    FPlatformFileTrace::FailClose((ulong64)this->Handle);
  }
  else {
    FPlatformFileTrace::EndClose((ulong64)this->Handle);
  }
  pFVar1 = (this->DebugFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IMappedFileHandle::~IMappedFileHandle((IMappedFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f090

void * __thiscall
FMappedFileRegionWindows::_scalar_deleting_destructor_(FMappedFileRegionWindows *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7FMappedFileRegionWindows__6B_;
  UnmapViewOfFile(this->AlignedMappedPtr);
  LOCK();
  paVar1 = &this->Parent->NumOutstandingRegions;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((int)aVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldNumOutstandingRegions > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x447,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  IMappedFileRegion::~IMappedFileRegion((IMappedFileRegion *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f120

void * __thiscall
FMicrosoftPlatformCrashContext::_scalar_deleting_destructor_
          (FMicrosoftPlatformCrashContext *this,uint param_1)

{
  FGenericCrashContext::~FGenericCrashContext((FGenericCrashContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f160

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall
FMicrosoftReadRequest::_scalar_deleting_destructor_(FMicrosoftReadRequest *this,uint param_1)

{
  ~FMicrosoftReadRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f1a0

void * __thiscall
WindowsPlatformPerfCountersImpl::FPerfCountersThread::_scalar_deleting_destructor_
          (FPerfCountersThread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FPerfCountersThread_WindowsPlatformPerfCountersImpl__6B_;
  LOCK();
  this->bContinue = (atomic<bool>)0x0;
  UNLOCK();
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f210

void * __thiscall
FRunnableThreadWin::_scalar_deleting_destructor_(FRunnableThreadWin *this,uint param_1)

{
  FLowLevelMemTracker *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FRunnableThreadWin__6B_;
  if (this->Thread != (void *)0x0) {
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    }
    WaitForSingleObject(this->Thread,0xffffffff);
    CloseHandle(this->Thread);
    this->Thread = (void *)0x0;
    pvVar2 = (void *)((ulonglong)this | 0x800000000000);
    MemoryTrace_Free((ulong64)pvVar2,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar1 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar1 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar1,Default,pvVar2,None,true);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar1 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar1 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar1,Platform,pvVar2,None,true);
      }
    }
  }
  FRunnableThread::~FRunnableThread((FRunnableThread *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f320

void * __thiscall
FSingleThreadEvent::_scalar_deleting_destructor_(FSingleThreadEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f360

void * __thiscall
FWindowsErrorOutputDevice::_scalar_deleting_destructor_
          (FWindowsErrorOutputDevice *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f3a0

void * __thiscall
FWindowsEventLogOutputDevice::_scalar_deleting_destructor_
          (FWindowsEventLogOutputDevice *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FWindowsEventLogOutputDevice__6B_;
  if (this->EventLog != (HANDLE)0x0) {
    DeregisterEventSource(this->EventLog);
    this->EventLog = (void *)0x0;
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f400

void * __thiscall
FWindowsPlatformCrashContext::_scalar_deleting_destructor_
          (FWindowsPlatformCrashContext *this,uint param_1)

{
  FGenericCrashContext::~FGenericCrashContext((FGenericCrashContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f440

void * __thiscall
FWindowsPlatformFile::_scalar_deleting_destructor_(FWindowsPlatformFile *this,uint param_1)

{
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f480

void * __thiscall
FWindowsPlatformNamedPipe::_scalar_deleting_destructor_
          (FWindowsPlatformNamedPipe *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FWindowsPlatformNamedPipe__6B_;
  FGenericPlatformNamedPipe::~FGenericPlatformNamedPipe((FGenericPlatformNamedPipe *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f4d0

void * __thiscall
FWindowsProcessSentinel::_scalar_deleting_destructor_(FWindowsProcessSentinel *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FWindowsProcessSentinel__6B_;
  CloseHandle(this->FileHandle);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f520

void * __thiscall
FWindowsPlatformProcess::FWindowsSemaphore::_scalar_deleting_destructor_
          (FWindowsSemaphore *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f560

void * __thiscall
IMappedFileHandle::_scalar_deleting_destructor_(IMappedFileHandle *this,uint param_1)

{
  ~IMappedFileHandle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f5a0

void * __thiscall
IMappedFileRegion::_scalar_deleting_destructor_(IMappedFileRegion *this,uint param_1)

{
  ~IMappedFileRegion(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a9f5e0

void * __thiscall
IPhysicalPlatformFile::_scalar_deleting_destructor_(IPhysicalPlatformFile *this,uint param_1)

{
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AbortHandler @ 141a9f620

void __cdecl AbortHandler(int param_1)

{
  wchar_t **local_res10 [3];
  wchar_t *local_18 [2];
  
  local_18[0] = L"Abort signal received";
  local_res10[0] = local_18;
  RaiseException(0x4000,0,1,(ULONG_PTR *)local_res10);
  return;
}

// CaptureStackTraceExternalProcess @ 141aa1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
CaptureStackTraceExternalProcess
          (ulong64 *param_1,uint param_2,_CONTEXT *param_3,void *param_4,uint *param_5)

{
  ulong64 uVar1;
  void *pvVar2;
  ulong64 *puVar3;
  int iVar4;
  ulong64 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  _CONTEXT *p_Var9;
  bool bVar10;
  undefined1 auStack_688 [32];
  ulong64 *local_668;
  undefined8 local_660;
  code *local_658;
  code *local_650;
  undefined8 local_648;
  uint local_638;
  ulong64 local_628;
  undefined4 local_61c;
  longlong local_608;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined4 local_5ec;
  ulong64 local_518 [19];
  undefined8 uStack_480;
  longlong local_478;
  ulong64 local_420;
  ulonglong local_48;
  
  pvVar2 = GProcessHandle;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_688;
  bVar10 = true;
  uVar8 = 0;
  lVar6 = 9;
  puVar3 = local_518;
  do {
    p_Var9 = param_3;
    puVar5 = puVar3;
    uVar1 = p_Var9->P2Home;
    *puVar5 = p_Var9->P1Home;
    puVar5[1] = uVar1;
    uVar1 = p_Var9->P4Home;
    puVar5[2] = p_Var9->P3Home;
    puVar5[3] = uVar1;
    uVar1 = p_Var9->P6Home;
    puVar5[4] = p_Var9->P5Home;
    puVar5[5] = uVar1;
    uVar1 = *(ulong64 *)&p_Var9->SegCs;
    puVar5[6] = *(ulong64 *)&p_Var9->ContextFlags;
    puVar5[7] = uVar1;
    uVar1 = p_Var9->Dr0;
    puVar5[8] = *(ulong64 *)&p_Var9->SegGs;
    puVar5[9] = uVar1;
    uVar1 = p_Var9->Dr2;
    puVar5[10] = p_Var9->Dr1;
    puVar5[0xb] = uVar1;
    uVar1 = p_Var9->Dr6;
    puVar5[0xc] = p_Var9->Dr3;
    puVar5[0xd] = uVar1;
    uVar1 = p_Var9->Rax;
    puVar5[0xe] = p_Var9->Dr7;
    puVar5[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar3 = puVar5 + 0x10;
    param_3 = (_CONTEXT *)&p_Var9->Rcx;
  } while (lVar6 != 0);
  uVar1 = p_Var9->Rdx;
  puVar5[0x10] = p_Var9->Rcx;
  puVar5[0x11] = uVar1;
  uVar1 = p_Var9->Rsp;
  puVar5[0x12] = p_Var9->Rbx;
  puVar5[0x13] = uVar1;
  uVar1 = p_Var9->Rsi;
  puVar5[0x14] = p_Var9->Rbp;
  puVar5[0x15] = uVar1;
  uVar1 = p_Var9->R8;
  puVar5[0x16] = p_Var9->Rdi;
  puVar5[0x17] = uVar1;
  uVar1 = p_Var9->R10;
  puVar5[0x18] = p_Var9->R9;
  puVar5[0x19] = uVar1;
  *param_5 = 0;
  memset(&local_628,0,0x108);
  local_61c = 3;
  local_5ec = 3;
  local_5fc = 3;
  local_628 = local_420;
  local_5f8 = uStack_480;
  local_608 = local_478;
  while( true ) {
    uVar7 = (uint)uVar8;
    if ((!bVar10) || (param_2 <= uVar7)) goto LAB_141aa1826;
    local_648 = 0;
    local_650 = SymGetModuleBase64_exref;
    local_658 = SymFunctionTableAccess64_exref;
    local_660 = 0;
    local_668 = local_518;
    iVar4 = StackWalk64(0x8664,pvVar2,param_4,&local_628);
    bVar10 = iVar4 != 0;
    if (iVar4 == 0) break;
    if (local_608 == 0) goto LAB_141aa1826;
    param_1[uVar8] = local_628;
    local_638 = uVar7 + 1;
    uVar8 = (ulonglong)local_638;
    *param_5 = local_638;
  }
  GetLastError();
LAB_141aa1826:
  if (uVar7 < param_2) {
    memset(param_1 + uVar8,0,(ulonglong)(param_2 - uVar7) << 3);
  }
  return 1;
}

// ConsoleCtrlHandler @ 141aa1f00

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl ConsoleCtrlHandler(ulong param_1)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this;
  FOutputDeviceRedirector *pFVar2;
  HANDLE hProcess;
  bool bVar3;
  
  bVar3 = GIsRequestingExit;
  if (!AppTermDelegateBroadcast) {
    RequestEngineExit(L"ConsoleCtrl RequestExit");
    this = FCoreDelegates::GetApplicationWillTerminateDelegate();
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(this);
    AppTermDelegateBroadcast = true;
  }
  if (param_1 == 0) {
    bVar1 = FApp::IsUnattended();
    if (!bVar1) {
      if ((!bVar3) && (2 < (byte)LogCore._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCore);
        if (2 < (byte)LogCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCore);
        }
      }
      goto LAB_141aa1f8d;
    }
  }
  bVar3 = true;
LAB_141aa1f8d:
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(pFVar2);
  }
  if (GWarn != (FFeedbackContext *)0x0) {
    (**(code **)(GWarn->_padding_ + 0x20))();
  }
  if (GError != (FOutputDeviceError *)0x0) {
    (**(code **)(GError->_padding_ + 0x20))();
  }
  if (bVar3 == false) {
    return 1;
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc000013a);
  return 0;
}

// CreateExceptionInfoString @ 141aa2bc0

void __cdecl CreateExceptionInfoString(_EXCEPTION_RECORD *param_1,wchar_t *param_2,int param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  ForAnyElementType _Source;
  int iVar3;
  FString local_28;
  FString local_18;
  
  FString::FString(&local_28,L"Unhandled Exception: ");
  uVar1 = param_1->ExceptionCode;
  if (uVar1 < 0xc000008d) {
    if (uVar1 == 0xc000008c) {
      FString::AppendChars(&local_28,L"EXCEPTION_ARRAY_BOUNDS_EXCEEDED",0x1f);
      goto LAB_141aa2ddc;
    }
    if (uVar1 == 0x80000002) {
      FString::AppendChars(&local_28,L"EXCEPTION_DATATYPE_MISALIGNMENT",0x1f);
      goto LAB_141aa2ddc;
    }
    if (uVar1 != 0xc0000005) {
      if (uVar1 == 0xc000001d) {
        FString::AppendChars(&local_28,L"EXCEPTION_ILLEGAL_INSTRUCTION",0x1d);
        goto LAB_141aa2ddc;
      }
      goto switchD_141aa2d08_caseD_c000008f;
    }
    FString::AppendChars(&local_28,L"EXCEPTION_ACCESS_VIOLATION ",0x1b);
    if (param_1->ExceptionInformation[0] == 0) {
      pwVar2 = L"reading address ";
LAB_141aa2c81:
      FString::AppendChars(&local_28,pwVar2,0x10);
    }
    else if (param_1->ExceptionInformation[0] == 1) {
      pwVar2 = L"writing address ";
      goto LAB_141aa2c81;
    }
    FString::PrintfImpl(&local_18,L"0x%016llx");
LAB_141aa2db3:
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    switch(uVar1) {
    case 0xc000008d:
      FString::AppendChars(&local_28,L"EXCEPTION_FLT_DENORMAL_OPERAND",0x1e);
      break;
    case 0xc000008e:
      FString::AppendChars(&local_28,L"EXCEPTION_FLT_DIVIDE_BY_ZERO",0x1c);
      break;
    default:
switchD_141aa2d08_caseD_c000008f:
      FString::PrintfImpl(&local_18,L"0x%08x");
      goto LAB_141aa2db3;
    case 0xc0000090:
      FString::AppendChars(&local_28,L"EXCEPTION_FLT_INVALID_OPERATION",0x1f);
      break;
    case 0xc0000094:
      FString::AppendChars(&local_28,L"EXCEPTION_INT_DIVIDE_BY_ZERO",0x1c);
      break;
    case 0xc0000096:
      FString::AppendChars(&local_28,L"EXCEPTION_PRIV_INSTRUCTION",0x1a);
      break;
    case 0xc00000fd:
      FString::AppendChars(&local_28,L"EXCEPTION_STACK_OVERFLOW",0x18);
    }
  }
LAB_141aa2ddc:
  _Source.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    _Source.Data = local_28.Data.AllocatorInstance.Data;
  }
  wcsncpy(param_2,(wchar_t *)_Source.Data,(longlong)param_3 - 1);
  param_2[(longlong)param_3 + -1] = L'\0';
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// EngineUnhandledExceptionFilter @ 141aa4dd0

/* WARNING: Enum "Type": Some values do not have unique names */

long __cdecl EngineUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this;
  FOutputDeviceRedirector *pFVar2;
  HANDLE hProcess;
  bool bVar3;
  
  ReportCrash(param_1);
  GIsCriticalError = true;
  if (GIsRequestingExit == false) {
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    bVar3 = GIsCriticalError != false;
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    RequestEngineExit(L"Win RequestExit");
    bVar1 = UE::IsGCLocked();
    if (!bVar1) {
      this = FCoreDelegates::GetApplicationWillTerminateDelegate();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(this);
    }
    pFVar2 = GetGlobalLogSingleton();
    if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
      pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar2);
    }
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,-(uint)bVar3 & 3);
  }
  return 0;
}

// FreeIOPooledEvent @ 141aa6fc0

void __cdecl FreeIOPooledEvent(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((((longlong)param_1 + 1U & 0xfffffffffffffffe) == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ToFree != ((HANDLE)(LONG_PTR)-1) && (void*)(UPTRINT)ToFree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                         ,0x31,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ResetEvent(param_1);
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar7 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    pFVar5 = (FIndexedLockFreeLink *)0x0;
    uVar7 = 0;
  }
  else {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  do {
    uVar2 = MicrosoftAsyncIOEventPool._0_8_;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar6 = (((ulonglong)uVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar6 < (uVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (uVar4 == 0) {
      pFVar5 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe] + ((uint)uVar7 & 0x3fff);
    }
    pFVar5->SingleNext = (atomic<unsigned_int>)((uint)uVar2 & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar3 = uVar2 != MicrosoftAsyncIOEventPool._0_8_;
    uVar6 = uVar6 | uVar7;
    if (bVar3) {
      uVar6 = MicrosoftAsyncIOEventPool._0_8_;
    }
    MicrosoftAsyncIOEventPool._0_8_ = uVar6;
    UNLOCK();
  } while (bVar3);
  return;
}

// GetIOPooledEvent @ 141aaaeb0

void * __cdecl GetIOPooledEvent(void)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  HANDLE pvVar4;
  void *pvVar5;
  
  pvVar3 = FLockFreePointerListLIFOBase<void,64,1>::Pop
                     ((FLockFreePointerListLIFOBase<void,64,1> *)&MicrosoftAsyncIOEventPool);
  pvVar5 = (void *)0xffffffffffffffff;
  if (pvVar3 != (void *)0x0) {
    pvVar5 = pvVar3;
  }
  if (pvVar5 != (void *)0xffffffffffffffff) {
    return pvVar5;
  }
  pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if ((pvVar4 == (HANDLE)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)(UPTRINT)Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                         ,0x2a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar1)();
    return pvVar5;
  }
  return pvVar4;
}

// GetMainWindowHandleCallback @ 141aab050

int __cdecl GetMainWindowHandleCallback(HWND__ *param_1,long64 param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  DWORD local_res10 [6];
  
  local_res10[0] = 0;
  GetWindowThreadProcessId((HWND)param_1,local_res10);
  if (*(DWORD *)(param_2 + 8) == local_res10[0]) {
    pHVar2 = GetWindow((HWND)param_1,4);
    if (pHVar2 == (HWND)0x0) {
      BVar1 = IsWindowVisible((HWND)param_1);
      if (BVar1 != 0) {
        *(HWND__ **)param_2 = param_1;
        return 0;
      }
    }
  }
  return 1;
}

// GetMiMallocNtAllocateVirtualMemoryEx @ 141aab210

_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong * __cdecl
GetMiMallocNtAllocateVirtualMemoryEx(void)

{
  HMODULE hModule;
  code *pcVar1;
  
  pcVar1 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
  GOSNtAllocateVirtualMemoryEx =
       (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
  hModule = LoadLibraryW(L"ntdll.dll");
  if (hModule != (HMODULE)0x0) {
    GOSNtAllocateVirtualMemoryEx =
         (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
         GetProcAddress(hModule,"NtAllocateVirtualMemoryEx");
    FreeLibrary(hModule);
  }
  if (GOSNtAllocateVirtualMemoryEx !=
      (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0) {
    pcVar1 = MiMallocNtAllocateVirtualMemoryEx;
  }
  return pcVar1;
}

// GetMiMallocVirtualAlloc2 @ 141aab280

_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong * __cdecl
GetMiMallocVirtualAlloc2(void)

{
  HMODULE hModule;
  code *pcVar1;
  
  pcVar1 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0;
  GOSVirtualAlloc2 =
       (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0;
  hModule = LoadLibraryW(L"kernelbase.dll");
  if (hModule != (HMODULE)0x0) {
    GOSVirtualAlloc2 =
         (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
         GetProcAddress(hModule,"VirtualAlloc2FromApp");
    if (GOSVirtualAlloc2 ==
        (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0) {
      GOSVirtualAlloc2 =
           (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
           GetProcAddress(hModule,"VirtualAlloc2");
    }
    FreeLibrary(hModule);
  }
  if (GOSVirtualAlloc2 !=
      (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0) {
    pcVar1 = MiMallocVirtualAlloc2;
  }
  return pcVar1;
}

// GetOSVersionsHelper @ 141aab830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl GetOSVersionsHelper(wchar_t *param_1,int param_2,wchar_t *param_3,int param_4)

{
  BOOL BVar1;
  LSTATUS LVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStackY_298 [32];
  DWORD local_268 [2];
  HKEY local_260;
  DWORD local_258;
  undefined4 local_254;
  FString local_250;
  FString local_240;
  int local_230;
  int local_22c;
  FString local_228;
  FString local_218;
  BYTE local_208 [8];
  FString local_200;
  wchar_t *local_1f0;
  wchar_t *local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  _SYSTEM_INFO local_1b0;
  _OSVERSIONINFOW local_178;
  char local_5e;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar11 = 0;
  local_230 = param_2;
  local_22c = param_4;
  local_1f0 = param_1;
  local_1e8 = param_3;
  GetNativeSystemInfo(&local_1b0);
  memset(&local_178.dwMajorVersion,0,0x118);
  local_178.dwOSVersionInfoSize = 0x11c;
  FString::FString(&local_228,L"Windows (unknown version)");
  FString::FString(&local_250,L"");
  BVar1 = GetVersionExW(&local_178);
  if (BVar1 == 0) {
    uVar11 = 4;
    goto LAB_141aac2e4;
  }
  if (local_178.dwMajorVersion == 6) {
    if (local_178.dwMinorVersion == 1) {
      pwVar6 = L"Windows 7";
      if (local_5e != '\x01') {
        pwVar6 = L"Windows Server 2008 R2";
      }
    }
    else if (local_178.dwMinorVersion == 2) {
      pwVar6 = L"Windows 8";
      if (local_5e != '\x01') {
        pwVar6 = L"Windows Server 2012";
      }
    }
    else {
      if (local_178.dwMinorVersion != 3) {
        uVar11 = 1;
        goto LAB_141aabfec;
      }
      pwVar6 = L"Windows 8.1";
      if (local_5e != '\x01') {
        pwVar6 = L"Windows Server 2012 R2";
      }
    }
    FString::operator=(&local_228,pwVar6);
    uVar11 = 0;
  }
  else if (local_178.dwMajorVersion == 10) {
    if (local_178.dwMinorVersion == 0) {
      if (local_5e == '\x01') {
        bVar13 = local_178.dwBuildNumber < 22000;
        pwVar6 = L"Windows 11";
        pwVar3 = L"Windows 10";
      }
      else {
        bVar13 = local_178.dwBuildNumber < 0x4f7c;
        pwVar6 = L"Windows Server 2022";
        pwVar3 = L"Windows Server 2019";
      }
      if (bVar13) {
        pwVar6 = pwVar3;
      }
      FString::operator=(&local_228,pwVar6);
      FVar7.Data = (FScriptContainerElement *)0x0;
      bVar13 = false;
      uVar12 = uVar11;
      do {
        if (bVar13) goto LAB_141aabe6a;
        local_260 = (HKEY)0x0;
        uVar9 = 0x100;
        if (uVar12 == 0) {
          uVar9 = 0x200;
        }
        LVar2 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                              L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",0,uVar9 | 0x20019,
                              &local_260);
        if (LVar2 == 0) {
          local_268[0] = 0;
          local_258 = 0;
          LVar2 = RegQueryValueExW(local_260,L"DisplayVersion",(LPDWORD)0x0,&local_258,(LPBYTE)0x0,
                                   local_268);
          if ((LVar2 == 0) && (local_268[0] != 0)) {
            if ((local_258 == 1) || (local_258 == 2)) {
LAB_141aabaef:
              pwVar6 = operator_new__((ulonglong)local_268[0]);
              LVar2 = RegQueryValueExW(local_260,L"DisplayVersion",(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPBYTE)pwVar6,local_268);
              if (LVar2 == 0) {
                pFVar4 = FString::ConstructFromPtrSize(&local_1e0,pwVar6,(local_268[0] >> 1) - 1);
                if (&local_1d0 != pFVar4) {
                  if (FVar7.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar7.Data);
                  }
                  FVar7.Data = (pFVar4->Data).AllocatorInstance.Data;
                  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  (pFVar4->Data).ArrayNum = 0;
                  (pFVar4->Data).ArrayMax = 0;
                }
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                bVar13 = true;
              }
              operator_delete__(pwVar6);
            }
            else if (local_258 == 4) {
              LVar2 = RegQueryValueExW(local_260,L"DisplayVersion",(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPBYTE)&local_254,local_268);
              if (LVar2 == 0) {
                FString::PrintfImpl(&local_240,L"%u");
                if (FVar7.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar7.Data);
                }
                FVar7.Data = local_240.Data.AllocatorInstance.Data;
                bVar13 = true;
                local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_240.Data.ArrayNum = 0;
                local_240.Data.ArrayMax = 0;
              }
            }
            else {
              if (local_258 == 7) goto LAB_141aabaef;
              if ((local_258 == 0xb) &&
                 (LVar2 = RegQueryValueExW(local_260,L"DisplayVersion",(LPDWORD)0x0,(LPDWORD)0x0,
                                           local_208,local_268), LVar2 == 0)) {
                FString::PrintfImpl(&local_218,L"%lld");
                if (FVar7.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar7.Data);
                }
                FVar7.Data = local_218.Data.AllocatorInstance.Data;
                bVar13 = true;
                local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_218.Data.ArrayNum = 0;
                local_218.Data.ArrayMax = 0;
              }
            }
          }
          RegCloseKey(local_260);
        }
        FVar8.Data = (FScriptContainerElement *)0x0;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 2);
      if (bVar13) {
LAB_141aabe6a:
        FString::PrintfImpl(&local_240,L" (%s)");
        iVar10 = local_240.Data.ArrayNum + -1;
        if (local_240.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        FString::AppendChars(&local_228,(wchar_t *)local_240.Data.AllocatorInstance.Data,iVar10);
        FVar8.Data = local_240.Data.AllocatorInstance.Data;
      }
      else {
        bVar13 = false;
        iVar10 = 0;
        do {
          if (bVar13) goto LAB_141aabe03;
          local_260 = (HKEY)0x0;
          uVar12 = 0x100;
          if (iVar10 == 0) {
            uVar12 = 0x200;
          }
          LVar2 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                                L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",0,
                                uVar12 | 0x20019,&local_260);
          if (LVar2 == 0) {
            local_268[0] = 0;
            local_258 = 0;
            LVar2 = RegQueryValueExW(local_260,L"ReleaseId",(LPDWORD)0x0,&local_258,(LPBYTE)0x0,
                                     local_268);
            if ((LVar2 == 0) && (local_268[0] != 0)) {
              if ((local_258 == 1) || (local_258 == 2)) {
LAB_141aabd57:
                pwVar6 = operator_new__((ulonglong)local_268[0]);
                LVar2 = RegQueryValueExW(local_260,L"ReleaseId",(LPDWORD)0x0,(LPDWORD)0x0,
                                         (LPBYTE)pwVar6,local_268);
                if (LVar2 == 0) {
                  pFVar4 = FString::ConstructFromPtrSize(&local_1e0,pwVar6,(local_268[0] >> 1) - 1);
                  if (&local_1c0 != pFVar4) {
                    if (FVar8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar8.Data);
                    }
                    FVar8.Data = (pFVar4->Data).AllocatorInstance.Data;
                    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (pFVar4->Data).ArrayNum = 0;
                    (pFVar4->Data).ArrayMax = 0;
                  }
                  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                  }
                  bVar13 = true;
                }
                operator_delete__(pwVar6);
              }
              else if (local_258 == 4) {
                LVar2 = RegQueryValueExW(local_260,L"ReleaseId",(LPDWORD)0x0,(LPDWORD)0x0,
                                         (LPBYTE)&local_254,local_268);
                if (LVar2 == 0) {
                  FString::PrintfImpl(&local_218,L"%u");
                  if (FVar8.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar8.Data);
                  }
                  FVar8.Data = local_218.Data.AllocatorInstance.Data;
                  bVar13 = true;
                  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_218.Data.ArrayNum = 0;
                  local_218.Data.ArrayMax = 0;
                }
              }
              else {
                if (local_258 == 7) goto LAB_141aabd57;
                if ((local_258 == 0xb) &&
                   (LVar2 = RegQueryValueExW(local_260,L"ReleaseId",(LPDWORD)0x0,(LPDWORD)0x0,
                                             local_208,local_268), LVar2 == 0)) {
                  FString::PrintfImpl(&local_240,L"%lld");
                  if (FVar8.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar8.Data);
                  }
                  FVar8.Data = local_240.Data.AllocatorInstance.Data;
                  bVar13 = true;
                  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_240.Data.ArrayNum = 0;
                  local_240.Data.ArrayMax = 0;
                }
              }
            }
            RegCloseKey(local_260);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 2);
        if (bVar13) {
LAB_141aabe03:
          FString::PrintfImpl(&local_240,L" (Release %s)");
          iVar10 = local_240.Data.ArrayNum + -1;
          if (local_240.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          FString::AppendChars(&local_228,(wchar_t *)local_240.Data.AllocatorInstance.Data,iVar10);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.Data.ArrayNum = 0;
      local_200.Data.ArrayMax = 0;
      bVar13 = FWindowsPlatformMisc::QueryRegKey
                         ((HKEY__ *)&DAT_ffffffff80000002,
                          L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",L"UBR",&local_200);
      if (!bVar13) {
        FString::operator=(&local_200,L"UNKNOWN");
      }
      FString::PrintfImpl(&local_240,L" [%u.%u.%u.%s]");
      iVar10 = local_240.Data.ArrayNum + -1;
      if (local_240.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      FString::AppendChars(&local_228,(wchar_t *)local_240.Data.AllocatorInstance.Data,iVar10);
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      param_3 = local_1e8;
      param_1 = local_1f0;
      param_4 = local_22c;
      param_2 = local_230;
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
        param_3 = local_1e8;
        param_1 = local_1f0;
        param_4 = local_22c;
        param_2 = local_230;
      }
    }
    else {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 1;
  }
LAB_141aabfec:
  if (5 < local_178.dwMajorVersion) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    pFVar5 = GetProcAddress(hModule,"GetProductInfo");
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)local_178.dwMajorVersion,(ulonglong)local_178.dwMinorVersion,0,0);
      switch(local_254) {
      case 1:
        FString::operator=(&local_250,L"Ultimate Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 2:
        FString::operator=(&local_250,L"Home Basic Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 3:
        FString::operator=(&local_250,L"Home Premium Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 4:
      case 10:
        FString::operator=(&local_250,L"Enterprise Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      default:
        goto switchD_141aac05c_caseD_5;
      case 6:
        FString::operator=(&local_250,L"Business Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 7:
        FString::operator=(&local_250,L"Standard Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 8:
        FString::operator=(&local_250,L"Datacenter Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 9:
        FString::operator=(&local_250,L"Small Business Server");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0xb:
        FString::operator=(&local_250,L"Starter Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0xc:
        FString::operator=(&local_250,L"Datacenter Edition (core installation)");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0xd:
        FString::operator=(&local_250,L"Standard Edition (core installation)");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0xe:
        FString::operator=(&local_250,L"Enterprise Edition (core installation)");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0xf:
        FString::operator=(&local_250,L"Enterprise Edition for Itanium-based Systems");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0x11:
        FString::operator=(&local_250,L"Web Server Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0x12:
        FString::operator=(&local_250,L"Cluster Server Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0x19:
        FString::operator=(&local_250,L"Small Business Server Premium Edition");
        FString::operator=(&local_250,local_178.szCSDVersion);
        break;
      case 0x30:
        FString::operator=(&local_250,L"Professional");
        FString::operator=(&local_250,local_178.szCSDVersion);
      }
      goto LAB_141aac2e4;
    }
    FString::operator=(&local_250,L"(type unknown)");
    uVar11 = uVar11 | 2;
  }
switchD_141aac05c_caseD_5:
  FString::operator=(&local_250,local_178.szCSDVersion);
LAB_141aac2e4:
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar7.Data = local_228.Data.AllocatorInstance.Data;
  }
  wcsncpy(param_1,(wchar_t *)FVar7.Data,(longlong)param_2 - 1);
  param_1[(longlong)param_2 + -1] = L'\0';
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar7.Data = local_250.Data.AllocatorInstance.Data;
  }
  wcsncpy(param_3,(wchar_t *)FVar7.Data,(longlong)param_4 - 1);
  param_3[(longlong)param_4 + -1] = L'\0';
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return uVar11;
}

// GetProcessModules @ 141aad740

HINSTANCE__ ** __cdecl GetProcessModules(void *param_1)

{
  bool bVar1;
  HANDLE pvVar2;
  HINSTANCE__ **ppHVar3;
  uint uVar4;
  ulong local_res10 [2];
  ulong local_res18 [4];
  
  pvVar2 = GetCurrentProcess();
  FWindowsPlatformStackWalk::InitStackWalkingInternal(pvVar2,false);
  local_res10[0] = 0;
  bVar1 = (*FEnumProcessModules)(GProcessHandle,(HINSTANCE__ **)0x0,0,local_res10);
  uVar4 = local_res10[0] >> 3;
  if (!bVar1) {
    uVar4 = 0;
  }
  uVar4 = uVar4 * 8;
  ppHVar3 = FMemory::Malloc((ulonglong)uVar4 + 8,0);
  local_res18[0] = 0;
  bVar1 = (*FEnumProcessModules)(param_1,ppHVar3,uVar4,local_res18);
  if (bVar1) {
    if (local_res18[0] <= uVar4) {
      ppHVar3[local_res18[0] >> 3] = (HINSTANCE__ *)0x0;
      return ppHVar3;
    }
  }
  else {
    FMemory::Free(ppHVar3);
  }
  return (HINSTANCE__ **)0x0;
}

// GetRemoteStorage @ 141aad920

FString * __cdecl GetRemoteStorage(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  FString local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  uVar7 = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,CrashReporterSettings,L"RemoteStorage",&local_28,&GEditorPerProjectIni);
  if (local_28.ArrayNum < 1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  }
  else {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    uVar8 = uVar7;
    do {
      uVar6 = (uint)uVar7;
      if (0 < (int)uVar6) {
        FString::AppendChar(&local_38,L';');
      }
      FString::AppendChars(&local_38,L"SRV*",4);
      iVar1 = (param_1->Data).ArrayNum;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      FString::AppendChars(&local_38,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar9);
      FString::AppendChar(&local_38,L'*');
      uVar4 = 0;
      if ((int)uVar6 < local_28.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
      }
      uVar4 = *(int *)(local_28.AllocatorInstance.Data + uVar8 + 8) - 1;
      if (*(int *)(local_28.AllocatorInstance.Data + uVar8 + 8) == 0) {
        uVar4 = 0;
      }
      FString::AppendChars(&local_38,*(wchar_t **)(local_28.AllocatorInstance.Data + uVar8),uVar4);
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x10;
    } while ((int)(uVar6 + 1) < local_28.ArrayNum);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSymbolSearchPath @ 141aae430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl GetSymbolSearchPath(FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  DWORD DVar6;
  FString *pFVar7;
  HMODULE hModule;
  uint uVar8;
  undefined1 auStackY_2c8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_288;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar7 = FWindowsPlatformStackWalk::GetDownstreamStorage(&local_258);
  GetRemoteStorage(__return_storage_ptr__,pFVar7);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    memset(local_238,0,0x208);
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    DVar4 = GetModuleFileNameW(hModule,local_238,0x104);
    if (DVar4 != 0) {
      FString::FString(&local_268,local_238);
      pFVar7 = FPaths::GetPath(&local_248,&local_268);
      if (__return_storage_ptr__ != pFVar7) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      FString::AppendChars(__return_storage_ptr__,";",1);
      local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DVar6 = 0x80;
      local_278.ArrayNum = 0;
      local_278.ArrayMax = 0;
      DVar4 = 0x80;
      do {
        if (local_278.ArrayNum < (int)DVar4) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,DVar4 - local_278.ArrayNum,&local_278.AllocatorInstance,&local_278.ArrayNum
                     ,&local_278.ArrayMax);
        }
        else {
          if ((int)DVar4 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)DVar4);
          }
          if ((int)DVar4 < local_278.ArrayNum) {
            uVar8 = local_278.ArrayNum - DVar4;
            if (((int)(uVar8 | DVar4) < 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar7 = (FString *)(*pcVar2)();
              return pFVar7;
            }
            if (uVar8 != 0) {
              iVar5 = (local_278.ArrayNum - uVar8) - DVar4;
              if (iVar5 != 0) {
                memmove(local_278.AllocatorInstance.Data + (longlong)(int)DVar4 * 2,
                        local_278.AllocatorInstance.Data + (longlong)(int)DVar4 * 2 +
                        (longlong)(int)uVar8 * 2,(longlong)iVar5 * 2);
              }
              local_278.ArrayNum = local_278.ArrayNum - uVar8;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,&local_278.AllocatorInstance,local_278.ArrayNum,&local_278.ArrayMax);
            }
          }
        }
        DVar4 = GetEnvironmentVariableW
                          (L"_NT_SYMBOL_PATH",(LPWSTR)local_278.AllocatorInstance.Data,
                           local_278.ArrayNum);
        if (DVar4 == 0) {
          FString::Reset((FString *)&local_278,0);
          goto LAB_141aae6a1;
        }
      } while ((uint)local_278.ArrayNum <= DVar4);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNum(&local_278,DVar4 + 1,Default);
LAB_141aae6a1:
      if (1 < local_278.ArrayNum) {
        iVar5 = local_278.ArrayNum - 1;
        if (local_278.ArrayNum == 0) {
          iVar5 = 0;
        }
        FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_278.AllocatorInstance.Data,iVar5);
        FString::AppendChars(__return_storage_ptr__,";",1);
      }
      local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ArrayNum = 0;
      local_288.ArrayMax = 0;
      DVar4 = 0;
      do {
        if ((int)DVar4 < (int)DVar6) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,DVar6 - DVar4,&local_288.AllocatorInstance,&local_288.ArrayNum,
                     &local_288.ArrayMax);
LAB_141aae7d1:
          DVar4 = local_288.ArrayNum;
        }
        else {
          if ((int)DVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)DVar6);
          }
          if ((int)DVar6 < (int)DVar4) {
            uVar8 = DVar4 - DVar6;
            if ((int)(DVar6 | uVar8) < 0) {
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pFVar7 = (FString *)(*pcVar2)();
                return pFVar7;
              }
              DVar4 = local_288.ArrayNum;
            }
            if (uVar8 != 0) {
              iVar5 = (DVar4 - uVar8) - DVar6;
              if (iVar5 != 0) {
                memmove(local_288.AllocatorInstance.Data + (longlong)(int)DVar6 * 2,
                        local_288.AllocatorInstance.Data + (longlong)(int)DVar6 * 2 +
                        (longlong)(int)uVar8 * 2,(longlong)iVar5 * 2);
                DVar4 = local_288.ArrayNum;
              }
              local_288.ArrayNum = DVar4 - uVar8;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,&local_288.AllocatorInstance,DVar4 - uVar8,&local_288.ArrayMax);
              goto LAB_141aae7d1;
            }
          }
        }
        DVar6 = GetCurrentDirectoryW(DVar4,(LPWSTR)local_288.AllocatorInstance.Data);
        if (DVar6 == 0) {
          FString::Reset((FString *)&local_288,0);
          goto LAB_141aae816;
        }
        DVar4 = local_288.ArrayNum;
      } while ((uint)local_288.ArrayNum <= DVar6);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNum(&local_288,DVar6 + 1,Default);
LAB_141aae816:
      iVar5 = local_288.ArrayNum + -1;
      if (local_288.ArrayNum == 0) {
        iVar5 = 0;
      }
      FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_288.AllocatorInstance.Data,iVar5)
      ;
      if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.AllocatorInstance.Data);
      }
      FString::AppendChars(__return_storage_ptr__,";",1);
      if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetVideoDriverDetails @ 141aaf680

void __cdecl GetVideoDriverDetails(FString *param_1,FGPUDriverInfo *param_2)

{
  FString *this;
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  LSTATUS LVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  wchar_t *pwVar11;
  DWORD local_res8 [2];
  FGPUDriverInfo *local_res10;
  DWORD local_res18 [2];
  BYTE local_res20 [8];
  HKEY local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  BYTE local_d0 [8];
  FGPUDriverInfo local_c8;
  FString local_60 [2];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res10 = param_2;
  bVar3 = FWindowsPlatformMisc::QueryRegKey
                    ((HKEY__ *)&DAT_ffffffff80000002,pwVar11,L"Device Description",
                     &param_2->DeviceDescription);
  if (!bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FWindowsPlatformMisc::QueryRegKey
                      ((HKEY__ *)&DAT_ffffffff80000002,pwVar11,L"DriverDesc",
                       &param_2->DeviceDescription);
    if (!bVar3) {
      FString::ConcatFC(&local_120,param_1,L"\\Settings");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar8.Data = local_120.Data.AllocatorInstance.Data;
      }
      bVar3 = FWindowsPlatformMisc::QueryRegKey
                        ((HKEY__ *)&DAT_ffffffff80000002,(wchar_t *)FVar8.Data,L"Device Description"
                         ,&param_2->DeviceDescription);
      if (!bVar3) {
        local_c8.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.VendorId = 0;
        local_c8._4_4_ = 0;
        local_c8.DeviceDescription.Data.ArrayNum = 0;
        local_c8.DeviceDescription.Data.ArrayMax = 0;
        local_c8.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.ProviderName.Data.ArrayNum = 0;
        local_c8.ProviderName.Data.ArrayMax = 0;
        local_c8.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.InternalDriverVersion.Data.ArrayNum = 0;
        local_c8.InternalDriverVersion.Data.ArrayMax = 0;
        local_c8.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.UserDriverVersion.Data.ArrayNum = 0;
        local_c8.UserDriverVersion.Data.ArrayMax = 0;
        local_c8.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.DriverDate.Data.ArrayNum = 0;
        local_c8.DriverDate.Data.ArrayMax = 0;
        local_c8.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.RHIName.Data.ArrayNum = 0;
        local_c8.RHIName.Data.ArrayMax = 0;
        FGPUDriverInfo::operator=(param_2,&local_c8);
        if (local_c8.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.RHIName.Data.AllocatorInstance.Data);
        }
        if (local_c8.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.DriverDate.Data.AllocatorInstance.Data);
        }
        if (local_c8.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_c8.UserDriverVersion.Data.AllocatorInstance.Data);
        }
        if (local_c8.InternalDriverVersion.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.InternalDriverVersion.Data.AllocatorInstance.Data);
        }
        if (local_c8.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.ProviderName.Data.AllocatorInstance.Data);
        }
        if (local_c8.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_c8.DeviceDescription.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
        return;
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::QueryRegKey
            ((HKEY__ *)&DAT_ffffffff80000002,pwVar11,L"ProviderName",&param_2->ProviderName);
  iVar10 = 0;
  if (1 < (param_2->ProviderName).Data.ArrayNum) {
    iVar4 = FString::Find(&param_2->ProviderName,L"NVIDIA",6,IgnoreCase,FromStart,-1);
    if (iVar4 == -1) {
      iVar4 = FString::Find(&param_2->ProviderName,L"Advanced Micro Devices",0x16,IgnoreCase,
                            FromStart,-1);
      if (iVar4 == -1) {
        iVar4 = FString::Find(&param_2->ProviderName,L"Intel",5,IgnoreCase,FromStart,-1);
        if (iVar4 == -1) {
          iVar4 = FString::Find(&param_2->ProviderName,L"Qualcomm",8,IgnoreCase,FromStart,-1);
          if (iVar4 != -1) {
            param_2->VendorId = 0x4d4f4351;
          }
        }
        else {
          param_2->VendorId = 0x8086;
        }
      }
      else {
        param_2->VendorId = 0x1002;
      }
    }
    else {
      param_2->VendorId = 0x10de;
    }
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::QueryRegKey
            ((HKEY__ *)&DAT_ffffffff80000002,pwVar11,L"DriverVersion",
             &param_2->InternalDriverVersion);
  iVar1 = (param_2->InternalDriverVersion).Data.ArrayNum;
  this = &param_2->UserDriverVersion;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  FString::AssignRange
            (this,(wchar_t *)(param_2->InternalDriverVersion).Data.AllocatorInstance.Data,iVar4);
  if (param_2->VendorId == 0x10de) {
    pFVar6 = FGPUDriverInfo::GetNVIDIAUnifiedVersion(&local_120,&param_2->InternalDriverVersion);
    if (this != pFVar6) {
      pFVar2 = (this->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->UserDriverVersion).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (param_2->UserDriverVersion).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  else if (param_2->VendorId == 0x1002) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FWindowsPlatformMisc::QueryRegKey
                      ((HKEY__ *)&DAT_ffffffff80000002,pwVar11,L"Catalyst_Version",this);
    if (bVar3) {
      pFVar6 = FString::FString(&local_f0,L"Catalyst ");
      FString::ConcatFF(&local_120,pFVar6,this);
      FString::operator=(this,&local_120);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = false;
    iVar4 = iVar10;
    do {
      if (bVar3) goto LAB_141aafcfb;
      local_128 = (HKEY)0x0;
      uVar9 = 0x100;
      if (iVar4 == 0) {
        uVar9 = 0x200;
      }
      LVar5 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,pwVar11,0,uVar9 | 0x20019,&local_128);
      if (LVar5 == 0) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareEdition",(LPDWORD)0x0,local_res18,
                                 (LPBYTE)0x0,local_res8);
        if ((LVar5 == 0) && (local_res8[0] != 0)) {
          if ((local_res18[0] == 1) || (local_res18[0] == 2)) {
LAB_141aafc3b:
            pwVar7 = operator_new__((ulonglong)local_res8[0]);
            LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareEdition",(LPDWORD)0x0,(LPDWORD)0x0,
                                     (LPBYTE)pwVar7,local_res8);
            if (LVar5 == 0) {
              pFVar6 = FString::ConstructFromPtrSize(local_60,pwVar7,(local_res8[0] >> 1) - 1);
              if (&local_100 != pFVar6) {
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
                local_100.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
                (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_100.Data.ArrayNum = (pFVar6->Data).ArrayNum;
                local_100.Data.ArrayMax = (pFVar6->Data).ArrayMax;
                (pFVar6->Data).ArrayNum = 0;
                (pFVar6->Data).ArrayMax = 0;
              }
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
              bVar3 = true;
            }
            operator_delete__(pwVar7);
          }
          else if (local_res18[0] == 4) {
            LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareEdition",(LPDWORD)0x0,(LPDWORD)0x0,
                                     local_res20,local_res8);
            if (LVar5 == 0) {
              FString::PrintfImpl(&local_120,L"%u");
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              bVar3 = true;
              local_100.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
              local_100.Data.ArrayNum = local_120.Data.ArrayNum;
              local_100.Data.ArrayMax = local_120.Data.ArrayMax;
              local_120.Data.ArrayNum = 0;
              local_120.Data.ArrayMax = 0;
              local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
          }
          else {
            if (local_res18[0] == 7) goto LAB_141aafc3b;
            if ((local_res18[0] == 0xb) &&
               (LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareEdition",(LPDWORD)0x0,
                                         (LPDWORD)0x0,local_d0,local_res8), LVar5 == 0)) {
              FString::PrintfImpl(&local_f0,L"%lld");
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              bVar3 = true;
              local_100.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
              local_100.Data.ArrayNum = local_f0.Data.ArrayNum;
              local_100.Data.ArrayMax = local_f0.Data.ArrayMax;
              local_f0.Data.ArrayNum = 0;
              local_f0.Data.ArrayMax = 0;
              local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
          }
        }
        RegCloseKey(local_128);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    if (bVar3) {
LAB_141aafcfb:
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = false;
      do {
        if (bVar3) goto LAB_141aaff9b;
        local_128 = (HKEY)0x0;
        uVar9 = 0x100;
        if (iVar10 == 0) {
          uVar9 = 0x200;
        }
        LVar5 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,pwVar11,0,uVar9 | 0x20019,&local_128);
        if (LVar5 == 0) {
          local_res8[0] = 0;
          local_res18[0] = 0;
          LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareVersion",(LPDWORD)0x0,local_res18,
                                   (LPBYTE)0x0,local_res8);
          if ((LVar5 == 0) && (local_res8[0] != 0)) {
            if ((local_res18[0] == 1) || (local_res18[0] == 2)) {
LAB_141aafedb:
              pwVar7 = operator_new__((ulonglong)local_res8[0]);
              LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareVersion",(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPBYTE)pwVar7,local_res8);
              if (LVar5 == 0) {
                pFVar6 = FString::ConstructFromPtrSize(local_60,pwVar7,(local_res8[0] >> 1) - 1);
                if (&local_110 != pFVar6) {
                  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_110.Data.AllocatorInstance.Data);
                  }
                  local_110.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
                  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_110.Data.ArrayNum = (pFVar6->Data).ArrayNum;
                  local_110.Data.ArrayMax = (pFVar6->Data).ArrayMax;
                  (pFVar6->Data).ArrayNum = 0;
                  (pFVar6->Data).ArrayMax = 0;
                }
                if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                }
                bVar3 = true;
              }
              operator_delete__(pwVar7);
            }
            else if (local_res18[0] == 4) {
              LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareVersion",(LPDWORD)0x0,(LPDWORD)0x0,
                                       local_res20,local_res8);
              if (LVar5 == 0) {
                FString::PrintfImpl(&local_f0,L"%u");
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
                bVar3 = true;
                local_110.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
                local_110.Data.ArrayNum = local_f0.Data.ArrayNum;
                local_110.Data.ArrayMax = local_f0.Data.ArrayMax;
                local_f0.Data.ArrayNum = 0;
                local_f0.Data.ArrayMax = 0;
                local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
            }
            else {
              if (local_res18[0] == 7) goto LAB_141aafedb;
              if ((local_res18[0] == 0xb) &&
                 (LVar5 = RegQueryValueExW(local_128,L"RadeonSoftwareVersion",(LPDWORD)0x0,
                                           (LPDWORD)0x0,local_d0,local_res8), LVar5 == 0)) {
                FString::PrintfImpl(&local_120,L"%lld");
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
                bVar3 = true;
                local_110.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
                local_110.Data.ArrayNum = local_120.Data.ArrayNum;
                local_110.Data.ArrayMax = local_120.Data.ArrayMax;
                local_120.Data.ArrayNum = 0;
                local_120.Data.ArrayMax = 0;
                local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
            }
          }
          RegCloseKey(local_128);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 2);
      if (bVar3) {
LAB_141aaff9b:
        FString::ConcatFC(&local_120,&local_100,L" ");
        FString::ConcatFF(&local_e0,&local_120,&local_110);
        if (this != &local_e0) {
          pFVar2 = (this->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (this->Data).AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
          (param_2->UserDriverVersion).Data.ArrayNum = local_e0.Data.ArrayNum;
          (param_2->UserDriverVersion).Data.ArrayMax = local_e0.Data.ArrayMax;
          local_e0.Data.ArrayNum = 0;
          local_e0.Data.ArrayMax = 0;
          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    param_2 = local_res10;
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
      param_2 = local_res10;
    }
  }
  pwVar11 = L"";
  if ((param_1->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::QueryRegKey
            ((HKEY__ *)&DAT_ffffffff80000002,pwVar11,L"DriverDate",&param_2->DriverDate);
  return;
}

// GetVideoDriverDetailsFromSetup @ 141ab00a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl GetVideoDriverDetailsFromSetup(FString *param_1,bool param_2,FGPUDriverInfo *param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  LSTATUS LVar6;
  HDEVINFO DeviceInfoSet;
  FString *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType _Str2;
  ForAnyElementType FVar9;
  DWORD MemberIndex;
  uint uVar10;
  DWORD DVar11;
  undefined1 auStackY_578 [32];
  DEVPROPTYPE local_538 [2];
  FILETIME local_530;
  FString local_528;
  DWORD local_518 [2];
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  BYTE local_4d0 [8];
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  BYTE local_498 [8];
  FScriptContainerElement *local_490;
  ForAnyElementType local_488;
  undefined8 local_480;
  _SP_DEVINFO_DATA local_478;
  wchar_t local_458 [520];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_578;
  local_530 = (FILETIME)param_3;
  DeviceInfoSet = SetupDiGetClassDevsW((GUID *)&GUID_DEVCLASS_DISPLAY,(PCWSTR)0x0,(HWND)0x0,2);
  FString::FString(&local_4a8,"");
  DVar11 = 0;
  if (DeviceInfoSet == (HDEVINFO)0xffffffffffffffff) {
    if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  else {
    local_538[0] = 0;
    memset(local_458,0,0x402);
    local_478.cbSize = 0x20;
    iVar4 = SetupDiEnumDeviceInfo(DeviceInfoSet,0,&local_478);
    MemberIndex = DVar11;
    while (iVar4 != 0) {
      BVar5 = SetupDiGetDevicePropertyW
                        (DeviceInfoSet,&local_478,(DEVPROPKEY *)&DEVPKEY_Device_DriverDesc,local_538
                         ,(PBYTE)local_458,0x402,(PDWORD)0x0,0);
      if (BVar5 == 0) {
        if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
      }
      else {
        FString::FString((FString *)&local_488,local_458);
        FVar9.Data = local_488.Data;
        _Str2.Data = (FScriptContainerElement *)L"";
        if ((int)local_480 != 0) {
          _Str2.Data = local_488.Data;
        }
        if ((param_1->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        iVar4 = wcscmp(pwVar8,(wchar_t *)_Str2.Data);
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
        param_3 = (FGPUDriverInfo *)local_530;
        if (iVar4 == 0) {
          FString::operator=((FString *)((longlong)local_530 + 8),local_458);
          memset(local_458,0,0x402);
          BVar5 = SetupDiGetDevicePropertyW
                            (DeviceInfoSet,&local_478,(DEVPROPKEY *)&DEVPKEY_Device_Driver,local_538
                             ,(PBYTE)local_458,0x402,(PDWORD)0x0,0);
          if (BVar5 == 0) {
            if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
              UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
            }
          }
          else {
            FString::operator=(&local_4a8,local_458);
            memset(local_458,0,0x402);
          }
          BVar5 = SetupDiGetDevicePropertyW
                            (DeviceInfoSet,&local_478,(DEVPROPKEY *)&DEVPKEY_Device_DriverProvider,
                             local_538,(PBYTE)local_458,0x402,(PDWORD)0x0,0);
          if (BVar5 == 0) {
            if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
              UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
            }
          }
          else {
            FString::operator=((FString *)((longlong)param_3 + 0x18),local_458);
            memset(local_458,0,0x402);
          }
          BVar5 = SetupDiGetDevicePropertyW
                            (DeviceInfoSet,&local_478,(DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
                             local_538,(PBYTE)local_458,0x402,(PDWORD)0x0,0);
          if (BVar5 == 0) {
            if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
              UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
            }
          }
          else {
            FString::operator=((FString *)((longlong)param_3 + 0x28),local_458);
            memset(local_458,0,0x402);
          }
          BVar5 = SetupDiGetDevicePropertyW
                            (DeviceInfoSet,&local_478,(DEVPROPKEY *)&DEVPKEY_Device_DriverDate,
                             local_538,(PBYTE)&local_530,8,(PDWORD)0x0,0);
          if (BVar5 == 0) {
            if (((byte)LogWindows._0_1_ < 5) || (!param_2)) goto LAB_141ab04f1;
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
            SetupDiDestroyDeviceInfoList(DeviceInfoSet);
            goto LAB_141ab051d;
          }
          FileTimeToSystemTime(&local_530,(LPSYSTEMTIME)&local_488);
          FString::PrintfImpl(&local_500,L"%d-%d-%d");
          pFVar1 = (FString *)((longlong)param_3 + 0x48);
          if (pFVar1 != &local_500) {
            pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pFVar1->Data).AllocatorInstance.Data = local_500.Data.AllocatorInstance.Data;
            *(int *)((longlong)param_3 + 0x50) = local_500.Data.ArrayNum;
            *(int *)((longlong)param_3 + 0x54) = local_500.Data.ArrayMax;
            local_500.Data.ArrayNum = 0;
            local_500.Data.ArrayMax = 0;
            local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_500.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_141ab04f1;
          FMemory::Free(local_500.Data.AllocatorInstance.Data);
          SetupDiDestroyDeviceInfoList(DeviceInfoSet);
          goto LAB_141ab051d;
        }
        memset(local_458,0,0x402);
      }
      MemberIndex = MemberIndex + 1;
      iVar4 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,&local_478);
      param_3 = (FGPUDriverInfo *)local_530;
    }
    if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
LAB_141ab04f1:
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  }
LAB_141ab051d:
  if (1 < *(int *)((longlong)param_3 + 0x20)) {
    iVar4 = FString::Find((FString *)((longlong)param_3 + 0x18),L"NVIDIA",6,IgnoreCase,FromStart,-1)
    ;
    if (iVar4 == -1) {
      iVar4 = FString::Find((FString *)((longlong)param_3 + 0x18),L"Advanced Micro Devices",0x16,
                            IgnoreCase,FromStart,-1);
      if (iVar4 == -1) {
        iVar4 = FString::Find((FString *)((longlong)param_3 + 0x18),L"Intel",5,IgnoreCase,FromStart,
                              -1);
        if (iVar4 == -1) {
          iVar4 = FString::Find((FString *)((longlong)param_3 + 0x18),L"Qualcomm",8,IgnoreCase,
                                FromStart,-1);
          if (iVar4 != -1) {
            *(int *)param_3 = 0x4d4f4351;
          }
        }
        else {
          *(int *)param_3 = 0x8086;
        }
      }
      else {
        *(int *)param_3 = 0x1002;
      }
    }
    else {
      *(int *)param_3 = 0x10de;
    }
  }
  pFVar1 = (FString *)((longlong)param_3 + 0x38);
  iVar4 = *(int *)((longlong)param_3 + 0x30) + -1;
  if (*(int *)((longlong)param_3 + 0x30) == 0) {
    iVar4 = 0;
  }
  FString::AssignRange
            (pFVar1,(wchar_t *)
                    (((FString *)((longlong)param_3 + 0x28))->Data).AllocatorInstance.Data,iVar4);
  if (*(int *)param_3 == 0x10de) {
    pFVar7 = FGPUDriverInfo::GetNVIDIAUnifiedVersion
                       ((FString *)&local_488,(FString *)((longlong)param_3 + 0x28));
    local_4c8.Data.AllocatorInstance.Data = local_488.Data;
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)param_3 + 0x40) = (pFVar7->Data).ArrayNum;
      *(int *)((longlong)param_3 + 0x44) = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      local_4c8.Data.AllocatorInstance.Data = local_488.Data;
    }
  }
  else {
    if ((*(int *)param_3 != 0x1002) || (local_4a8.Data.ArrayNum < 2)) goto LAB_141ab0ab4;
    FString::PrintfImpl(&local_4c8,L"SYSTEM\\CurrentControlSet\\Control\\Class\\%s");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_4c8.Data.ArrayNum != 0) {
      FVar9.Data = local_4c8.Data.AllocatorInstance.Data;
    }
    bVar3 = FWindowsPlatformMisc::QueryRegKey
                      ((HKEY__ *)&DAT_ffffffff80000002,(wchar_t *)FVar9.Data,L"Catalyst_Version",
                       pFVar1);
    if (bVar3) {
      pFVar7 = FString::FString(&local_510,L"Catalyst ");
      FString::ConcatFF(&local_4f0,pFVar7,pFVar1);
      if (pFVar1 != &local_4f0) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_4f0.Data.AllocatorInstance.Data;
        *(int *)((longlong)param_3 + 0x40) = local_4f0.Data.ArrayNum;
        *(int *)((longlong)param_3 + 0x44) = local_4f0.Data.ArrayMax;
        local_4f0.Data.ArrayNum = 0;
        local_4f0.Data.ArrayMax = 0;
        local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
      }
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
    }
    local_488.Data = (FScriptContainerElement *)0x0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_4c8.Data.ArrayNum != 0) {
      FVar9.Data = local_4c8.Data.AllocatorInstance.Data;
    }
    local_480._0_2_ = 0;
    local_480._2_2_ = 0;
    local_480._4_2_ = 0;
    local_480._6_2_ = 0;
    bVar3 = FWindowsPlatformMisc::QueryRegKey
                      ((HKEY__ *)&DAT_ffffffff80000002,(wchar_t *)FVar9.Data,
                       L"RadeonSoftwareEdition",(FString *)&local_488);
    if (bVar3) {
      local_528.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_4c8.Data.ArrayNum != 0) {
        FVar9.Data = local_4c8.Data.AllocatorInstance.Data;
      }
      bVar3 = false;
      local_528.Data.ArrayNum = 0;
      local_528.Data.ArrayMax = 0;
      local_490 = FVar9.Data;
      do {
        if (bVar3) goto LAB_141ab0a0e;
        local_530.dwLowDateTime = 0;
        local_530.dwHighDateTime = 0;
        uVar10 = 0x100;
        if (DVar11 == 0) {
          uVar10 = 0x200;
        }
        LVar6 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,(LPCWSTR)FVar9.Data,0,uVar10 | 0x20019,
                              (PHKEY)&local_530);
        if (LVar6 == 0) {
          local_538[0] = 0;
          local_518[0] = 0;
          LVar6 = RegQueryValueExW((HKEY)local_530,L"RadeonSoftwareVersion",(LPDWORD)0x0,local_518,
                                   (LPBYTE)0x0,local_538);
          if ((LVar6 == 0) && (local_538[0] != 0)) {
            if ((local_518[0] == 1) || (local_518[0] == 2)) {
LAB_141ab094d:
              pwVar8 = operator_new__((ulonglong)local_538[0]);
              LVar6 = RegQueryValueExW((HKEY)local_530,L"RadeonSoftwareVersion",(LPDWORD)0x0,
                                       (LPDWORD)0x0,(LPBYTE)pwVar8,local_538);
              if (LVar6 == 0) {
                pFVar7 = FString::ConstructFromPtrSize
                                   ((FString *)&local_478,pwVar8,(local_538[0] >> 1) - 1);
                if (&local_528 != pFVar7) {
                  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_528.Data.AllocatorInstance.Data);
                  }
                  local_528.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
                  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_528.Data.ArrayNum = (pFVar7->Data).ArrayNum;
                  local_528.Data.ArrayMax = (pFVar7->Data).ArrayMax;
                  (pFVar7->Data).ArrayNum = 0;
                  (pFVar7->Data).ArrayMax = 0;
                }
                if ((void *)CONCAT44(local_478.ClassGuid.Data1,local_478.cbSize) != (void *)0x0) {
                  FMemory::Free((void *)CONCAT44(local_478.ClassGuid.Data1,local_478.cbSize));
                }
                bVar3 = true;
              }
              operator_delete__(pwVar8);
              FVar9.Data = local_490;
            }
            else if (local_518[0] == 4) {
              LVar6 = RegQueryValueExW((HKEY)local_530,L"RadeonSoftwareVersion",(LPDWORD)0x0,
                                       (LPDWORD)0x0,local_4d0,local_538);
              if (LVar6 == 0) {
                FString::PrintfImpl(&local_510,L"%u");
                if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_528.Data.AllocatorInstance.Data);
                }
                bVar3 = true;
                local_528.Data.AllocatorInstance.Data = local_510.Data.AllocatorInstance.Data;
                local_528.Data.ArrayNum = local_510.Data.ArrayNum;
                local_528.Data.ArrayMax = local_510.Data.ArrayMax;
                local_510.Data.ArrayNum = 0;
                local_510.Data.ArrayMax = 0;
                local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
            }
            else {
              if (local_518[0] == 7) goto LAB_141ab094d;
              if ((local_518[0] == 0xb) &&
                 (LVar6 = RegQueryValueExW((HKEY)local_530,L"RadeonSoftwareVersion",(LPDWORD)0x0,
                                           (LPDWORD)0x0,local_498,local_538), LVar6 == 0)) {
                FString::PrintfImpl(&local_4b8,L"%lld");
                if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_528.Data.AllocatorInstance.Data);
                }
                bVar3 = true;
                local_528.Data.AllocatorInstance.Data = local_4b8.Data.AllocatorInstance.Data;
                local_528.Data.ArrayNum = local_4b8.Data.ArrayNum;
                local_528.Data.ArrayMax = local_4b8.Data.ArrayMax;
                local_4b8.Data.ArrayNum = 0;
                local_4b8.Data.ArrayMax = 0;
                local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
            }
          }
          RegCloseKey((HKEY)local_530);
        }
        DVar11 = DVar11 + 1;
      } while ((int)DVar11 < 2);
      if (bVar3) {
LAB_141ab0a0e:
        FString::ConcatFC(&local_510,(FString *)&local_488,L" ");
        FString::ConcatFF(&local_4e0,&local_510,&local_528);
        if (pFVar1 != &local_4e0) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_4e0.Data.AllocatorInstance.Data;
          *(int *)((longlong)param_3 + 0x40) = local_4e0.Data.ArrayNum;
          *(int *)((longlong)param_3 + 0x44) = local_4e0.Data.ArrayMax;
          local_4e0.Data.ArrayNum = 0;
          local_4e0.Data.ArrayMax = 0;
          local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
        }
        if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_510.Data.AllocatorInstance.Data);
        }
      }
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
    }
    if (local_488.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data);
    }
  }
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
LAB_141ab0ab4:
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetVirtualAllocPageStatus @ 141ab0b00

FVirtualAllocPageStatus * __cdecl GetVirtualAllocPageStatus(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FVirtualAllocPageStatus::FVirtualAllocPageStatus(&PageBits);
      atexit(`GetVirtualAllocPageStatus'::__l2::_dynamic_atexit_destructor_for__PageBits__);
      _Init_thread_footer(&_TSS0);
      return &PageBits;
    }
  }
  return &PageBits;
}

// GuardedDumpAdditionalContext @ 141ab0c00

void __cdecl `anonymous_namespace'::GuardedDumpAdditionalContext(wchar_t *param_1)

{
  FGenericCrashContext::DumpAdditionalContext(param_1);
  return;
}

// HandleGameExplorerIntegration @ 141ab13c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl HandleGameExplorerIntegration(void)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  uint uVar4;
  HRESULT HVar5;
  int iVar6;
  DWORDLONG dwlConditionMask;
  BSTR bstrString;
  wchar_t *pwVar7;
  BSTR bstrString_00;
  FString *pFVar8;
  IFileManager *pIVar9;
  FText *pFVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_728 [32];
  FString local_6f8;
  longlong *local_6e8;
  longlong *local_6e0;
  _GUID local_6d8;
  int local_6c8 [2];
  longlong *local_6c0;
  longlong *local_6b8;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  _GUID local_680;
  _OSVERSIONINFOEXW local_668;
  wchar_t local_458 [264];
  OLECHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_728;
  local_668.dwOSVersionInfoSize = 0x11c;
  local_668.dwMajorVersion = 0;
  local_668.dwMinorVersion = 0;
  local_668.dwBuildNumber = 0;
  local_668.dwPlatformId = 0;
  memset(local_668.szCSDVersion,0,0x100);
  local_668.wServicePackMajor = 0;
  local_668.wServicePackMinor = 0;
  local_668.wSuiteMask = 0;
  local_668.wProductType = '\x01';
  local_668.wReserved = '\0';
  dwlConditionMask = VerSetConditionMask(0,0x80,1);
  BVar3 = VerifyVersionInfoW(&local_668,0x80,dwlConditionMask);
  if (BVar3 == 0) {
    return true;
  }
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&local_668,0x103);
  uVar4 = CoInitializeEx((LPVOID)0x0,2);
  if (1 < uVar4) {
    return false;
  }
  HVar5 = CoCreateInstance((IID *)&_GUID_9a5ea990_3034_4d6f_9128_01f3c61022bc,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_e7b2fb72_d728_49b3_a5f2_18ebf5f1349e,&local_6e8);
  local_6c8[0] = 1;
  bstrString = SysAllocString((OLECHAR *)&local_668);
  if ((-1 < HVar5) && (local_6e8 != (longlong *)0x0)) {
    (**(code **)(*local_6e8 + 0x30))(local_6e8,bstrString,local_6c8);
  }
  pwVar7 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar7,L"installge");
  if (bVar2) {
    if ((local_6c8[0] != 0) && (local_6e8 != (longlong *)0x0)) {
      pwVar7 = FWindowsPlatformProcess::BaseDir();
      bstrString_00 = SysAllocString(pwVar7);
      local_680 = GEGuid;
      pcVar1 = *(code **)(*local_6e8 + 0x18);
      pwVar7 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar7,L"allusers");
      iVar6 = (*pcVar1)(local_6e8,bstrString,bstrString_00,bVar2 + '\x02');
      if (iVar6 < 0) {
LAB_141ab19b5:
        pwVar12 = L"GameExplorer installation was a failure, quitting now.";
        pwVar7 = L"GameExplorerInstallationFailed";
      }
      else {
        SHGetFolderPathW(0,0x801c,0,0);
        StringFromGUID2((GUID *)&GEGuid,local_248,0x103);
        pFVar8 = FString::FString((FString *)&local_6d8,local_458);
        FString::ConcatFC(&local_6f8,pFVar8,L"\\Microsoft\\Windows\\GameExplorer\\");
        FString::ConcatFC(&local_690,&local_6f8,local_248);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        if ((void *)local_6d8._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_6d8._0_8_);
        }
        FString::ConcatFC(&local_6b0,&local_690,L"\\PlayTasks");
        FString::ConcatFC(&local_6a0,&local_690,L"\\SupportTasks");
        pIVar9 = IFileManager::Get();
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6b0.Data.ArrayNum != 0) {
          FVar11.Data = local_6b0.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar9 + 0x60))(pIVar9,FVar11.Data,1);
        pIVar9 = IFileManager::Get();
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6a0.Data.ArrayNum != 0) {
          FVar11.Data = local_6a0.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar9 + 0x60))(pIVar9,FVar11.Data,1);
        HVar5 = CoCreateInstance((IID *)&CLSID_ShellLink,(LPUNKNOWN)0x0,1,(IID *)&IID_IShellLinkW,
                                 &local_6c0);
        (**(code **)*local_6c0)(local_6c0,&IID_IPersistFile,&local_6e0);
        (**(code **)(*local_6c0 + 0xa0))(local_6c0,&local_668);
        (**(code **)(*local_6c0 + 0x58))(local_6c0,L"");
        (**(code **)(*local_6c0 + 0x38))(local_6c0,L"Play");
        pIVar9 = IFileManager::Get();
        pcVar1 = *(code **)((longlong)*pIVar9 + 0x60);
        FString::ConcatFC(&local_6f8,&local_6b0,L"\\0");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6f8.Data.ArrayNum != 0) {
          FVar11.Data = local_6f8.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(pIVar9,FVar11.Data,1);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        pcVar1 = *(code **)(*local_6e0 + 0x30);
        FString::ConcatFC(&local_6f8,&local_6b0,L"\\0\\Play.lnk");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6f8.Data.ArrayNum != 0) {
          FVar11.Data = local_6f8.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(local_6e0,FVar11.Data,1);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*local_6c0 + 0x58))(local_6c0,L"editor");
        (**(code **)(*local_6c0 + 0x38))(local_6c0,L"Editor");
        pIVar9 = IFileManager::Get();
        pcVar1 = *(code **)((longlong)*pIVar9 + 0x60);
        FString::ConcatFC(&local_6f8,&local_6b0,L"\\1");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6f8.Data.ArrayNum != 0) {
          FVar11.Data = local_6f8.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(pIVar9,FVar11.Data,1);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        pcVar1 = *(code **)(*local_6e0 + 0x30);
        FString::ConcatFC(&local_6f8,&local_6b0,L"\\1\\Editor.lnk");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6f8.Data.ArrayNum != 0) {
          FVar11.Data = local_6f8.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(local_6e0,FVar11.Data,1);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*local_6e0 + 0x10))();
        (**(code **)(*local_6c0 + 0x10))();
        CoCreateInstance((IID *)&CLSID_InternetShortcut,(LPUNKNOWN)0x0,1,
                         (IID *)&IID_IUniformResourceLocatorW,&local_6b8);
        (**(code **)*local_6b8)(local_6b8,&IID_IPersistFile,&local_6e0);
        (**(code **)(*local_6b8 + 0x18))(local_6b8,L"http://www.unrealtournament3.com/",0);
        pIVar9 = IFileManager::Get();
        pcVar1 = *(code **)((longlong)*pIVar9 + 0x60);
        FString::ConcatFC(&local_6f8,&local_6a0,L"\\0");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6f8.Data.ArrayNum != 0) {
          FVar11.Data = local_6f8.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(pIVar9,FVar11.Data,1);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        pcVar1 = *(code **)(*local_6e0 + 0x30);
        FString::ConcatFC(&local_6f8,&local_6a0,L"\\0\\UT3.url");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_6f8.Data.ArrayNum != 0) {
          FVar11.Data = local_6f8.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(local_6e0,FVar11.Data,1);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*local_6e0 + 0x10))();
        (**(code **)(*local_6b8 + 0x10))();
        if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
        }
        if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
        }
        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_690.Data.AllocatorInstance.Data);
        }
        if (HVar5 < 0) goto LAB_141ab19b5;
        pwVar12 = L"GameExplorer installation was successful, quitting now.";
        pwVar7 = L"GameExplorerInstallationSuccessful";
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_6d8,L"WindowsPlatform",pwVar7,pwVar12);
      FMessageDialog::Open(Ok,pFVar10);
      if ((longlong *)local_6d8._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_6d8._0_8_ + 0x10))();
      }
      SysFreeString(bstrString_00);
      goto LAB_141ab1aba;
    }
    pwVar12 = 
    L"GameExplorer installation failed because you don\'t have access (check parental control levels and that you are running XP). You should not need Admin access"
    ;
    pwVar7 = L"GameExplorerInstallationFailedDoToAccessPermissions";
  }
  else {
    pwVar7 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar7,L"uninstallge");
    if (!bVar2) {
      SysFreeString(bstrString);
      if (local_6e8 != (longlong *)0x0) {
        (**(code **)(*local_6e8 + 0x10))();
        local_6e8 = (longlong *)0x0;
      }
      CoUninitialize();
      if (local_6c8[0] == 0) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)&local_6d8,L"UnrealEd",L"Error_ParentalControls",
                             L"The current level of parental controls do not allow you to run this game."
                            );
        FMessageDialog::Open(Ok,pFVar10);
        if ((longlong *)local_6d8._0_8_ == (longlong *)0x0) {
          return false;
        }
        (**(code **)(*(longlong *)local_6d8._0_8_ + 0x10))();
        return false;
      }
      return true;
    }
    if (local_6e8 == (longlong *)0x0) {
      pwVar12 = L"GameExplorer uninstallation failed because you are probably not running Vista.";
      pwVar7 = L"GameExplorerUninstallationFailedDoToNotRunningVista";
    }
    else {
      local_6d8 = GEGuid;
      iVar6 = (**(code **)(*local_6e8 + 0x20))(local_6e8,&local_6d8);
      if (iVar6 < 0) {
        pwVar12 = L"GameExplorer uninstallation was a failure, quitting now.";
        pwVar7 = L"GameExplorerUninstallationFailed";
      }
      else {
        pwVar12 = L"GameExplorer uninstallation was successful, quitting now.";
        pwVar7 = L"GameExplorerUninstallationSuccessful";
      }
    }
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_6d8,L"WindowsPlatform",pwVar7,pwVar12);
  FMessageDialog::Open(Ok,pFVar10);
  if ((longlong *)local_6d8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_6d8._0_8_ + 0x10))();
  }
LAB_141ab1aba:
  SysFreeString(bstrString);
  if (local_6e8 != (longlong *)0x0) {
    (**(code **)(*local_6e8 + 0x10))();
    local_6e8 = (longlong *)0x0;
  }
  CoUninitialize();
  return false;
}

// IsRunningAsJob @ 141ab30f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsRunningAsJob(void)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  BOOL local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      local_res8[0] = 0;
      ProcessHandle = GetCurrentProcess();
      BVar1 = IsProcessInJob(ProcessHandle,(HANDLE)0x0,local_res8);
      if (BVar1 == 0) {
        GetLastError();
        if (2 < (byte)LogHAL._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_IsProcessInJob__1506ef348,
                     (FLogCategoryBase *)&LogHAL);
        }
        bIsJob = false;
      }
      else {
        bIsJob = local_res8[0] != 0;
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  return bIsJob;
}

// LLMAlloc @ 141ab39c0

void * __cdecl LLMAlloc(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  void *pvVar4;
  
  pvVar3 = VirtualAlloc((LPVOID)0x0,param_1,0x3000,4);
  if ((pvVar3 == (LPVOID)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Addr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                         ,0x318,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  LLMMallocTotal = LLMMallocTotal + (param_1 + 0xfff & 0xfffffffffffff000);
  return pvVar3;
}

// LLMFree @ 141ab3a40

void __cdecl LLMFree(void *param_1,ulong64 param_2)

{
  VirtualFree(param_1,0,0x8000);
  LLMMallocTotal = LLMMallocTotal - (param_2 + 0xfff & 0xfffffffffffff000);
  return;
}

// LaunchWebURL @ 141ab4080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LaunchWebURL(FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  LSTATUS LVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  FText *pFVar9;
  HINSTANCE pHVar10;
  TRefCountPtr<ITextData> TVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 uVar15;
  wchar_t *pwVar16;
  int iVar17;
  DWORD local_res18;
  undefined4 uStackX_1c;
  DWORD local_res20 [2];
  LPDWORD in_stack_ffffffffffffff00;
  undefined4 uVar19;
  ulonglong uVar18;
  uint in_stack_ffffffffffffff14;
  HKEY local_b8;
  FText local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  BYTE local_60 [8];
  FText local_58;
  FString local_48;
  
  pFVar13 = (FScriptContainerElement *)0x0;
  iVar17 = 0;
  local_res18 = 0;
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar4 = false;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  pFVar12 = pFVar13;
  do {
    if (bVar4) goto LAB_141ab435f;
    local_b8 = (HKEY)0x0;
    uVar14 = 0x100;
    if ((int)pFVar12 == 0) {
      uVar14 = 0x200;
    }
    LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"Software\\Microsoft\\Windows\\Shell\\Associations\\UrlAssociations\\http\\UserChoice"
                          ,0,uVar14 | 0x20019,&local_b8);
    if (LVar5 == 0) {
      in_stack_ffffffffffffff00 = &local_res18;
      local_res18 = 0;
      local_res20[0] = 0;
      LVar5 = RegQueryValueExW(local_b8,L"Progid",(LPDWORD)0x0,local_res20,(LPBYTE)0x0,
                               in_stack_ffffffffffffff00);
      if ((LVar5 == 0) && (local_res18 != 0)) {
        if ((local_res20[0] == 1) || (local_res20[0] == 2)) {
LAB_141ab42b1:
          pwVar16 = operator_new__((ulonglong)local_res18);
          in_stack_ffffffffffffff00 = &local_res18;
          LVar5 = RegQueryValueExW(local_b8,L"Progid",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)pwVar16,
                                   in_stack_ffffffffffffff00);
          if (LVar5 == 0) {
            pFVar8 = FString::ConstructFromPtrSize
                               ((FString *)&local_58,pwVar16,(local_res18 >> 1) - 1);
            if (&local_80 != pFVar8) {
              if ((ITextData *)local_80.Data.AllocatorInstance.Data != (ITextData *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
              local_80.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
              (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_80.Data.ArrayNum = (pFVar8->Data).ArrayNum;
              local_80.Data.ArrayMax = (pFVar8->Data).ArrayMax;
              (pFVar8->Data).ArrayNum = 0;
              (pFVar8->Data).ArrayMax = 0;
            }
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_58.TextData.Reference);
            }
            bVar4 = true;
          }
          operator_delete__(pwVar16);
        }
        else if (local_res20[0] == 4) {
          in_stack_ffffffffffffff00 = &local_res18;
          LVar5 = RegQueryValueExW(local_b8,L"Progid",(LPDWORD)0x0,(LPDWORD)0x0,local_60,
                                   in_stack_ffffffffffffff00);
          if (LVar5 == 0) {
            FString::PrintfImpl((FString *)&local_b0,L"%u");
            if ((ITextData *)local_80.Data.AllocatorInstance.Data != (ITextData *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            bVar4 = true;
            local_80.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_b0.TextData.Reference;
            local_80.Data.ArrayNum = local_b0.Flags;
            local_80.Data.ArrayMax = local_b0._12_4_;
            local_b0.Flags = 0;
            local_b0._12_4_ = 0;
            local_b0.TextData.Reference = (ITextData *)0x0;
          }
        }
        else {
          if (local_res20[0] == 7) goto LAB_141ab42b1;
          if (local_res20[0] == 0xb) {
            in_stack_ffffffffffffff00 = &local_res18;
            LVar5 = RegQueryValueExW(local_b8,L"Progid",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_a0,
                                     in_stack_ffffffffffffff00);
            if (LVar5 == 0) {
              FString::PrintfImpl(&local_70,L"%lld");
              if ((ITextData *)local_80.Data.AllocatorInstance.Data != (ITextData *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
              local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
              local_80.Data.ArrayNum = local_70.Data.ArrayNum;
              local_80.Data.ArrayMax = local_70.Data.ArrayMax;
              local_70.Data.ArrayNum = 0;
              local_70.Data.ArrayMax = 0;
              local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
          }
        }
      }
      RegCloseKey(local_b8);
    }
    uVar14 = (int)pFVar12 + 1;
    pFVar12 = (FScriptContainerElement *)(ulonglong)uVar14;
  } while ((int)uVar14 < 2);
  if (bVar4) {
LAB_141ab435f:
    FString::ConcatFC((FString *)&local_b0,&local_80,L"\\shell\\open\\command");
    TVar11.Reference = (ITextData *)L"";
    if (local_b0.Flags != 0) {
      TVar11.Reference = local_b0.TextData.Reference;
    }
    FWindowsPlatformMisc::QueryRegKey
              ((HKEY__ *)0xffffffff80000000,(wchar_t *)TVar11.Reference,(wchar_t *)0x0,&local_90);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_b0.TextData.Reference);
    }
  }
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  if (local_90.Data.ArrayNum < 2) {
    bVar4 = false;
    pFVar12 = pFVar13;
    do {
      uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
      if (bVar4) break;
      local_b8 = (HKEY)0x0;
      uVar14 = 0x100;
      if ((int)pFVar12 == 0) {
        uVar14 = 0x200;
      }
      LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000000,L"http\\shell\\open\\command",0,
                            uVar14 | 0x20019,&local_b8);
      if (LVar5 == 0) {
        in_stack_ffffffffffffff00 = &local_res18;
        local_res18 = 0;
        local_res20[0] = 0;
        LVar5 = RegQueryValueExW(local_b8,(LPCWSTR)0x0,(LPDWORD)0x0,local_res20,(LPBYTE)0x0,
                                 in_stack_ffffffffffffff00);
        if ((LVar5 == 0) && (local_res18 != 0)) {
          if ((local_res20[0] == 1) || (local_res20[0] == 2)) {
LAB_141ab4553:
            pwVar16 = operator_new__((ulonglong)local_res18);
            in_stack_ffffffffffffff00 = &local_res18;
            LVar5 = RegQueryValueExW(local_b8,(LPCWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)pwVar16
                                     ,in_stack_ffffffffffffff00);
            if (LVar5 == 0) {
              pFVar8 = FString::ConstructFromPtrSize
                                 ((FString *)&local_58,pwVar16,(local_res18 >> 1) - 1);
              if (&local_90 != pFVar8) {
                if ((ITextData *)local_90.Data.AllocatorInstance.Data != (ITextData *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
                local_90.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
                (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_90.Data.ArrayNum = (pFVar8->Data).ArrayNum;
                local_90.Data.ArrayMax = (pFVar8->Data).ArrayMax;
                (pFVar8->Data).ArrayNum = 0;
                (pFVar8->Data).ArrayMax = 0;
              }
              if (local_58.TextData.Reference != (ITextData *)0x0) {
                FMemory::Free(local_58.TextData.Reference);
              }
              bVar4 = true;
            }
            operator_delete__(pwVar16);
          }
          else if (local_res20[0] == 4) {
            in_stack_ffffffffffffff00 = &local_res18;
            LVar5 = RegQueryValueExW(local_b8,(LPCWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_60,
                                     in_stack_ffffffffffffff00);
            if (LVar5 == 0) {
              FString::PrintfImpl(&local_70,L"%u");
              if ((ITextData *)local_90.Data.AllocatorInstance.Data != (ITextData *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
              local_90.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
              local_90.Data.ArrayNum = local_70.Data.ArrayNum;
              local_90.Data.ArrayMax = local_70.Data.ArrayMax;
              local_70.Data.ArrayNum = 0;
              local_70.Data.ArrayMax = 0;
              local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
          }
          else {
            if (local_res20[0] == 7) goto LAB_141ab4553;
            if (local_res20[0] == 0xb) {
              in_stack_ffffffffffffff00 = &local_res18;
              LVar5 = RegQueryValueExW(local_b8,(LPCWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPBYTE)&local_a0,in_stack_ffffffffffffff00);
              if (LVar5 == 0) {
                FString::PrintfImpl((FString *)&local_b0,L"%lld");
                if ((ITextData *)local_90.Data.AllocatorInstance.Data != (ITextData *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
                bVar4 = true;
                local_90.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_b0.TextData.Reference;
                local_90.Data.ArrayNum = local_b0.Flags;
                local_90.Data.ArrayMax = local_b0._12_4_;
                local_b0.Flags = 0;
                local_b0._12_4_ = 0;
                local_b0.TextData.Reference = (ITextData *)0x0;
              }
            }
          }
        }
        RegCloseKey(local_b8);
      }
      uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
      uVar14 = (int)pFVar12 + 1;
      pFVar12 = (FScriptContainerElement *)(ulonglong)uVar14;
    } while ((int)uVar14 < 2);
    if (1 < local_90.Data.ArrayNum) goto LAB_141ab4602;
  }
  else {
LAB_141ab4602:
    uVar18 = CONCAT44(uVar19,0xffffffff);
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    iVar6 = FString::Find(&local_90,L"\"",1,IgnoreCase,FromStart,-1);
    if (iVar6 != -1) {
      iVar1 = iVar6 + 1;
      uVar18 = CONCAT44((int)(uVar18 >> 0x20),iVar1);
      iVar7 = FString::Find(&local_90,L"\"",1,IgnoreCase,FromStart,iVar1);
      if (iVar7 != -1) {
        pFVar8 = FString::Mid(&local_90,(FString *)&local_58,iVar1,(iVar7 - iVar6) + -1);
        if (&local_48 != pFVar8) {
          pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar17 = (pFVar8->Data).ArrayNum;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_58.TextData.Reference);
        }
        FString::RightChop(&local_90,(FString *)&local_b0,iVar7 + 1);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        local_a0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_b0.TextData.Reference;
        local_a0.Data.ArrayNum = local_b0.Flags;
        local_a0.Data.ArrayMax = local_b0._12_4_;
      }
    }
    if (1 < iVar17) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar6 = FString::ReplaceInline(&local_a0,L"%1",pwVar16,IgnoreCase);
      if (iVar6 == 0) {
        FString::ConcatCF(&local_70,L" \"",param_1);
        FString::ConcatFC((FString *)&local_b0,&local_70,L"\"");
        iVar6 = local_b0.Flags + -1;
        if (local_b0.Flags == 0) {
          iVar6 = 0;
        }
        FString::AppendChars(&local_a0,(wchar_t *)local_b0.TextData.Reference,iVar6);
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_b0.TextData.Reference);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      uVar15 = 0x6c;
      if (local_a0.Data.ArrayNum != 0) {
        uVar15 = (char)local_a0.Data.AllocatorInstance.Data;
      }
      pFVar12 = (FScriptContainerElement *)L"";
      if (iVar17 != 0) {
        pFVar12 = pFVar13;
      }
      FWindowsPlatformProcess::CreateProcInternal
                ((wchar_t *)&local_res18,(wchar_t *)pFVar12,(bool)uVar15,true,false,
                 (uint *)(uVar18 & 0xffffffffffffff00),0,
                 (wchar_t *)((ulonglong)in_stack_ffffffffffffff14 << 0x20),(void *)0x0,(void *)0x0,
                 (void *)0x0,false);
      if (CONCAT44(uStackX_1c,local_res18) != 0) {
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        goto LAB_141ab49e9;
      }
      if (param_2 != (FString *)0x0) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"Core",L"UrlFailed",L"Failed launching URL");
        pFVar8 = FText::ToString(pFVar9);
        FString::operator=(param_2,pFVar8);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
  }
  bVar4 = FString::StartsWith(param_1,L"http://",7,IgnoreCase);
  if ((bVar4) || (bVar4 = FString::StartsWith(param_1,L"https://",8,IgnoreCase), bVar4)) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pHVar10 = ShellExecuteW((HWND)0x0,L"open",pwVar16,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    if (param_2 != (FString *)0x0) {
      if ((longlong)pHVar10 < 0x21) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_b0,L"Core",L"UrlFailed",L"Failed launching URL");
        pFVar8 = FText::ToString(pFVar9);
        local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar17 = (pFVar8->Data).ArrayNum;
        pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
        local_a0.Data.ArrayNum = iVar17;
        if (iVar17 == 0) {
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          pFVar8 = &local_a0;
          bVar3 = true;
          bVar2 = true;
          bVar4 = false;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar17,0,(ForAnyElementType *)&local_a0,iVar17,&local_a0.Data.ArrayMax);
          memcpy(local_a0.Data.AllocatorInstance.Data,pFVar13,(longlong)iVar17 * 2);
          pFVar8 = &local_a0;
          bVar3 = true;
          bVar2 = true;
          bVar4 = false;
        }
      }
      else {
        pFVar8 = FString::FString((FString *)&local_58,L"");
        bVar3 = false;
        bVar2 = false;
        bVar4 = true;
      }
      iVar17 = (pFVar8->Data).ArrayNum;
      iVar6 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar6 = 0;
      }
      FString::AssignRange(param_2,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar6);
      if ((bVar4) && (local_58.TextData.Reference != (ITextData *)0x0)) {
        FMemory::Free(local_58.TextData.Reference);
      }
      if ((bVar2) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if ((bVar3) && (local_b0.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
    }
  }
LAB_141ab49e9:
  if ((ITextData *)local_80.Data.AllocatorInstance.Data != (ITextData *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((ITextData *)local_90.Data.AllocatorInstance.Data != (ITextData *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// LexToString @ 141ab4a50

wchar_t * __cdecl LexToString(EStorageDeviceType param_1)

{
  wchar_t *pwVar1;
  
  if (NVMe < param_1) {
    if (param_1 != Hybrid) {
      pwVar1 = L"Other";
      if (param_1 != Other) {
        pwVar1 = L"Unknown";
      }
      return pwVar1;
    }
    return L"Hybrid";
  }
  if (param_1 == NVMe) {
    return L"NVMe";
  }
  if (param_1 != Unknown) {
    if (param_1 == HDD) {
      return L"HDD";
    }
    if (param_1 == SSD) {
      return L"SSD";
    }
  }
  return L"Unknown";
}

// LoadSymbolsForModule @ 141ab5120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LoadSymbolsForModule(HINSTANCE__ *param_1,FString *param_2)

{
  int iVar1;
  void *pvVar2;
  DWORD DVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  int iVar7;
  undefined1 auStackY_22a8 [32];
  FString local_2268;
  LPWSTR local_2258;
  _MODULEINFO local_2250;
  WCHAR local_2238 [264];
  WCHAR local_2028 [1024];
  wchar_t local_1828 [1024];
  WCHAR local_1028 [2048];
  ulonglong local_28;
  undefined8 local_20;
  
  pvVar2 = GProcessHandle;
  local_20 = 0x141ab5140;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_22a8;
  local_2250.EntryPoint = (void *)0x0;
  local_2250.lpBaseOfDll = (void *)0x0;
  local_2250.SizeOfImage = 0;
  local_2250._12_4_ = 0;
  memset(local_1828,0,0x800);
  memset(local_2028,0,0x800);
  (*FGetModuleInformation)(pvVar2,param_1,&local_2250,0x18);
  (*FGetModuleFileNameEx)(pvVar2,param_1,local_2028,0x400);
  (*FGetModuleBaseName)(pvVar2,param_1,local_1828,0x400);
  memset(local_2238,0,0x208);
  local_2258 = (LPWSTR)0x0;
  DVar3 = GetFullPathNameW(local_2028,0x104,local_2238,&local_2258);
  local_2268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2268.Data.ArrayNum = 0;
  local_2268.Data.ArrayMax = 0;
  if (DVar3 - 1 < 0x103) {
    *local_2258 = L'\0';
    FString::operator=(&local_2268,local_2238);
  }
  if (1 < (param_2->Data).ArrayNum) {
    if (1 < local_2268.Data.ArrayNum) {
      FString::AppendChar(&local_2268,L';');
    }
    iVar1 = (param_2->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    FString::AppendChars(&local_2268,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
  }
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_2268.Data.ArrayNum != 0) {
    FVar6.Data = local_2268.Data.AllocatorInstance.Data;
  }
  SymSetSearchPathW(pvVar2,FVar6.Data);
  lVar4 = SymLoadModuleExW(pvVar2,param_1,local_2028,local_1828);
  if (lVar4 == 0) {
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      local_1028[0] = L'\0';
      FormatMessageW(0x1000,(LPCVOID)0x0,DVar3,0x400,local_1028,0x800,(va_list *)0x0);
      pwVar5 = wcschr(local_1028,L'\r');
      if (pwVar5 != (wchar_t *)0x0) {
        *pwVar5 = L'\0';
      }
      pwVar5 = wcschr(local_1028,L'\n');
      if (pwVar5 != (wchar_t *)0x0) {
        *pwVar5 = L'\0';
      }
      if (5 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  if (local_2268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2268.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadSymbolsForModuleByAddress @ 141ab53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LoadSymbolsForModuleByAddress(ulong64 param_1,FString *param_2,bool param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined1 auStack_6e8 [32];
  HMODULE local_6c8;
  _MODULEINFO local_6c0;
  undefined4 local_6a8;
  undefined1 local_6a4 [28];
  int local_688;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_6e8;
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  local_6c8 = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(6,(LPCWSTR)param_1,&local_6c8);
  if (BVar1 != 0) {
    if (param_3) {
      memset(local_6a4,0,0x68c);
      local_6a8 = 0x690;
      iVar2 = SymGetModuleInfo64(GProcessHandle,param_1,&local_6a8);
      if ((iVar2 != 0) && (local_688 == 0)) {
        local_6c0.lpBaseOfDll = (void *)0x0;
        local_6c0.SizeOfImage = 0;
        local_6c0._12_4_ = 0;
        local_6c0.EntryPoint = (void *)0x0;
        (*FGetModuleInformation)(GProcessHandle,(HINSTANCE__ *)local_6c8,&local_6c0,0x18);
        SymUnloadModule64(GProcessHandle,local_6c0.lpBaseOfDll);
      }
    }
    LoadSymbolsForModule((HINSTANCE__ *)local_6c8,param_2);
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return;
}

// LoadSymbolsForProcessModules @ 141ab5500

void __cdecl LoadSymbolsForProcessModules(FString *param_1)

{
  HINSTANCE__ **ppHVar1;
  HINSTANCE__ *pHVar2;
  longlong lVar3;
  
  ppHVar1 = GetProcessModules(GProcessHandle);
  if (ppHVar1 != (HINSTANCE__ **)0x0) {
    pHVar2 = *ppHVar1;
    if (pHVar2 != (HINSTANCE__ *)0x0) {
      lVar3 = 0;
      do {
        LoadSymbolsForModule(pHVar2,param_1);
        pHVar2 = ppHVar1[lVar3 + 1];
        lVar3 = lVar3 + 1;
      } while (pHVar2 != (HINSTANCE__ *)0x0);
    }
    FMemory::Free(ppHVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ab552b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLastError();
  return;
}

// LogImportDiagnostics @ 141ab57a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogImportDiagnostics(FString *param_1,TArrayView<FString_const_,int> *param_2)

{
  int iVar1;
  bool bVar2;
  HMODULE pHVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = ReadLibraryImports(pwVar4,&local_28);
  if (bVar2) {
    iVar1 = local_28.ArrayNum;
    bVar2 = false;
    pFVar7 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
    FVar5.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar5.Data == pFVar7) break;
      if (*(int *)(FVar5.Data + 8) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)FVar5.Data;
      }
      pHVar3 = GetModuleHandleW(pwVar4);
      if (pHVar3 == (HMODULE)0x0) {
        if (4 < (byte)LogWindows._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
        bVar2 = true;
      }
      FVar5.Data = FVar5.Data + 0x10;
    }
    if (bVar2) {
      pFVar6 = param_2->DataPtr;
      pFVar8 = pFVar6 + param_2->ArrayNum;
      for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 1) {
        if (4 < (byte)LogWindows._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
      }
    }
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// MakeNamedMutex @ 141ab5900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl WindowsPlatformProcess::MakeNamedMutex(wchar_t *param_1)

{
  bool bVar1;
  DWORD DVar2;
  undefined1 auStack_838 [32];
  wchar_t local_818;
  undefined1 local_816 [2044];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  local_818 = L'\0';
  memset(local_816,0,0x7fe);
  wcsncpy(&local_818,L"UnrealEngine4",0x3ff);
  local_1a = 0;
  GNamedMutex = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,&local_818);
  if (GNamedMutex != (HANDLE)0x0) {
    DVar2 = GetLastError();
    if ((DVar2 != 0xb7) && (bVar1 = FParse::Param(param_1,L"NEVERFIRST"), !bVar1)) {
      return true;
    }
    if (GNamedMutex != (void *)0x0) {
      ReleaseMutex(GNamedMutex);
      GNamedMutex = (void *)0x0;
    }
  }
  return false;
}

// MapRvaToPointer @ 141ab5f50

void * __cdecl
MapRvaToPointer(_IMAGE_DOS_HEADER *param_1,_IMAGE_NT_HEADERS64 *param_2,ulong64 param_3)

{
  ulong *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  ulonglong uVar5;
  
  uVar2 = (param_2->FileHeader).NumberOfSections;
  uVar5 = 0;
  if (uVar2 != 0) {
    puVar1 = &param_2[1].FileHeader.PointerToSymbolTable;
    puVar4 = puVar1;
    do {
      uVar3 = *puVar4;
      if ((uVar3 <= param_3) && (param_3 < puVar4[1] + uVar3)) {
        return (void *)((longlong)param_1 +
                       param_3 + ((ulonglong)
                                  *(uint *)((longlong)puVar4 + (0x11c - (longlong)puVar1) +
                                           (longlong)param_2) - (ulonglong)uVar3));
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 10;
    } while (uVar5 < uVar2);
  }
  return (void *)0x0;
}

// MiMallocNtAllocateVirtualMemoryEx @ 141ab6880

long __cdecl
MiMallocNtAllocateVirtualMemoryEx
          (void *param_1,void **param_2,ulong64 *param_3,ulong param_4,ulong param_5,void *param_6,
          ulong param_7)

{
  long lVar1;
  FVirtualAllocPageStatus *pFVar2;
  long64 lVar3;
  FLowLevelMemTracker *this;
  ulong64 local_res10;
  
  lVar1 = (*GOSNtAllocateVirtualMemoryEx)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((*param_2 != (void *)0x0) && (FLowLevelMemTracker::EnabledState != Disabled)) {
    if ((param_4 >> 0xd & 1) != 0) {
      pFVar2 = GetVirtualAllocPageStatus();
      FVirtualAllocPageStatus::AddReservationSize(pFVar2,*param_2,*param_3,&local_res10);
      if ((local_res10 != 0) && (local_res10 != *param_3)) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
    if ((param_4 >> 0xc & 1) != 0) {
      pFVar2 = GetVirtualAllocPageStatus();
      lVar3 = FVirtualAllocPageStatus::MarkChangedAndReturnDeltaSize(pFVar2,*param_2,*param_3,true);
      FLLMScope::FLLMScope((FLLMScope *)&local_res10,FMalloc,false,None,Platform,true);
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(this,Platform,lVar3,Untagged,None);
      FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
    }
  }
  return lVar1;
}

// MiMallocVirtualAlloc2 @ 141ab69d0

void * __cdecl
MiMallocVirtualAlloc2
          (void *param_1,void *param_2,ulong64 param_3,ulong param_4,ulong param_5,void *param_6,
          ulong param_7)

{
  void *pvVar1;
  FVirtualAllocPageStatus *pFVar2;
  long64 lVar3;
  FLowLevelMemTracker *this;
  FLLMScope local_18 [2];
  ulong64 local_10;
  
  pvVar1 = (*GOSVirtualAlloc2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((pvVar1 != (void *)0x0) && (FLowLevelMemTracker::EnabledState != Disabled)) {
    if ((param_4 >> 0xd & 1) != 0) {
      pFVar2 = GetVirtualAllocPageStatus();
      FVirtualAllocPageStatus::AddReservationSize(pFVar2,pvVar1,param_3,&local_10);
      if ((local_10 != 0) && (local_10 != param_3)) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
    if ((param_4 >> 0xc & 1) != 0) {
      pFVar2 = GetVirtualAllocPageStatus();
      lVar3 = FVirtualAllocPageStatus::MarkChangedAndReturnDeltaSize(pFVar2,pvVar1,param_3,true);
      FLLMScope::FLLMScope(local_18,FMalloc,false,None,Platform,true);
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(this,Platform,lVar3,Untagged,None);
      FLLMScope::~FLLMScope(local_18);
    }
  }
  return pvVar1;
}

// MiMallocVirtualAlloc @ 141ab6b10

void * __cdecl MiMallocVirtualAlloc(void *param_1,ulong64 param_2,ulong param_3,ulong param_4)

{
  LPVOID pvVar1;
  FVirtualAllocPageStatus *pFVar2;
  long64 lVar3;
  FLowLevelMemTracker *this;
  FLLMScope local_18 [2];
  ulong64 local_10;
  
  pvVar1 = VirtualAlloc(param_1,param_2,param_3,param_4);
  if ((pvVar1 != (LPVOID)0x0) && (FLowLevelMemTracker::EnabledState != Disabled)) {
    if ((param_3 >> 0xd & 1) != 0) {
      pFVar2 = GetVirtualAllocPageStatus();
      FVirtualAllocPageStatus::AddReservationSize(pFVar2,pvVar1,param_2,&local_10);
      if ((local_10 != 0) && (param_2 != local_10)) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
    if ((param_3 >> 0xc & 1) != 0) {
      pFVar2 = GetVirtualAllocPageStatus();
      lVar3 = FVirtualAllocPageStatus::MarkChangedAndReturnDeltaSize(pFVar2,pvVar1,param_2,true);
      FLLMScope::FLLMScope(local_18,FMalloc,false,None,Platform,true);
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(this,Platform,lVar3,Untagged,None);
      FLLMScope::~FLLMScope(local_18);
    }
  }
  return pvVar1;
}

// MiMallocVirtualFree @ 141ab6c30

int __cdecl MiMallocVirtualFree(void *param_1,ulong64 param_2,ulong param_3)

{
  BOOL BVar1;
  FVirtualAllocPageStatus *pFVar2;
  ulong64 uVar3;
  long64 lVar4;
  FLowLevelMemTracker *this;
  FLLMScope local_res18 [2];
  
  if (((param_3 & 0xc000) != 0) && (FLowLevelMemTracker::EnabledState != Disabled)) {
    uVar3 = param_2;
    if ((param_3 >> 0xf & 1) != 0) {
      if (param_2 != 0) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
      pFVar2 = GetVirtualAllocPageStatus();
      uVar3 = FVirtualAllocPageStatus::GetAndRemoveReservationSize(pFVar2,param_1);
      if (uVar3 == 0) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
    pFVar2 = GetVirtualAllocPageStatus();
    lVar4 = FVirtualAllocPageStatus::MarkChangedAndReturnDeltaSize(pFVar2,param_1,uVar3,false);
    FLLMScope::FLLMScope(local_res18,FMalloc,false,None,Platform,true);
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(this,Platform,lVar4,Untagged,None);
    FLLMScope::~FLLMScope(local_res18);
  }
                    /* WARNING: Could not recover jumptable at 0x000141ab6d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(param_1,param_2,param_3);
  return BVar1;
}

// MonitorEnumProc @ 141ab6d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl MonitorEnumProc(HMONITOR__ *param_1,HDC__ *param_2,tagRECT *param_3,long64 param_4)

{
  undefined1 auStack_d8 [32];
  LONG local_b8;
  LONG local_b0;
  LONG local_a8;
  LONG local_a0;
  undefined1 *local_98;
  wchar_t *local_90;
  tagMONITORINFO local_88;
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(int *)param_4 = *(int *)param_4 + 1;
  local_88.cbSize = 0x68;
  GetMonitorInfoW((HMONITOR)param_1,&local_88);
  if (4 < (byte)LogWindows._0_1_) {
    local_90 = L"";
    if (((byte)local_88.dwFlags & 1) != 0) {
      local_90 = L" [PRIMARY]";
    }
    local_98 = local_60;
    local_a0 = local_88.rcWork.bottom;
    local_a8 = local_88.rcWork.right;
    local_b0 = local_88.rcWork.top;
    local_b8 = local_88.rcWork.left;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  return 1;
}

// NumberOfProcessorGroupsInternal @ 141ab7770

FProcessorGroupDesc * __cdecl
NumberOfProcessorGroupsInternal(FProcessorGroupDesc *__return_storage_ptr__)

{
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  
  __return_storage_ptr__->ThreadAffinities[0] = 0;
  __return_storage_ptr__->ThreadAffinities[1] = 0;
  __return_storage_ptr__->ThreadAffinities[2] = 0;
  __return_storage_ptr__->ThreadAffinities[3] = 0;
  __return_storage_ptr__->ThreadAffinities[4] = 0;
  __return_storage_ptr__->ThreadAffinities[5] = 0;
  local_res18[0] = 0;
  __return_storage_ptr__->ThreadAffinities[6] = 0;
  __return_storage_ptr__->ThreadAffinities[7] = 0;
  local_res10[0] = 0;
  __return_storage_ptr__->ThreadAffinities[8] = 0;
  __return_storage_ptr__->ThreadAffinities[9] = 0;
  local_res8[0] = 0;
  __return_storage_ptr__->ThreadAffinities[10] = 0;
  __return_storage_ptr__->ThreadAffinities[0xb] = 0;
  __return_storage_ptr__->ThreadAffinities[0xc] = 0;
  __return_storage_ptr__->ThreadAffinities[0xd] = 0;
  __return_storage_ptr__->ThreadAffinities[0xe] = 0;
  __return_storage_ptr__->ThreadAffinities[0xf] = 0;
  __return_storage_ptr__->NumProcessorGroups = 0;
  QueryCpuInformation(__return_storage_ptr__,local_res18,local_res10,local_res8,false);
  return __return_storage_ptr__;
}

// OnModulesChanged @ 141ab8300

void __cdecl OnModulesChanged(FName param_1,EModuleChangeReason param_2)

{
  if ((param_2 & ~PluginDirectoryChanged) != ModuleLoaded) {
    GNeedToRefreshSymbols = true;
  }
  return;
}

// PureCallHandler @ 141aba640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PureCallHandler(void)

{
  code *pcVar1;
  BOOL BVar2;
  FText *pFVar3;
  FText local_18;
  
  if (!GIgnoreDebugger) {
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bHasAlreadyBeenCalled != false) {
    if (DefaultPureCallHandler != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141aba672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DefaultPureCallHandler)();
      return;
    }
    return;
  }
  bHasAlreadyBeenCalled = true;
  if (GIsRunning != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"Core",L"PureVirtualFunctionCalledWhileRunningApp",
                        L"Pure virtual function being called while application was running (GIsRunning == 1)."
                       );
    FMessageDialog::Open(Ok,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogWindows);
  return;
}

// QueryCpuInformation @ 141aba800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
QueryCpuInformation(FProcessorGroupDesc *param_1,uint *param_2,uint *param_3,uint *param_4,
                   bool param_5)

{
  ulong64 uVar1;
  KAFFINITY *pKVar2;
  ushort uVar3;
  BOOL BVar4;
  DWORD DVar5;
  HANDLE hThread;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  ulonglong uVar6;
  FProcessorGroupDesc *pFVar7;
  GROUP_AFFINITY *pGVar8;
  ulong64 *puVar9;
  int iVar10;
  uint uVar11;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var12;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var13;
  undefined1 auStack_a8 [32];
  USHORT local_88 [2];
  DWORD local_84;
  ulonglong local_80 [2];
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX local_70;
  _GROUP_AFFINITY local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_68.Mask = 0;
  local_68.Group = 0;
  local_68.Reserved[0] = 0;
  local_68.Reserved[1] = 0;
  local_68.Reserved[2] = 0;
  if (param_5) {
    local_80[0] = local_80[0] & 0xffffffff00000000;
    local_88[0] = 0;
    hThread = GetCurrentThread();
    GetThreadIdealProcessorEx(hThread,(PPROCESSOR_NUMBER)local_80);
    GetNumaProcessorNodeEx((PPROCESSOR_NUMBER)local_80,local_88);
    GetNumaNodeProcessorMaskEx(local_88[0],&local_68);
  }
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  local_84 = 0;
  BVar4 = GetLogicalProcessorInformationEx
                    (RelationAll,(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0,&local_84);
  if ((BVar4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
    Buffer = FMemory::Malloc((ulonglong)local_84,0);
    local_70 = Buffer;
    BVar4 = GetLogicalProcessorInformationEx(RelationAll,Buffer,&local_84);
    p_Var12 = Buffer;
    if ((BVar4 != 0) &&
       (p_Var13 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
                  ((longlong)&Buffer->Relationship + (ulonglong)local_84), Buffer < p_Var13)) {
      local_80[0] = 0x5555555555555555;
      local_80[1] = 0x3333333333333333;
      do {
        p_Var12 = local_70;
        if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) break;
        if (Buffer->Relationship == RelationProcessorCore) {
          if (param_5) {
            iVar10 = 0;
            if ((Buffer->u).Processor.GroupCount != 0) {
              pGVar8 = (Buffer->u).Processor.GroupMask;
              do {
                if ((local_68.Group == pGVar8->Group) &&
                   (uVar6 = local_68.Mask & pGVar8->Mask, uVar6 != 0)) {
                  *param_3 = *param_3 + 1;
                  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
                  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
                  *param_4 = *param_4 +
                             (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) *
                                          0x101010101010101 >> 0x38);
                }
                iVar10 = iVar10 + 1;
                pGVar8 = pGVar8 + 1;
              } while (iVar10 < (int)(uint)(Buffer->u).Processor.GroupCount);
            }
          }
          else {
            *param_3 = *param_3 + 1;
            iVar10 = 0;
            if ((Buffer->u).Processor.GroupCount != 0) {
              uVar11 = *param_4;
              pGVar8 = (Buffer->u).Processor.GroupMask;
              do {
                pKVar2 = &pGVar8->Mask;
                pGVar8 = pGVar8 + 1;
                iVar10 = iVar10 + 1;
                uVar6 = *pKVar2 - (*pKVar2 >> 1 & 0x5555555555555555);
                uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
                uVar11 = uVar11 + (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) *
                                         0x101010101010101 >> 0x38);
                *param_4 = uVar11;
              } while (iVar10 < (int)(uint)(Buffer->u).Processor.GroupCount);
            }
          }
        }
        if (Buffer->Relationship == RelationNumaNode) {
          *param_2 = *param_2 + 1;
        }
        if (Buffer->Relationship == RelationGroup) {
          uVar3 = (Buffer->u).Cache.LineSize;
          iVar10 = 0;
          if (0x10 < uVar3) {
            uVar3 = 0x10;
          }
          param_1->NumProcessorGroups = uVar3;
          if (uVar3 != 0) {
            puVar9 = (ulong64 *)((longlong)&Buffer->u + 0x40);
            pFVar7 = param_1;
            do {
              uVar1 = *puVar9;
              puVar9 = puVar9 + 6;
              pFVar7->ThreadAffinities[0] = uVar1;
              pFVar7 = (FProcessorGroupDesc *)(pFVar7->ThreadAffinities + 1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)(uint)param_1->NumProcessorGroups);
          }
        }
        Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
                 ((longlong)&Buffer->Relationship + (ulonglong)Buffer->Size);
      } while (Buffer < p_Var13);
    }
    FMemory::Free(p_Var12);
  }
  return;
}

// ReadLibraryImports @ 141abba00

bool __cdecl
ReadLibraryImports(wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  _IMAGE_DOS_HEADER *lpBaseAddress;
  
  bVar1 = false;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    hFileMappingObject = CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
      if (lpBaseAddress != (_IMAGE_DOS_HEADER *)0x0) {
        bVar1 = ReadLibraryImportsFromMemory(lpBaseAddress,param_2);
        UnmapViewOfFile(lpBaseAddress);
      }
      CloseHandle(hFileMappingObject);
    }
    CloseHandle(hFile);
  }
  return bVar1;
}

// ReadLibraryImportsFromMemory @ 141abbaf0

/* WARNING: Removing unreachable block (ram,0x000141abbc6f) */

bool __cdecl
ReadLibraryImportsFromMemory
          (_IMAGE_DOS_HEADER *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  _IMAGE_NT_HEADERS64 *p_Var10;
  ulonglong uVar11;
  FString local_28;
  
  if (param_1->e_magic != 0x5a4d) {
    return false;
  }
  p_Var10 = (_IMAGE_NT_HEADERS64 *)((longlong)param_1->e_res + (longlong)param_1->e_lfanew + -0x1c);
  if (p_Var10->Signature == 0x4550) {
    pvVar6 = MapRvaToPointer(param_1,p_Var10,
                             (ulonglong)(p_Var10->OptionalHeader).DataDirectory[1].VirtualAddress);
    uVar8 = 0;
    uVar11 = uVar8;
    if ((p_Var10->OptionalHeader).DataDirectory[1].Size != 0) {
      do {
        if ((((*(int *)(uVar8 + (longlong)pvVar6) == 0) &&
             (*(int *)(uVar8 + 4 + (longlong)pvVar6) == 0)) &&
            (*(int *)(uVar8 + 8 + (longlong)pvVar6) == 0)) &&
           ((*(int *)(uVar8 + 0xc + (longlong)pvVar6) == 0 &&
            (*(int *)(uVar8 + 0x10 + (longlong)pvVar6) == 0)))) {
          return true;
        }
        uVar1 = *(uint *)(uVar8 + 0xc + (longlong)pvVar6);
        if (uVar1 != 0) {
          pcVar7 = MapRvaToPointer(param_1,p_Var10,(ulonglong)uVar1);
          FString::FString(&local_28,pcVar7);
          pFVar9 = (param_2->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_28) &&
              ((FScriptContainerElement *)&local_28 < pFVar9 + (longlong)param_2->ArrayMax * 0x10))
             && (bVar3 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar5 = param_2->ArrayNum;
          if (iVar5 == param_2->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar5 + 1;
          pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
          *(undefined8 *)pFVar9 = 0;
          *(FScriptContainerElement **)pFVar9 = local_28.Data.AllocatorInstance.Data;
          local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar9 + 8) = local_28.Data.ArrayNum;
          *(int *)(pFVar9 + 0xc) = local_28.Data.ArrayMax;
          local_28.Data.ArrayNum = 0;
          local_28.Data.ArrayMax = 0;
        }
        uVar8 = (uVar11 + 1) * 0x14;
        uVar11 = uVar11 + 1;
      } while (uVar8 < (p_Var10->OptionalHeader).DataDirectory[1].Size);
    }
    return true;
  }
  return false;
}

// ReleaseNamedMutex @ 141abc590

void __cdecl WindowsPlatformProcess::ReleaseNamedMutex(void)

{
  if (GNamedMutex != (void *)0x0) {
    ReleaseMutex(GNamedMutex);
    GNamedMutex = (void *)0x0;
  }
  return;
}

// ReportAssert @ 141abc7b0

void __cdecl ReportAssert(wchar_t *param_1,void *param_2)

{
  FPlatformMemoryStats *pFVar1;
  DWORD dwExceptionCode;
  wchar_t **local_res8;
  wchar_t *local_a8;
  void *local_a0;
  FPlatformMemoryStats local_98;
  
  pFVar1 = FWindowsPlatformMemory::GetStats(&local_98);
  FGenericCrashContext::SetMemoryStats(pFVar1);
  local_res8 = &local_a8;
  dwExceptionCode = 0xc000;
  if (FGenericPlatformMemory::bIsOOM == false) {
    dwExceptionCode = 0x4000;
  }
  local_a8 = param_1;
  local_a0 = param_2;
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  return;
}

// ReportContinuableEventUsingCrashReportClient @ 141abc830

int __cdecl
ReportContinuableEventUsingCrashReportClient
          (ECrashContextType param_1,_EXCEPTION_POINTERS *param_2,void *param_3,uint param_4,
          void *param_5,wchar_t *param_6,EErrorReportUI param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  void *pvVar5;
  FGenericCrashContext local_78;
  
  if ((!GCrashReportingThread.bIsSet) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((GCrashReportingThread.TypedValue.CrashClientHandle == (FProcHandle)0x0) ||
     (DVar4 = WaitForSingleObject((HANDLE)GCrashReportingThread.TypedValue.CrashClientHandle,0),
     DVar4 != 0x102)) {
    FGenericCrashContext::FGenericCrashContext(&local_78,param_1,param_6);
    local_78._padding_ = (longlong)&___7FWindowsPlatformCrashContext__6B_;
    local_78.ProcessHandle = (FProcHandle)GetCurrentProcess();
    local_78.CrashedThreadId = param_4;
    pvVar5 = FWindowsPlatformStackWalk::MakeThreadContextWrapper(param_2->ContextRecord,param_3);
    FGenericCrashContext::CapturePortableCallStack(&local_78,param_5,pvVar5);
    iVar3 = `anonymous_namespace'::ReportCrashUsingCrashReportClient
                      ((FWindowsPlatformCrashContext *)&local_78,param_2,param_7);
    local_78._padding_ = (longlong)&___7FGenericCrashContext__6B_;
    if (local_78.CommonBuffer.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.CommonBuffer.Data.AllocatorInstance.Data);
    }
    if (local_78.ModulesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ModulesInfo.AllocatorInstance.Data);
    }
    DestructItems<FThreadStackFrames,int>
              ((FThreadStackFrames *)local_78.ThreadCallStacks.AllocatorInstance.Data,
               local_78.ThreadCallStacks.ArrayNum);
    if ((FThreadStackFrames *)local_78.ThreadCallStacks.AllocatorInstance.Data !=
        (FThreadStackFrames *)0x0) {
      FMemory::Free(local_78.ThreadCallStacks.AllocatorInstance.Data);
    }
    DestructItems<FCrashStackFrame,int>
              ((FCrashStackFrame *)local_78.CallStack.AllocatorInstance.Data,
               local_78.CallStack.ArrayNum);
    if ((FCrashStackFrame *)local_78.CallStack.AllocatorInstance.Data != (FCrashStackFrame *)0x0) {
      FMemory::Free(local_78.CallStack.AllocatorInstance.Data);
    }
  }
  else {
    iVar3 = `anonymous_namespace'::ReportCrashForMonitor
                      (param_2,param_1,param_6,param_5,param_3,param_4,
                       &GCrashReportingThread.TypedValue.CrashClientHandle,
                       &GCrashReportingThread.TypedValue.SharedContext,
                       GCrashReportingThread.TypedValue.CrashMonitorWritePipe,
                       GCrashReportingThread.TypedValue.CrashMonitorReadPipe,param_7);
  }
  return iVar3;
}

// ReportCrash @ 141abca10

int __cdecl ReportCrash(_EXCEPTION_POINTERS *param_1)

{
  code *pcVar1;
  int iVar2;
  FOutputDeviceRedirector *pFVar3;
  DWORD dwMilliseconds;
  bool bVar4;
  double local_res10 [3];
  
  if (GCrashReportingThread.bIsSet) {
    pFVar3 = GetGlobalLogSingleton();
    if (pFVar3 != (FOutputDeviceRedirector *)0x0) {
      pFVar3 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::Panic(pFVar3);
    }
    LOCK();
    iVar2 = ReportCrashCallCount + 1;
    UNLOCK();
    bVar4 = ReportCrashCallCount == 0;
    ReportCrashCallCount = iVar2;
    if (bVar4) {
      if ((GCrashReportingThread.bIsSet == false) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      GCrashReportingThread.TypedValue.ExceptionInfo = param_1;
      GCrashReportingThread.TypedValue.CrashingThreadId = GetCurrentThreadId();
      GCrashReportingThread.TypedValue.CrashingThreadHandle = GetCurrentThread();
      SetEvent(GCrashReportingThread.TypedValue.InputEvents[0]);
    }
    if ((GCrashReportingThread.bIsSet == false) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    bVar4 = FWindowsPlatformMisc::IsWine();
    local_res10[0] = __real_404e000000000000;
    if (bVar4) {
      local_res10[0] = __real_4072c00000000000;
    }
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::GetDouble
                (GConfig,L"CrashReportClient",L"CrashHandlingTimeoutSecs",local_res10,&GEngineIni);
    }
    if (0.0 <= local_res10[0]) {
      dwMilliseconds = (DWORD)(longlong)(local_res10[0] * __real_408f400000000000);
    }
    else {
      dwMilliseconds = 0xffffffff;
    }
    WaitForSingleObject(GCrashReportingThread.TypedValue.CrashHandledEvent,dwMilliseconds);
  }
  return 1;
}

// ReportCrashForMonitor @ 141abcb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
`anonymous_namespace'::ReportCrashForMonitor
          (_EXCEPTION_POINTERS *param_1,ECrashContextType param_2,wchar_t *param_3,void *param_4,
          void *param_5,ulong param_6,FProcHandle *param_7,FSharedCrashContext *param_8,
          void *param_9,void *param_10,EErrorReportUI param_11)

{
  FSharedCrashContext *pFVar1;
  code *pcVar2;
  double dVar3;
  TConsoleVariableData<bool> *pTVar4;
  atomic<int> aVar5;
  void *pvVar6;
  FProcHandle *pFVar7;
  bool bVar8;
  DWORD DVar9;
  int iVar10;
  BOOL BVar11;
  longlong lVar12;
  FString *pFVar13;
  size_t sVar14;
  HANDLE hObject;
  ForAnyElementType FVar15;
  bool bVar16;
  FSharedCrashContext *lpBuffer;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStackY_198 [32];
  bool local_168;
  bool local_167;
  bool local_166 [6];
  FSharedCrashContext *local_160;
  uint local_158 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_150;
  DWORD local_140 [2];
  void *local_138;
  FProcHandle *local_130;
  FString local_128;
  FString local_118;
  wchar_t *local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  FString local_f0;
  FSharedCrashContext **local_e0;
  uint *local_d8;
  TStringView<wchar_t> local_d0;
  wchar_t *local_c0;
  undefined4 local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  tagTHREADENTRY32 local_80;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_130 = param_7;
  local_160 = param_8;
  local_138 = param_10;
  EnterCriticalSection((LPCRITICAL_SECTION)&GMonitorLock);
  FGenericCrashContext::CopySharedCrashContext(local_160);
  local_160->PlatformCrashContext = param_1;
  local_160->CrashType = param_2;
  local_160->CrashingThreadId = param_6;
  local_160->ErrorProgramCounter = param_4;
  local_160->ExceptionProgramCounter = param_1->ExceptionRecord->ExceptionAddress;
  pTVar4 = UE::Core::Private::CVarForceCrashReportDialogOff.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 1;
  }
  local_168 = true;
  local_167 = true;
  bVar16 = param_11 == ReportInUnattendedMode || pTVar4->ShadowedValue[lVar12] == true;
  local_166[0] = false;
  bVar8 = FCommandLine::IsInitialized();
  if (bVar8) {
    bVar8 = FApp::IsUnattended();
    bVar16 = bVar16 || bVar8;
  }
  if (GConfig == (FConfigCacheIni *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FWindowsPlatformProcess::ApplicationSettingsDir'::__l2::
             _dynamic_atexit_destructor_for__WindowsApplicationSettingsDir__);
      _Init_thread_footer(&::_TSS0);
    }
    iVar10 = WindowsApplicationSettingsDir.Data.ArrayNum + -1;
    if (WindowsApplicationSettingsDir.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    if ((iVar10 == 0) &&
       (iVar10 = SHGetKnownFolderPath(&FOLDERID_ProgramData,0,0,&local_108), -1 < iVar10)) {
      pFVar13 = ::FString::FString(&local_a0,local_108);
      pFVar13 = ::FString::Replace(pFVar13,&local_b0,L"\\",L"/",IgnoreCase);
      ::FString::ConcatFC(&local_118,pFVar13,L"/Epic/");
      if (WindowsApplicationSettingsDir.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(WindowsApplicationSettingsDir.Data.AllocatorInstance.Data);
      }
      WindowsApplicationSettingsDir.Data.AllocatorInstance.Data =
           local_118.Data.AllocatorInstance.Data;
      WindowsApplicationSettingsDir.Data.ArrayNum = local_118.Data.ArrayNum;
      WindowsApplicationSettingsDir.Data.ArrayMax = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      CoTaskMemFree(local_108);
    }
    local_d0.DataPtr = L"";
    local_d0.Size = 0;
    if (WindowsApplicationSettingsDir.Data.ArrayNum != 0) {
      local_d0.DataPtr = (wchar_t *)WindowsApplicationSettingsDir.Data.AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)local_d0.DataPtr != (FScriptContainerElement *)0x0) {
      sVar14 = wcslen(local_d0.DataPtr);
      local_d0.Size = (int)sVar14;
    }
    local_c0 = L"NotAllowedUnattendedBugReports";
    local_b8 = 0x1e;
    FPaths::CombineInternal(&local_f0,&local_d0,2);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar15.Data = local_f0.Data.AllocatorInstance.Data;
    }
    BVar11 = PathFileExistsW((LPCWSTR)FVar15.Data);
    if (BVar11 != 0) {
      local_168 = false;
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/UnrealEd.CrashReportsPrivacySettings",L"bSendUnattendedBugReports",
               &local_168,&GEditorSettingsIni);
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/UnrealEd.AnalyticsPrivacySettings",L"bSendUsageData",&local_167,
               &GEditorSettingsIni);
    if (param_11 != ReportInUnattendedMode) {
      FConfigCacheIni::GetBool(GConfig,L"CrashReportClient",L"bImplicitSend",local_166,&GEngineIni);
    }
  }
  bVar8 = BuildSettings::IsLicenseeVersion();
  pFVar1 = local_160;
  if (bVar8) {
    local_168 = false;
    local_167 = false;
  }
  if ((bVar16 != false) && (local_168 == false)) goto LAB_141abd407;
  (local_160->UserSettings).bNoDialog = bVar16;
  (local_160->UserSettings).bSendUnattendedBugReports = local_168;
  (local_160->UserSettings).bSendUsageData = local_167;
  (local_160->UserSettings).bImplicitSend = local_166[0];
  (local_160->SessionContext).bIsExitRequested = GIsRequestingExit;
  wcsncpy(local_160->ErrorMessage,param_3,0x7ff);
  pFVar1->ErrorMessage[0x7ff] = L'\0';
  local_158[0] = 0;
  DVar9 = GetCurrentProcessId();
  hObject = (HANDLE)CreateToolhelp32Snapshot(4,0);
  bVar8 = false;
  if (hObject == (HANDLE)0xffffffffffffffff) {
switchD_141abcfc8_caseD_2:
  }
  else {
    local_e0 = &local_160;
    local_80.dwSize = 0x1c;
    local_d8 = local_158;
    iVar10 = Thread32First(hObject,&local_80);
    if (iVar10 == 0) goto switchD_141abcfc8_caseD_2;
    do {
      if (local_80.th32OwnerProcessID == DVar9) {
        if (local_80.th32ThreadID == param_6) {
          bVar8 = true;
          ``anonymous_namespace'::ReportCrashForMonitor'::__l28::<lambda_1>::operator()
                    (&local_e0,&local_80);
          switch(param_2) {
          case Ensure:
          case Stall:
          case VerseRuntimeError:
            goto switchD_141abcfc8_caseD_2;
          }
        }
        else {
          switch(param_2) {
          default:
            if ((bVar8) || (local_158[0] < 0x1ff)) {
              ``anonymous_namespace'::ReportCrashForMonitor'::__l28::<lambda_1>::operator()
                        (&local_e0,&local_80);
            }
            break;
          case Ensure:
          case Stall:
          case VerseRuntimeError:
            break;
          }
        }
      }
      iVar10 = Thread32Next(hObject,&local_80);
    } while ((iVar10 != 0) && (local_158[0] < 0x200));
  }
  local_160->NumThreads = local_158[0];
  CloseHandle(hObject);
  aVar5 = ReportCallCount;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  LOCK();
  ReportCallCount = (atomic<int>)((int)ReportCallCount + 1);
  UNLOCK();
  bVar8 = FGenericCrashContext::CreateCrashReportDirectory
                    ((local_160->SessionContext).CrashGUIDRoot,(int)aVar5,&local_128);
  pFVar1 = local_160;
  if (bVar8) {
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar15.Data = local_128.Data.AllocatorInstance.Data;
    }
    wcsncpy(local_160->CrashFilesDirectory,(wchar_t *)FVar15.Data,0xff);
    pFVar1->CrashFilesDirectory[0xff] = L'\0';
    FGenericCrashContext::DumpLog(&local_90,&local_128);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar15.Data = local_128.Data.AllocatorInstance.Data;
    }
    GuardedDumpAdditionalContext((wchar_t *)FVar15.Data);
  }
  pFVar7 = local_130;
  DVar9 = GetProcessId((HANDLE)*local_130);
  if (DVar9 != 0) {
    AllowSetForegroundWindow(DVar9);
  }
  bVar8 = true;
  pFVar1 = local_160 + 1;
  lpBuffer = local_160;
  if (local_160 == pFVar1) {
LAB_141abd142:
    QueryPerformanceCounter(&local_100);
    bVar8 = false;
    dVar3 = (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    bVar16 = FWindowsPlatformMisc::IsWine();
    if (bVar16) {
      uVar17 = (undefined4)__real_4072c00000000000;
      uVar18 = (undefined4)((ulonglong)__real_4072c00000000000 >> 0x20);
    }
    else {
      uVar17 = (undefined4)__real_404e000000000000;
      uVar18 = (undefined4)((ulonglong)__real_404e000000000000 >> 0x20);
    }
    local_130 = (FProcHandle *)CONCAT44(uVar18,uVar17);
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::GetDouble
                (GConfig,L"CrashReportClient",L"CrashHandlingTimeoutSecs",(double *)&local_130,
                 &GEngineIni);
      uVar17 = SUB84(local_130,0);
      uVar18 = (undefined4)((ulonglong)local_130 >> 0x20);
    }
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,0x10,&local_150.AllocatorInstance,&local_150.ArrayNum,
                        &local_150.ArrayMax);
    pvVar6 = local_138;
    *(undefined8 *)(local_150.AllocatorInstance.Data + iVar10) = 0;
    *(undefined8 *)(local_150.AllocatorInstance.Data + iVar10 + 8) = 0;
    do {
      local_138 = (void *)((ulonglong)local_138 & 0xffffffff00000000);
      BVar11 = GetExitCodeProcess((HANDLE)*pFVar7,(LPDWORD)&local_138);
      if (((BVar11 != 0) && ((int)local_138 != 0x103)) || (bVar8)) break;
      bVar16 = FWindowsPlatformProcess::ReadPipeToArray(pvVar6,&local_150);
      if (bVar16) {
        if (local_150.ArrayNum < 1) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar2 = (code *)swi(3);
            iVar10 = (*pcVar2)();
            return iVar10;
          }
        }
        if (*local_150.AllocatorInstance.Data == (FScriptContainerElement)0xd) {
          iVar10 = local_150.ArrayNum;
          if (local_150.ArrayNum < 2) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar2 = (code *)swi(3);
              iVar10 = (*pcVar2)();
              return iVar10;
            }
            iVar10 = local_150.ArrayNum;
          }
          if (local_150.AllocatorInstance.Data[1] == (FScriptContainerElement)0xe) {
            if (iVar10 < 3) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar2 = (code *)swi(3);
                iVar10 = (*pcVar2)();
                return iVar10;
              }
              iVar10 = local_150.ArrayNum;
            }
            if (local_150.AllocatorInstance.Data[2] == (FScriptContainerElement)0xa) {
              if ((iVar10 < 4) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar2 = (code *)swi(3);
                iVar10 = (*pcVar2)();
                return iVar10;
              }
              if (local_150.AllocatorInstance.Data[3] == (FScriptContainerElement)0xd) {
                bVar8 = true;
              }
            }
          }
        }
      }
      QueryPerformanceCounter(&local_f8);
    } while (((GIsRequestingExit == false) || ((double)CONCAT44(uVar18,uVar17) < 0.0)) ||
            ((double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3 <
             (double)CONCAT44(uVar18,uVar17)));
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  else {
    do {
      if (!bVar8) goto LAB_141abd3f8;
      DVar9 = (int)pFVar1 - (int)lpBuffer;
      if ((DVar9 == 0) || (param_9 == (void *)0x0)) {
        bVar8 = false;
        DVar9 = 0;
      }
      else {
        local_140[0] = 0;
        BVar11 = WriteFile(param_9,lpBuffer,DVar9,local_140,(LPOVERLAPPED)0x0);
        bVar8 = BVar11 != 0;
        DVar9 = local_140[0];
      }
      lpBuffer = (FSharedCrashContext *)((longlong)lpBuffer->ErrorMessage + (longlong)(int)DVar9);
    } while (lpBuffer != pFVar1);
    if (bVar8) goto LAB_141abd142;
  }
LAB_141abd3f8:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
LAB_141abd407:
  LeaveCriticalSection((LPCRITICAL_SECTION)&GMonitorLock);
  return -1;
}

// ReportCrashUsingCrashReportClient @ 141abd4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __cdecl
`anonymous_namespace'::ReportCrashUsingCrashReportClient
          (FWindowsPlatformCrashContext *param_1,_EXCEPTION_POINTERS *param_2,EErrorReportUI param_3
          )

{
  wchar_t wVar1;
  ITextData *pIVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  DWORD DVar9;
  int iVar10;
  FString *pFVar11;
  size_t sVar12;
  IFileManager *pIVar13;
  wchar_t *pwVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  ForAnyElementType FVar19;
  LPWSTR lpBuffer;
  uint nBufferLength;
  wchar_t *pwVar20;
  longlong lVar21;
  undefined1 auStackY_688 [32];
  undefined4 in_stack_fffffffffffff9a0;
  undefined4 in_stack_fffffffffffff9a4;
  uint in_stack_fffffffffffff9b4;
  bool local_618;
  bool local_617;
  bool local_616 [6];
  FString local_610;
  FString local_600;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_5f0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_5e0;
  _EXCEPTION_POINTERS *local_5d0;
  FString local_5c8;
  FString local_5b8;
  _EXCEPTION_POINTERS **local_5a8;
  undefined4 local_5a0;
  FString local_598;
  FString local_588;
  FString local_578;
  longlong local_568;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FTextFormat local_4f0;
  FText local_4e0;
  TStringView<wchar_t> local_4d0;
  wchar_t *local_4c0;
  undefined4 local_4b8;
  FFormatArgumentValue local_4a8;
  undefined4 local_488;
  FText local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FText local_408;
  FText local_3f8;
  FStringFormatArg local_3e8;
  FText local_3c8;
  FText local_3b8;
  FTextFormat local_3a8;
  TStringView<wchar_t> local_398;
  wchar_t *local_388;
  undefined4 local_380;
  wchar_t *local_378;
  undefined4 local_370;
  wchar_t local_368 [128];
  _EXCEPTION_POINTERS local_268 [34];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_5d0 = param_2;
  if (::Result[0] == L'\0') {
    DVar9 = GetModuleFileNameW((HMODULE)hInstance,::Result,0x200);
    if (DVar9 == 0) {
      memset(::Result,0,0x400);
      memset(ResultWithExt,0,0x400);
    }
    else {
      ::FString::FString(&local_500,::Result);
      ::FString::FString(&local_510,::Result);
      pFVar11 = FPaths::GetBaseFilename(&local_468,&local_500,true);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      wcsncpy(::Result,pwVar14,0x1ff);
      ::Result[0x1ff] = L'\0';
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      pFVar11 = FPaths::GetCleanFilename(&local_458,&local_510);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      wcsncpy(ResultWithExt,pwVar14,0x1ff);
      ResultWithExt[0x1ff] = L'\0';
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data.AllocatorInstance.Data);
      }
    }
  }
  pwVar14 = ::Result;
  wVar1 = ::Result[0];
  while (pwVar14 = pwVar14 + 1, pwVar20 = (wchar_t *)0x0, wVar1 != L'\0') {
    if ((wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) == 0x43) {
      iVar10 = FGenericPlatformStricmp::Strnicmp(pwVar14,L"rashReportClient",0x10);
      if (iVar10 == 0) {
        pwVar20 = pwVar14 + -1;
        break;
      }
    }
    wVar1 = *pwVar14;
  }
  bVar5 = FApp::IsUnattended();
  pTVar4 = UE::Core::Private::CVarForceCrashReportDialogOff.Ref;
  if ((bVar5) || (param_3 == ReportInUnattendedMode)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_141abd701:
    pwVar14 = (wchar_t *)0x0;
  }
  else {
    bVar6 = IsInGameThread();
    pwVar14 = (wchar_t *)&DAT_00000001;
    if (bVar6) goto LAB_141abd701;
  }
  if (pTVar4->ShadowedValue[(longlong)pwVar14] == true) {
    bVar5 = true;
  }
  local_616[0] = false;
  if ((GConfig != (FConfigCacheIni *)0x0) && (param_3 != ReportInUnattendedMode)) {
    FConfigCacheIni::GetBool(GConfig,L"CrashReportClient",L"bImplicitSend",local_616,&GEngineIni);
  }
  local_618 = true;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/UnrealEd.CrashReportsPrivacySettings",L"bSendUnattendedBugReports",
               &local_618,&GEditorSettingsIni);
  }
  local_617 = true;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/UnrealEd.AnalyticsPrivacySettings",L"bSendUsageData",&local_617,
               &GEditorSettingsIni);
  }
  bVar6 = BuildSettings::IsLicenseeVersion();
  if (bVar6) {
    local_618 = false;
    local_617 = false;
  }
  if ((bVar5) && (local_618 == false)) {
    return -1;
  }
  if (pwVar20 != (wchar_t *)0x0) {
    return -1;
  }
  memset(local_268,0,0x212);
  bVar6 = false;
  FGenericCrashContext::GetUniqueCrashName((FGenericCrashContext *)param_1,local_368,0x80);
  FGenericCrashContext::GetCrashGameName(&local_578);
  pFVar11 = FPaths::ProjectSavedDir();
  if ((pFVar11->Data).ArrayNum == 0) {
    local_398.DataPtr = L"";
  }
  else {
    local_398.DataPtr = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  local_398.Size = 0;
  if ((FScriptContainerElement *)local_398.DataPtr != (FScriptContainerElement *)0x0) {
    sVar12 = wcslen(local_398.DataPtr);
    local_398.Size = (int)sVar12;
  }
  local_380 = 7;
  local_388 = L"Crashes";
  local_378 = local_368;
  sVar12 = wcslen(local_368);
  local_370 = (undefined4)sVar12;
  FPaths::CombineInternal(&local_588,&local_398,3);
  pIVar13 = IFileManager::Get();
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_588.Data.ArrayNum != 0) {
    FVar19.Data = local_588.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar13 + 0x108))(pIVar13,&local_610,FVar19.Data);
  pIVar13 = IFileManager::Get();
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_610.Data.ArrayNum != 0) {
    FVar19.Data = local_610.Data.AllocatorInstance.Data;
  }
  cVar7 = (**(code **)((longlong)*pIVar13 + 0x60))(pIVar13,FVar19.Data,1);
  pwVar14 = FGenericCrashContext::CrashContextRuntimeXMLNameW;
  if (cVar7 != '\0') {
    local_4d0.DataPtr = L"";
    if (local_610.Data.ArrayNum != 0) {
      local_4d0.DataPtr = (wchar_t *)local_610.Data.AllocatorInstance.Data;
    }
    local_4d0.Size = 0;
    if ((FScriptContainerElement *)local_4d0.DataPtr != (FScriptContainerElement *)0x0) {
      sVar12 = wcslen(local_4d0.DataPtr);
      local_4d0.Size = (int)sVar12;
    }
    local_4b8 = 0;
    local_4c0 = pwVar14;
    if (pwVar14 != (wchar_t *)0x0) {
      sVar12 = wcslen(pwVar14);
      local_4b8 = (undefined4)sVar12;
    }
    FPaths::CombineInternal(&local_598,&local_4d0,2);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_598.Data.ArrayNum != 0) {
      FVar19.Data = local_598.Data.AllocatorInstance.Data;
    }
    (**(code **)(*(longlong *)param_1 + 8))(param_1,FVar19.Data);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_610.Data.ArrayNum != 0) {
      FVar19.Data = local_610.Data.AllocatorInstance.Data;
    }
    (**(code **)(*(longlong *)param_1 + 0x40))(param_1,FVar19.Data,local_5d0);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_610.Data.ArrayNum != 0) {
      FVar19.Data = local_610.Data.AllocatorInstance.Data;
    }
    GuardedDumpAdditionalContext((wchar_t *)FVar19.Data);
    FGenericCrashContext::DumpLog(&local_448,&local_610);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    if (GIsBuildMachine != false) {
      pwVar14 = FCommandLine::Get();
      bVar8 = FParse::Param(pwVar14,L"AllowCrashReportClientOnBuildMachine");
      if (!bVar8) {
        if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_598.Data.AllocatorInstance.Data);
        }
        goto LAB_141abe11d;
      }
    }
    ::FString::PrintfImpl(&local_600,L"\"%s\"");
    if (local_617 == false) {
      ::FString::AppendChars(&local_600,L" -NoAnalytics ",0xe);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar14 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar14,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (local_616[0] != false) {
      ::FString::AppendChars(&local_600,L" -ImplicitSend",0xe);
    }
    if (((bVar5) || (bVar8)) && (::FString::AppendChars(&local_600,L" -Unattended",0xc), bVar8)) {
      ::FString::AppendChars(&local_600,L" -nullrhi",9);
    }
    pFVar11 = ::FString::FString(&local_438,L" -AppName=");
    ::FString::ConcatFF(&local_560,pFVar11,&local_578);
    iVar10 = local_560.Data.ArrayNum + -1;
    if (local_560.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_600,(wchar_t *)local_560.Data.AllocatorInstance.Data,iVar10);
    if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data.AllocatorInstance.Data);
    }
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    pFVar11 = ::FString::FString(&local_428,L" -CrashGUID=");
    ::FString::ConcatFC(&local_550,pFVar11,local_368);
    iVar10 = local_550.Data.ArrayNum + -1;
    if (local_550.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_600,(wchar_t *)local_550.Data.AllocatorInstance.Data,iVar10);
    if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_550.Data.AllocatorInstance.Data);
    }
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    FWindowsPlatformStackWalk::GetDownstreamStorage(&local_520);
    if (1 < local_520.Data.ArrayNum) {
      pFVar11 = ::FString::FString(&local_418,L" -DebugSymbols=");
      ::FString::ConcatFF(&local_540,pFVar11,&local_520);
      iVar10 = local_540.Data.ArrayNum + -1;
      if (local_540.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_600,(wchar_t *)local_540.Data.AllocatorInstance.Data,iVar10);
      if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.Data.AllocatorInstance.Data);
      }
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
    }
    lpBuffer = (LPCWSTR)0x0;
    DVar9 = GetDllDirectoryW(0,(LPWSTR)0x0);
    nBufferLength = DVar9 * 2 + 2;
    if ((nBufferLength != 0) &&
       (lpBuffer = FMemory::Malloc((ulonglong)nBufferLength,0), lpBuffer != (LPWSTR)0x0)) {
      memset(lpBuffer,0,(ulonglong)nBufferLength);
      GetDllDirectoryW(nBufferLength,lpBuffer);
      SetDllDirectoryW((LPCWSTR)0x0);
    }
    local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5b8.Data.ArrayNum = 0;
    local_5b8.Data.ArrayMax = 0;
    pwVar14 = FCommandLine::Get();
    bVar8 = FParse::Value(pwVar14,L"AbsCrashReportClientLog=",&local_5b8,true,(wchar_t **)0x0);
    FVar19.Data = local_5b8.Data.AllocatorInstance.Data;
    if (bVar8) {
      lVar21 = (longlong)local_5b8.Data.ArrayNum;
      local_5c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5c8.Data.ArrayNum = local_5b8.Data.ArrayNum;
      if (local_5b8.Data.ArrayNum == 0) {
        local_5c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_5b8.Data.ArrayNum,0,(ForAnyElementType *)&local_5c8,
                   local_5b8.Data.ArrayNum,&local_5c8.Data.ArrayMax);
        memcpy(local_5c8.Data.AllocatorInstance.Data,FVar19.Data,lVar21 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_3e8,&local_5c8);
      local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f0.ArrayNum = 1;
      in_stack_fffffffffffff9a0 = 0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_5f0.AllocatorInstance,1,&local_5f0.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_5f0.AllocatorInstance.Data,&local_3e8,1);
      ::FString::FormatImpl(&local_530,L" -abslog=\"{0}\"",&local_5f0);
      iVar10 = local_530.Data.ArrayNum + -1;
      if (local_530.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_600,(wchar_t *)local_530.Data.AllocatorInstance.Data,iVar10);
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_5f0.AllocatorInstance.Data,local_5f0.ArrayNum);
      if ((FStringFormatArg *)local_5f0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_5f0.AllocatorInstance.Data);
      }
      if (local_3e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.StringValue.Data.AllocatorInstance.Data);
      }
    }
    local_5d0 = local_268;
    local_5a0 = 0x109;
    local_5a8 = &local_5d0;
    bVar8 = ``anonymous_namespace'::CreateCrashReportClientPath'::__l2::<lambda_1>::operator()
                      (&local_5a8,L"CrashReportClient.exe");
    if (((bVar8) ||
        (bVar8 = ``anonymous_namespace'::CreateCrashReportClientPath'::__l2::<lambda_1>::operator()
                           (&local_5a8,L"CrashReportClient-Win64-Development.exe"), bVar8)) ||
       (bVar8 = ``anonymous_namespace'::CreateCrashReportClientPath'::__l2::<lambda_1>::operator()
                          (&local_5a8,L"CrashReportClient-Win64-Debug.exe"), bVar8)) {
      pwVar14 = FCommandLine::Get();
      bVar6 = FParse::Param(pwVar14,L"waitforattachcrc");
      if (bVar6) {
        ::FString::AppendChars(&local_600,L" -waitforattach",0xf);
      }
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_600.Data.ArrayNum != 0) {
        FVar19.Data = local_600.Data.AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::CreateProcInternal
                ((wchar_t *)&local_568,(wchar_t *)local_268,SUB81(FVar19.Data,0),true,false,
                 (uint *)(CONCAT44(in_stack_fffffffffffff9a4,in_stack_fffffffffffff9a0) &
                         0xffffffffffffff00),0,
                 (wchar_t *)((ulonglong)in_stack_fffffffffffff9b4 << 0x20),(void *)0x0,(void *)0x0,
                 (void *)0x0,false);
      bVar6 = local_568 != 0;
    }
    if (lpBuffer != (LPCWSTR)0x0) {
      SetDllDirectoryW(lpBuffer);
      FMemory::Free(lpBuffer);
    }
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data.AllocatorInstance.Data);
    }
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
    if (bVar6) goto LAB_141abe11d;
  }
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`ReportCrashUsingCrashReportClient'::`63'::LOG_Static,
               (FLogCategoryBase *)&LogWindows);
  }
  if (GWarn != (FFeedbackContext *)0x0) {
    FGenericPlatformMemory::DumpStats((FOutputDevice *)GWarn);
  }
  if (!bVar5) {
    pwVar14 = FGenericPlatformMisc::GetEngineMode();
    pFVar15 = FText::FromString(&local_3c8,pwVar14);
    pFVar16 = FText::FromString(&local_3b8,&local_578);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_408,L"MessageDialog",L"AppHasCrashed",
                         L"The {0} {1} has crashed and will close");
    pFVar18 = FTextFormat::FTextFormat(&local_3a8,pFVar17,Default);
    local_4a8.Type = Text;
    FText::FText((FText *)&local_4a8.TextValue,pFVar16);
    if ((local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar10 = (*pcVar3)();
      return iVar10;
    }
    local_488 = 4;
    FText::FText(&local_478,pFVar15);
    if ((local_478.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar10 = (*pcVar3)();
      return iVar10;
    }
    local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5e0.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_5e0.AllocatorInstance,2,&local_5e0.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_5e0.AllocatorInstance.Data,&local_4a8,2);
    local_4f0.TextFormatData.Object = (pFVar18->TextFormatData).Object;
    local_4f0.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar18->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_4f0.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4f0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4f0.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_4e0,&local_4f0,&local_5e0);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_5e0.AllocatorInstance.Data,local_5e0.ArrayNum);
    if ((FFormatArgumentValue *)local_5e0.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_5e0.AllocatorInstance.Data);
    }
    if (local_478.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
    }
    if (local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar18->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar16->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (pFVar15->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    if (local_408.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
    }
    pFVar15 = FText::FromString(&local_3f8,GErrorHist);
    FMessageDialog::Open(Ok,pFVar15,&local_4e0);
    if (local_3f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
    }
    if (local_4e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4e0.TextData.Reference + 0x10))();
    }
  }
LAB_141abe11d:
  if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data.AllocatorInstance.Data);
  }
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  return -1;
}

// ReportEnsure @ 141abe1d0

void __cdecl ReportEnsure(wchar_t *param_1,void *param_2)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  ReportEvent(Ensure,param_1,DVar1,param_2);
  return;
}

// ReportEvent @ 141abe210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ReportEvent(ECrashContextType param_1,wchar_t *param_2,uint param_3,void *param_4)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  BOOL BVar4;
  FThreadHeartBeat *pFVar5;
  FGameThreadHitchHeartBeatThreaded *pFVar6;
  FPlatformMemoryStats *pFVar7;
  HANDLE hThread;
  undefined1 auStackY_618 [32];
  _EXCEPTION_POINTERS local_5d8;
  _CONTEXT local_5c8;
  _EXCEPTION_RECORD local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_618;
  if (0 < ReportCrashCallCount) {
    return;
  }
  bVar1 = FDebug::HasAsserted();
  if (bVar1) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&EnsureLock);
  bVar1 = bReentranceGuard;
  bReentranceGuard = true;
  if (bVar1 != false) goto LAB_141abe46e;
  pFVar5 = FThreadHeartBeat::GetNoInit();
  if (pFVar5 != (FThreadHeartBeat *)0x0) {
    FThreadHeartBeat::SuspendHeartBeat(pFVar5,true);
  }
  pFVar6 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar6);
  pFVar7 = FWindowsPlatformMemory::GetStats((FPlatformMemoryStats *)&local_f8);
  FGenericCrashContext::SetMemoryStats(pFVar7);
  DVar3 = GetCurrentThreadId();
  if (DVar3 == param_3) {
    ReportEventOnCallingThread(param_1,param_2,param_4);
  }
  else {
    local_5d8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
    local_5d8.ContextRecord = (_CONTEXT *)0x0;
    hThread = OpenThread(0x4a,0,param_3);
    if (hThread != (HANDLE)0x0) {
      memset(&local_5c8,0,0x4d0);
      local_5c8.ContextFlags = 0x10001f;
      DVar3 = SuspendThread(hThread);
      if ((DVar3 == 0xffffffff) ||
         (BVar4 = GetThreadContext(hThread,(LPCONTEXT)&local_5c8), BVar4 == 0)) {
        if (local_5d8.ContextRecord != (_CONTEXT *)0x0) goto LAB_141abe380;
      }
      else {
        local_5d8.ContextRecord = &local_5c8;
        if (param_4 == (void *)0x0) {
          param_4 = (void *)local_5c8.Rip;
        }
LAB_141abe380:
        local_f8.ExceptionCode = 0x103;
        local_f8.ExceptionInformation[0xe]._4_4_ = 0;
        local_5d8.ExceptionRecord = &local_f8;
        local_f8._4_8_ = 0;
        local_f8._12_8_ = 0;
        local_f8._20_8_ = 0;
        local_f8._28_8_ = 0;
        local_f8.ExceptionInformation._4_8_ = 0;
        local_f8.ExceptionInformation._12_8_ = 0;
        local_f8.ExceptionInformation._20_8_ = 0;
        local_f8.ExceptionInformation._28_8_ = 0;
        local_f8.ExceptionInformation._36_8_ = 0;
        local_f8.ExceptionInformation._44_8_ = 0;
        local_f8.ExceptionInformation._52_8_ = 0;
        local_f8.ExceptionInformation._60_8_ = 0;
        local_f8.ExceptionInformation._68_8_ = 0;
        local_f8.ExceptionInformation._76_8_ = 0;
        local_f8.ExceptionInformation._84_8_ = 0;
        local_f8.ExceptionInformation._92_8_ = 0;
        local_f8.ExceptionInformation._100_8_ = 0;
        local_f8.ExceptionInformation._108_8_ = 0;
        bVar2 = IsInteractiveEnsureMode();
        ReportContinuableEventUsingCrashReportClient
                  (param_1,&local_5d8,hThread,param_3,param_4,param_2,bVar2 ^ ReportInUnattendedMode
                  );
      }
      if (DVar3 != 0xffffffff) {
        ResumeThread(hThread);
      }
      CloseHandle(hThread);
    }
  }
  pFVar6 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar6);
  if ((pFVar5 != (FThreadHeartBeat *)0x0) &&
     (pFVar5 = FThreadHeartBeat::GetNoInit(), pFVar5 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar5,true);
  }
LAB_141abe46e:
  bReentranceGuard = bVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&EnsureLock);
  return;
}

// ReportEventOnCallingThread @ 141abe4b0

void __cdecl ReportEventOnCallingThread(ECrashContextType param_1,wchar_t *param_2,void *param_3)

{
  wchar_t **local_res20;
  wchar_t *local_18;
  void *local_10;
  
  local_res20 = &local_18;
  local_18 = param_2;
  local_10 = param_3;
  RaiseException(0xbdb30,0,1,(ULONG_PTR *)&local_res20);
  return;
}

// ReportGPUCrash @ 141abe500

void __cdecl ReportGPUCrash(wchar_t *param_1,void *param_2)

{
  FPlatformMemoryStats *pFVar1;
  void *unaff_retaddr;
  wchar_t **local_res10 [3];
  wchar_t *local_a8;
  void *local_a0;
  FPlatformMemoryStats local_98;
  
  if (param_2 == (void *)0x0) {
    param_2 = unaff_retaddr;
  }
  pFVar1 = FWindowsPlatformMemory::GetStats(&local_98);
  FGenericCrashContext::SetMemoryStats(pFVar1);
  local_res10[0] = &local_a8;
  local_a8 = param_1;
  local_a0 = param_2;
  RaiseException(0x8000,0,1,(ULONG_PTR *)local_res10);
  return;
}

// ReportHang @ 141abe610

void __cdecl ReportHang(wchar_t *param_1,ulong64 *param_2,int param_3,uint param_4)

{
  bool bVar1;
  FGenericCrashContext local_78;
  
  if (ReportCrashCallCount < 1) {
    bVar1 = FDebug::HasAsserted();
    if (!bVar1) {
      FGenericCrashContext::FGenericCrashContext(&local_78,Hang,param_1);
      local_78._padding_ = (longlong)&___7FWindowsPlatformCrashContext__6B_;
      local_78.ProcessHandle = (FProcHandle)GetCurrentProcess();
      local_78.CrashedThreadId = param_4;
      FMicrosoftPlatformCrashContext::SetPortableCallStack
                ((FMicrosoftPlatformCrashContext *)&local_78,param_2,param_3);
      FMicrosoftPlatformCrashContext::CaptureAllThreadContexts
                ((FMicrosoftPlatformCrashContext *)&local_78);
      bVar1 = IsInteractiveEnsureMode();
      `anonymous_namespace'::ReportCrashUsingCrashReportClient
                ((FWindowsPlatformCrashContext *)&local_78,(_EXCEPTION_POINTERS *)0x0,
                 bVar1 ^ ReportInUnattendedMode);
      local_78._padding_ = (longlong)&___7FGenericCrashContext__6B_;
      if (local_78.CommonBuffer.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.CommonBuffer.Data.AllocatorInstance.Data);
      }
      if (local_78.ModulesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ModulesInfo.AllocatorInstance.Data);
      }
      DestructItems<FThreadStackFrames,int>
                ((FThreadStackFrames *)local_78.ThreadCallStacks.AllocatorInstance.Data,
                 local_78.ThreadCallStacks.ArrayNum);
      if ((FThreadStackFrames *)local_78.ThreadCallStacks.AllocatorInstance.Data !=
          (FThreadStackFrames *)0x0) {
        FMemory::Free(local_78.ThreadCallStacks.AllocatorInstance.Data);
      }
      DestructItems<FCrashStackFrame,int>
                ((FCrashStackFrame *)local_78.CallStack.AllocatorInstance.Data,
                 local_78.CallStack.ArrayNum);
      if ((FCrashStackFrame *)local_78.CallStack.AllocatorInstance.Data != (FCrashStackFrame *)0x0)
      {
        FMemory::Free(local_78.CallStack.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ReportStall @ 141abe730

void __cdecl ReportStall(wchar_t *param_1,uint param_2)

{
  ReportEvent(Stall,param_1,param_2,(void *)0x0);
  return;
}

// SetThreadName @ 141ac1370

void __cdecl WindowsPlatformProcessImpl::SetThreadName(char *param_1)

{
  undefined4 local_28 [2];
  char *local_20;
  DWORD local_18;
  undefined4 local_14;
  
  local_28[0] = 0x1000;
  local_20 = param_1;
  local_18 = GetCurrentThreadId();
  local_14 = 0;
  RaiseException(0x406d1388,0,3,(ULONG_PTR *)local_28);
  return;
}

// TerminateProcTreeWithPredicateInternal @ 141ac2d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TerminateProcTreeWithPredicateInternal
          (void *param_1,TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*)> *param_2,
          TSet<unsigned_long,DefaultKeyFuncs<unsigned_long,0>,FDefaultSetAllocator> *param_3)

{
  ForElementType<FSetElementId> FVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hObject;
  HANDLE hObject_00;
  ForElementType<FSetElementId> FVar5;
  undefined1 auStack_2c8 [32];
  DWORD local_2a8 [2];
  TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*)> local_2a0;
  FString local_290;
  undefined4 local_278 [2];
  DWORD local_270;
  DWORD local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  DVar3 = GetProcessId(param_1);
  local_2a8[0] = DVar3;
  FWindowsPlatformProcess::GetApplicationName(&local_290,DVar3);
  TSet<unsigned_long,DefaultKeyFuncs<unsigned_long,0>,FDefaultSetAllocator>::
  Emplace<unsigned_long_const_&>(param_3,(ulong *)&local_2a0,(bool *)local_2a8);
  local_2a0._0_8_ = L"";
  if (local_290.Data.ArrayNum != 0) {
    local_2a0._0_8_ = local_290.Data.AllocatorInstance.Data;
  }
  local_2a8[0] = DVar3;
  cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_2a8,&local_2a0);
  if (cVar2 != '\0') {
    hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
    if (hObject != (HANDLE)0xffffffffffffffff) {
      local_278[0] = 0x238;
      iVar4 = Process32FirstW(hObject,local_278);
      while (iVar4 != 0) {
        if ((local_258 == DVar3) &&
           (hObject_00 = OpenProcess(0x1fffff,0,local_270), hObject_00 != (HANDLE)0x0)) {
          if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
            FVar1 = (param_3->Hash).SecondaryData;
            FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
            if (FVar1 != (ForElementType<FSetElementId>)0x0) {
              FVar5 = FVar1;
            }
            iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(param_3->HashSize - 1U & local_270) * 4);
            if (iVar4 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0xc) == local_270)
                goto LAB_141ac2e67;
                iVar4 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar4 * 0xc);
              } while (iVar4 != -1);
            }
          }
          local_2a0._0_8_ = *(undefined8 *)param_2;
          local_2a0._8_8_ = *(undefined8 *)&param_2->field_0x8;
          TerminateProcTreeWithPredicateInternal(hObject_00,&local_2a0,param_3);
LAB_141ac2e67:
          CloseHandle(hObject_00);
        }
        iVar4 = Process32NextW(hObject);
      }
    }
    CloseHandle(hObject);
    TerminateProcess(param_1,0);
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  return;
}

// TriggerFailedMicrosoftRead @ 141ac30e0

void __cdecl TriggerFailedMicrosoftRead(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  GTriggerFailedMicrosoftRead = true;
  return;
}

// UnhandledStaticInitException @ 141ac37d0

long __cdecl UnhandledStaticInitException(_EXCEPTION_POINTERS *param_1)

{
  bool bVar1;
  FCrashReportingThread *pFVar2;
  void *pvVar3;
  
  if (GCrashReportingThread.bIsSet) {
    pFVar2 = TOptional<FCrashReportingThread>::operator->(&GCrashReportingThread);
    pvVar3 = (void *)0x0;
    if ((param_1 != (_EXCEPTION_POINTERS *)0x0) &&
       (param_1->ExceptionRecord != (_EXCEPTION_RECORD *)0x0)) {
      pvVar3 = param_1->ExceptionRecord->ExceptionAddress;
    }
    if (pFVar2->CrashClientHandle != (FProcHandle)0x0) {
      bVar1 = FWindowsPlatformProcess::IsProcRunning(&pFVar2->CrashClientHandle);
      if (bVar1) {
        bVar1 = FGenericCrashContext::IsInitalized();
        if (!bVar1) {
          FGenericCrashContext::Initialize();
        }
        `anonymous_namespace'::ReportCrashForMonitor
                  (param_1,Crash,L"Crash during static initialization",pvVar3,
                   pFVar2->CrashingThreadHandle,pFVar2->CrashingThreadId,&pFVar2->CrashClientHandle,
                   &pFVar2->SharedContext,pFVar2->CrashMonitorWritePipe,pFVar2->CrashMonitorReadPipe
                   ,ReportInUnattendedMode);
      }
    }
                    /* WARNING: Subroutine does not return */
    ExitProcess(0xbdb2e);
  }
  return 0;
}

// VerifyWinResult @ 141ac4b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VerifyWinResult(int param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  DWORD dwMessageId;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_868 [32];
  FString local_828;
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  if (param_1 == 0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_868;
    dwMessageId = GetLastError();
    local_818[0] = L'\0';
    if (dwMessageId == 0) {
      dwMessageId = GetLastError();
    }
    FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_818,0x400,(va_list *)0x0);
    pwVar3 = wcschr(local_818,L'\r');
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\0';
    }
    pwVar3 = wcschr(local_818,L'\n');
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\0';
    }
    FString::PrintfImpl(&local_828,L"FAILED (%s) with GetLastError() %d: %s!\n");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_828.Data.ArrayNum != 0) {
      FVar4.Data = local_828.Data.AllocatorInstance.Data;
    }
    FGenericPlatformMisc::LowLevelOutputDebugString((wchar_t *)FVar4.Data);
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("bResult != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// WriteMinidump @ 141ac5900

bool __cdecl
`anonymous_namespace'::WriteMinidump
          (void *param_1,ulong param_2,FWindowsPlatformCrashContext *param_3,wchar_t *param_4,
          _EXCEPTION_POINTERS *param_5)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE pvVar5;
  HANDLE hObject;
  ulong *puVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_48;
  int local_44;
  wchar_t *local_40;
  ulong local_38;
  _EXCEPTION_POINTERS *local_34;
  uint local_2c;
  
  pvVar5 = GetCurrentProcess();
  hObject = CreateFileW(param_4,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    bVar2 = false;
  }
  else {
    iVar4 = *(int *)&param_3->field_0x60;
    local_34 = param_5;
    iVar7 = 0;
    local_44 = iVar4 + -1;
    if (iVar4 == 0) {
      local_44 = iVar7;
    }
    local_2c = (uint)(param_1 != pvVar5);
    local_44 = local_44 * 2;
    local_48 = 0x10000;
    if (iVar4 == 0) {
      local_40 = L"";
    }
    else {
      local_40 = *(wchar_t **)&param_3->field_0x58;
    }
    local_54 = &local_48;
    local_58 = 1;
    local_38 = param_2;
    bVar2 = FGenericCrashContext::IsFullCrashDump((FGenericCrashContext *)param_3);
    pTVar1 = CVarMinidumpIncludeReferencedMemory.Ref;
    if (bVar2) {
      iVar7 = 0x1806;
    }
    else {
      bVar2 = IsInParallelGameThread();
      if ((bVar2) || (bVar2 = IsInGameThread(), puVar6 = (ulong *)&DAT_00000001, bVar2)) {
        puVar6 = (ulong *)0x0;
      }
      if (*(char *)((longlong)puVar6 + (longlong)pTVar1) != '\0') {
        switch(*(undefined4 *)&param_3->field_0x10) {
        default:
          iVar7 = 0x1040;
          break;
        case 2:
        case 3:
        case 8:
          break;
        }
      }
    }
    puVar6 = &local_38;
    if (param_5 == (_EXCEPTION_POINTERS *)0x0) {
      puVar6 = (ulong *)0x0;
    }
    DVar3 = GetProcessId(param_1);
    iVar4 = MiniDumpWriteDump(param_1,DVar3,hObject,iVar7,puVar6,&local_58,0);
    CloseHandle(hObject);
    bVar2 = iVar4 == 1;
  }
  return bVar2;
}

// filt$0 @ 15024e200

void `AbortHandler'::__l1::filt_0(_EXCEPTION_POINTERS *param_1)

{
  ReportCrash(param_1);
  return;
}

// filt$0 @ 15024e220

undefined4
`FCPUIDQueriedData::CheckForTimedPauseInstruction'::__l1::filt_0
          (undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *(undefined8 **)(param_2 + 0x18) = param_1;
  *(undefined4 *)(param_2 + 8) = uVar1;
  if ((*(int *)(param_2 + 8) == -0x3fffffe3) || (*(int *)(param_2 + 8) == -0x3fffff6a)) {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return *(undefined4 *)(param_2 + 0x10);
}

// filt$0 @ 15024e270

void `ReportEventOnCallingThread'::__l1::filt_0(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  bool bVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  bVar1 = IsInteractiveEnsureMode();
  DVar2 = GetCurrentThreadId();
  pvVar3 = GetCurrentThread();
  ReportContinuableEventUsingCrashReportClient
            (*(ECrashContextType *)(param_2 + 0x60),param_1,pvVar3,DVar2,*(void **)(param_2 + 0x70),
             *(wchar_t **)(param_2 + 0x68),(uint)!bVar1);
  return;
}

// filt$0 @ 15024e2e0

int `ReportGPUCrash'::__l1::filt_0(_EXCEPTION_POINTERS *param_1)

{
  int iVar1;
  
  if (GCrashHandlingType == Default) {
    iVar1 = ReportCrash(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// DllDirectories'' @ 150347070

void __cdecl `dynamic_atexit_destructor_for_'FWindowsPlatformProcess::DllDirectories__(void)

{
  DestructItems<FString,int>
            ((FString *)FWindowsPlatformProcess::DllDirectories.AllocatorInstance.Data,
             FWindowsPlatformProcess::DllDirectories.ArrayNum);
  if (FWindowsPlatformProcess::DllDirectories.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FWindowsPlatformProcess::DllDirectories.AllocatorInstance.Data);
    return;
  }
  return;
}

// DllDirectoryStack'' @ 1503470b0

void __cdecl `dynamic_atexit_destructor_for_'FWindowsPlatformProcess::DllDirectoryStack__(void)

{
  DestructItems<FString,int>
            ((FString *)FWindowsPlatformProcess::DllDirectoryStack.AllocatorInstance.Data,
             FWindowsPlatformProcess::DllDirectoryStack.ArrayNum);
  if (FWindowsPlatformProcess::DllDirectoryStack.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FWindowsPlatformProcess::DllDirectoryStack.AllocatorInstance.Data);
    return;
  }
  return;
}

// LaunchURLOverrideDelegate'' @ 1503470f0

void __cdecl
`dynamic_atexit_destructor_for_'FWindowsPlatformProcess::LaunchURLOverrideDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FWindowsPlatformProcess::LaunchURLOverrideDelegate,(FWriteAccessScope *)&local_28);
  if ((FWindowsPlatformProcess::LaunchURLOverrideDelegate._16_4_ != 0) &&
     (FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FWindowsPlatformProcess::LaunchURLOverrideDelegate.field_0x8,0,
               0,0x10);
    FWindowsPlatformProcess::LaunchURLOverrideDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_ != 0) {
    FMemory::Free((void *)FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FWindowsPlatformProcess::LaunchURLOverrideDelegate);
  return;
}

// SearchPathDllCache'' @ 150347190

void __cdecl `dynamic_atexit_destructor_for_'FWindowsPlatformProcess::SearchPathDllCache__(void)

{
  FWindowsPlatformProcess::SearchPathDllCache._72_4_ = 0;
  if (FWindowsPlatformProcess::SearchPathDllCache._64_8_ != 0) {
    FMemory::Free((void *)FWindowsPlatformProcess::SearchPathDllCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FWindowsPlatformProcess::SearchPathDllCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDriverDetectionMethod'' @ 1503471d0

void __cdecl _dynamic_atexit_destructor_for__CVarDriverDetectionMethod__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDriverDetectionMethod);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableFileShareDeleteFlag'' @ 1503471f0

void __cdecl FileConstants::_dynamic_atexit_destructor_for__CVarEnableFileShareDeleteFlag__(void)

{
  CVarEnableFileShareDeleteFlag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableFileShareDeleteFlag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceCrashReportDialogOff'' @ 150347210

void __cdecl
UE::Core::Private::_dynamic_atexit_destructor_for__CVarForceCrashReportDialogOff__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceCrashReportDialogOff);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogPlatformMemoryStats'' @ 150347230

void __cdecl _dynamic_atexit_destructor_for__CVarLogPlatformMemoryStats__(void)

{
  CVarLogPlatformMemoryStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogPlatformMemoryStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinidumpIncludeReferencedMemory'' @ 150347250

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarMinidumpIncludeReferencedMemory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinidumpIncludeReferencedMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenshotOnGPUCrash'' @ 150347270

void __cdecl UE::Core::Private::_dynamic_atexit_destructor_for__CVarScreenshotOnGPUCrash__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenshotOnGPUCrash);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseContainerMemory'' @ 150347290

void __cdecl _dynamic_atexit_destructor_for__CVarUseContainerMemory__(void)

{
  CVarUseContainerMemory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseContainerMemory);
  return;
}

// `dynamic_atexit_destructor_for_'EnsureLock'' @ 1503472b0

void __cdecl _dynamic_atexit_destructor_for__EnsureLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503472b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&EnsureLock);
  return;
}

// `dynamic_atexit_destructor_for_'GCrashReportingThread'' @ 1503472d0

void __cdecl _dynamic_atexit_destructor_for__GCrashReportingThread__(void)

{
  if (GCrashReportingThread.bIsSet) {
    FCrashReportingThread::~FCrashReportingThread(&GCrashReportingThread.TypedValue);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GMonitorLock'' @ 1503472f0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__GMonitorLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503472f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GMonitorLock);
  return;
}

// `dynamic_atexit_destructor_for_'HandheldAPU_CPUBrandSet'' @ 150347310

void __cdecl
`FWindowsPlatformMisc::IsDeviceHandheld'::__l2::
_dynamic_atexit_destructor_for__HandheldAPU_CPUBrandSet__(void)

{
  HandheldAPU_CPUBrandSet.HashSize = 0;
  if (HandheldAPU_CPUBrandSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)HandheldAPU_CPUBrandSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&HandheldAPU_CPUBrandSet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'MicrosoftAsyncIOEventPool'' @ 150347350

void __cdecl _dynamic_atexit_destructor_for__MicrosoftAsyncIOEventPool__(void)

{
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)&MicrosoftAsyncIOEventPool);
  return;
}

// `dynamic_atexit_destructor_for_'Mutex'' @ 150347370

void __cdecl
`FWindowsPlatformStackWalk::ThreadStackWalkAndDump'::__l5::_dynamic_atexit_destructor_for__Mutex__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x000150347377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&Mutex);
  return;
}

// `dynamic_atexit_destructor_for_'OptionalAttachmentFilepaths'' @ 150347390

void __cdecl _dynamic_atexit_destructor_for__OptionalAttachmentFilepaths__(void)

{
  DestructItems<FString,int>
            ((FString *)OptionalAttachmentFilepaths.AllocatorInstance.Data,
             OptionalAttachmentFilepaths.ArrayNum);
  if (OptionalAttachmentFilepaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(OptionalAttachmentFilepaths.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'PageBits'' @ 1503473d0

void __cdecl `GetVirtualAllocPageStatus'::__l2::_dynamic_atexit_destructor_for__PageBits__(void)

{
  FHashMapLinearProbingVAlloc::~FHashMapLinearProbingVAlloc(&PageBits.PageToReservationSizeMap);
  FHashMapLinearProbingVAlloc::~FHashMapLinearProbingVAlloc(&PageBits.GroupToPageBitsMap);
                    /* WARNING: Could not recover jumptable at 0x0001503473f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&PageBits);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformFeaturesName'' @ 150347410

void __cdecl
`FWindowsPlatformMisc::GetPlatformFeaturesModuleName'::__l5::
_dynamic_atexit_destructor_for__PlatformFeaturesName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlatformFeaturesName.Data.AllocatorInstance.Data;
  if (PlatformFeaturesName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlatformFeaturesName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrimaryGPUBrand'' @ 150347430

void __cdecl
`FWindowsPlatformMisc::GetPrimaryGPUBrand'::__l2::_dynamic_atexit_destructor_for__PrimaryGPUBrand__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrimaryGPUBrand.Data.AllocatorInstance.Data;
  if (PrimaryGPUBrand.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrimaryGPUBrand.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Singleton'' @ 150347450

void __cdecl
`FWindowsPlatformOutputDevices::GetError'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150347470

void __cdecl
`IPlatformFile::GetPlatformPhysical'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  IPlatformFile::~IPlatformFile((IPlatformFile *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'StorageDevices'' @ 150347490

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__StorageDevices__(void)

{
  DestructItems<_anonymous_namespace_::FStorageDevice,int>
            ((FStorageDevice *)StorageDevices.AllocatorInstance.Data,StorageDevices.ArrayNum);
  if (StorageDevices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(StorageDevices.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TriggerFailedMicrosoftReadCmd'' @ 1503474d0

void __cdecl _dynamic_atexit_destructor_for__TriggerFailedMicrosoftReadCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TriggerFailedMicrosoftReadCmd);
  return;
}

// `dynamic_atexit_destructor_for_'WindowsApplicationSettingsDir'' @ 1503474f0

void __cdecl
`FWindowsPlatformProcess::ApplicationSettingsDir'::__l2::
_dynamic_atexit_destructor_for__WindowsApplicationSettingsDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsApplicationSettingsDir.Data.AllocatorInstance.Data;
  if (WindowsApplicationSettingsDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsApplicationSettingsDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WindowsSystemDir'' @ 150347510

void __cdecl
`FWindowsPlatformProcess::WindowsSystemDir'::__l2::
_dynamic_atexit_destructor_for__WindowsSystemDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsSystemDir.Data.AllocatorInstance.Data;
  if (WindowsSystemDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsSystemDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WindowsUserDir'' @ 150347530

void __cdecl
`FWindowsPlatformProcess::UserDir'::__l2::_dynamic_atexit_destructor_for__WindowsUserDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsUserDir.Data.AllocatorInstance.Data;
  if (WindowsUserDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsUserDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WindowsUserHomeDir'' @ 150347550

void __cdecl
`FWindowsPlatformProcess::UserHomeDir'::__l2::_dynamic_atexit_destructor_for__WindowsUserHomeDir__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsUserHomeDir.Data.AllocatorInstance.Data;
  if (WindowsUserHomeDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsUserHomeDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WindowsUserSettingsDir'' @ 150347570

void __cdecl
`FWindowsPlatformProcess::UserSettingsDir'::__l2::
_dynamic_atexit_destructor_for__WindowsUserSettingsDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsUserSettingsDir.Data.AllocatorInstance.Data;
  if (WindowsUserSettingsDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsUserSettingsDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WindowsUserSettingsDir'' @ 150347590

void __cdecl
`FWindowsPlatformProcess::UserSettingsDirMediumIntegrity'::__l2::
_dynamic_atexit_destructor_for__WindowsUserSettingsDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsUserSettingsDir.Data.AllocatorInstance.Data;
  if (WindowsUserSettingsDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsUserSettingsDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WindowsUserTempDir'' @ 1503475b0

void __cdecl
`FWindowsPlatformProcess::UserTempDir'::__l2::_dynamic_atexit_destructor_for__WindowsUserTempDir__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsUserTempDir.Data.AllocatorInstance.Data;
  if (WindowsUserTempDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsUserTempDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_AvailablePhysical'' @ 1503475d0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_AvailablePhysical__(void)

{
  if ((__GTraceCounterMemory_AvailablePhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_AvailablePhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_AvailableVirtual'' @ 1503475f0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_AvailableVirtual__(void)

{
  if ((__GTraceCounterMemory_AvailableVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_AvailableVirtual.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_FreeAndZeroPageList'' @ 150347610

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_FreeAndZeroPageList__(void)

{
  if ((__GTraceCounterMemory_FreeAndZeroPageList.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_FreeAndZeroPageList.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_PrivateBytesShaderCompilation'' @ 150347630

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterMemory_PrivateBytesShaderCompilation__(void)

{
  if ((__GTraceCounterMemory_PrivateBytesShaderCompilation.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_PrivateBytesShaderCompilation.CounterName)
    ;
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_TotalPhysical'' @ 150347650

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_TotalPhysical__(void)

{
  if ((__GTraceCounterMemory_TotalPhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_TotalPhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_TotalVirtual'' @ 150347670

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_TotalVirtual__(void)

{
  if ((__GTraceCounterMemory_TotalVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_TotalVirtual.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_UsedDedicatedVRAM'' @ 150347690

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_UsedDedicatedVRAM__(void)

{
  if ((__GTraceCounterMemory_UsedDedicatedVRAM.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_UsedDedicatedVRAM.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_UsedPhysical'' @ 1503476b0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_UsedPhysical__(void)

{
  if ((__GTraceCounterMemory_UsedPhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_UsedPhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_UsedVirtual'' @ 1503476d0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterMemory_UsedVirtual__(void)

{
  if ((__GTraceCounterMemory_UsedVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_UsedVirtual.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMemory_UsedVirtualShaderCompilation'' @ 1503476f0

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterMemory_UsedVirtualShaderCompilation__(void)

{
  if ((__GTraceCounterMemory_UsedVirtualShaderCompilation.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMemory_UsedVirtualShaderCompilation.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterSystem_CPU_Usage'' @ 150347710

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterSystem_CPU_Usage__(void)

{
  if ((__GTraceCounterSystem_CPU_Usage.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterSystem_CPU_Usage.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterSystem_DemandZeroPageFaults'' @ 150347730

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterSystem_DemandZeroPageFaults__(void)

{
  if ((__GTraceCounterSystem_DemandZeroPageFaults.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterSystem_DemandZeroPageFaults.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterSystem_GPU_Usage'' @ 150347750

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterSystem_GPU_Usage__(void)

{
  if ((__GTraceCounterSystem_GPU_Usage.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterSystem_GPU_Usage.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterSystem_Network_Received'' @ 150347770

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterSystem_Network_Received__(void)

{
  if ((__GTraceCounterSystem_Network_Received.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterSystem_Network_Received.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterSystem_Network_Sent'' @ 150347790

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterSystem_Network_Sent__(void)

{
  if ((__GTraceCounterSystem_Network_Sent.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterSystem_Network_Sent.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterSystem_Thread_Count'' @ 1503477b0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterSystem_Thread_Count__(void)

{
  if ((__GTraceCounterSystem_Thread_Count.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterSystem_Thread_Count.CounterName);
    return;
  }
  return;
}


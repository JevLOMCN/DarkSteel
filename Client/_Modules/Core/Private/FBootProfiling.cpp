// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// <lambda_invoker_cdecl> @ 1419027f0

void __cdecl `FBootProfiling::InitCounters'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  GCurrentlyInBackground = true;
  if (!GEngineInitializing) {
    lVar1 = 4;
  }
  *(int *)((longlong)GAppSuspendedCounter + lVar1) =
       *(int *)((longlong)GAppSuspendedCounter + lVar1) + 1;
  return;
}

// <lambda_invoker_cdecl> @ 141902880

void __cdecl `FBootProfiling::InitCounters'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = GEngineInitializing;
  lVar3 = 0;
  if (!GCurrentlyInBackground) {
    lVar2 = lVar3;
    if (!GEngineInitializing) {
      lVar2 = 4;
    }
    *(int *)((longlong)GAppSuspendedCounter + lVar2) =
         *(int *)((longlong)GAppSuspendedCounter + lVar2) + 1;
  }
  GCurrentlyInBackground = false;
  if (!bVar1) {
    lVar3 = 4;
  }
  *(int *)((longlong)GAppActivatedCounter + lVar3) =
       *(int *)((longlong)GAppActivatedCounter + lVar3) + 1;
  return;
}

// GetAppActivatedCounter @ 141945570

int __cdecl FBootProfiling::GetAppActivatedCounter(ECounterPhase param_1)

{
  if (param_1 == DuringEngineInit) {
    return GAppActivatedCounter[0];
  }
  if (param_1 != PostEngineInit) {
    if (param_1 != AllPhases) {
      return -1;
    }
    return GAppActivatedCounter[1] + GAppActivatedCounter[0];
  }
  return GAppActivatedCounter[1];
}

// GetAppSuspendedCounter @ 1419455b0

int __cdecl FBootProfiling::GetAppSuspendedCounter(ECounterPhase param_1)

{
  if (param_1 == DuringEngineInit) {
    return GAppSuspendedCounter[0];
  }
  if (param_1 != PostEngineInit) {
    if (param_1 != AllPhases) {
      return -1;
    }
    return GAppSuspendedCounter[1] + GAppSuspendedCounter[0];
  }
  return GAppSuspendedCounter[1];
}

// GetBootDuration @ 1419459d0

double __cdecl FBootProfiling::GetBootDuration(void)

{
  return GEngineInitEndTime - GStartTime;
}

// GetEngineInitDuration @ 141946ab0

double __cdecl FBootProfiling::GetEngineInitDuration(void)

{
  return GEngineInitEndTime - GEnginePreInitPostStartupScreenEndTime;
}

// GetPreInitPostStartupScreenDuration @ 14194a4f0

double __cdecl FBootProfiling::GetPreInitPostStartupScreenDuration(void)

{
  return GEnginePreInitPostStartupScreenEndTime - GEnginePreInitPreStartupScreenEndTime;
}

// GetPreInitPreStartupScreenDuration @ 14194a510

double __cdecl FBootProfiling::GetPreInitPreStartupScreenDuration(void)

{
  return GEnginePreInitPreStartupScreenEndTime - GStartTime;
}

// InitCounters @ 14194ee40

void __cdecl FBootProfiling::InitCounters(void)

{
  undefined1 local_res8 [32];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
             (_func___cdecl_void *)local_res8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
             (_func___cdecl_void *)local_res8);
  return;
}

// OnInitComplete @ 1419575b0

void __cdecl FBootProfiling::OnInitComplete(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  GEngineInitializing = false;
  GEngineInitEndTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// OnPreInitPostStartupScreenComplete @ 141957610

void __cdecl FBootProfiling::OnPreInitPostStartupScreenComplete(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  GEnginePreInitPostStartupScreenEndTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// OnPreInitPreStartupScreenComplete @ 141957650

void __cdecl FBootProfiling::OnPreInitPreStartupScreenComplete(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  GEnginePreInitPreStartupScreenEndTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}


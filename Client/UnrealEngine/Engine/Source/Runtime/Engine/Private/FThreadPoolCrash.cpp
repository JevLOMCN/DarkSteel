// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Abandon @ 148b248f0

void __thiscall `UEngine::PerformError'::__l56::FThreadPoolCrash::Abandon(void *this)

{
  return;
}

// Abandon @ 148b24900

void __thiscall `UEngine::PerformError'::__l78::FThreadPoolCrash::Abandon(void *this)

{
  return;
}

// DoThreadedWork @ 148b32d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UEngine::PerformError'::__l56::FThreadPoolCrash::DoThreadedWork(void *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar2 = __real_4170000000000000;
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          *(double *)((longlong)this + 0x10) + __real_4170000000000000;
  QueryPerformanceCounter(local_res8);
  dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  while (dVar3 + dVar2 < dVar1) {
    FWindowsPlatformProcess::Sleep(0.0);
    QueryPerformanceCounter(local_res8);
    dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  }
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  DebugDummyWorkAfterFailure();
  return;
}

// DoThreadedWork @ 148b32e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UEngine::PerformError'::__l78::FThreadPoolCrash::DoThreadedWork(void *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar2 = __real_4170000000000000;
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          *(double *)((longlong)this + 0x10) + __real_4170000000000000;
  QueryPerformanceCounter(local_res8);
  dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  while (dVar3 + dVar2 < dVar1) {
    FWindowsPlatformProcess::Sleep(0.0);
    QueryPerformanceCounter(local_res8);
    dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  }
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  _DAT_00000003 = 0x7b;
  DebugDummyWorkAfterFailure();
  return;
}


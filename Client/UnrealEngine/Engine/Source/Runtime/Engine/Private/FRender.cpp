// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Check @ 148b28710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l8::FRender::Check(FRHICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Crashing the renderthread via check(0) at your request\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x2af6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DebugDummyWorkAfterFailure();
  return;
}

// Crash @ 148b2e940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l5::FRender::Crash(FRHICommandList *param_1)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  DebugDummyWorkAfterFailure();
  return;
}

// Ensure @ 148b38ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l20::FRender::Ensure(FRHICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4775614440395494603>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x2b35,"0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  DebugDummyWorkAfterFailure();
  return;
}

// Fatal @ 148b3c050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l17::FRender::Fatal(FRHICommandList *param_1)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
             ,0x2b27,L"FError::LowLevelFatal test");
  DebugDummyWorkAfterFailure();
  return;
}

// GPF @ 148b3d660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l11::FRender::GPF(FRHICommandList *param_1)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  _DAT_00000003 = 0x7b;
  return;
}

// GpuCrash @ 148b44800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l148::FRender::GpuCrash(FRHICommandList *param_1)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  GIsGPUCrashed = true;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  DebugDummyWorkAfterFailure();
  return;
}


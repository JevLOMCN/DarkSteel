// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// Check @ 148b28770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l26::FThread::Check(Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Crashing a worker thread via check(0) at your request\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x2b61,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DebugDummyWorkAfterFailure();
  return;
}

// Crash @ 148b2e990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l23::FThread::Crash(Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  DebugDummyWorkAfterFailure();
  return;
}

// Ensure @ 148b38f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l100::FThread::Ensure(Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4775614440395494400>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x2c00,"0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DebugDummyWorkAfterFailure();
  return;
}

// Fatal @ 148b3c0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l104::FThread::Fatal(Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
             ,0x2c19,L"FError::LowLevelFatal test");
  DebugDummyWorkAfterFailure();
  return;
}

// GPF @ 148b3d6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l29::FThread::GPF(Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  FGenericCrashContext::SetCrashTrigger(Debug);
  _DAT_00000003 = 0x7b;
  return;
}

// InfiniteRecursion @ 148b5d000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l349::FThread::InfiniteRecursion
          (Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int iVar1;
  
  FGenericCrashContext::SetCrashTrigger(Debug);
  iVar1 = InfiniteRecursionFunction(2);
  GInfiniteRecursionCount = iVar1 + GInfiniteRecursionCount;
  return;
}

// StackOverflow @ 148b78c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UEngine::PerformError'::__l404::FThread::StackOverflow
          (Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  FGenericCrashContext::SetCrashTrigger(Debug);
  StackOverflowFunction((int *)0x0);
  return;
}


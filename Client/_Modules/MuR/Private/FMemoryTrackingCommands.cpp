// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// <lambda_invoker_cdecl> @ 14a9fb0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::FMemoryTrackingCommands::<lambda_25>::<lambda_invoker_cdecl>(void)

{
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    if (3 < (byte)LogMutableCore._0_1_) {
      EnterCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
      LeaveCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
      if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking != false) {
        EnterCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
        LeaveCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
      }
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Mutable_Memory__152291938,
                 (FLogCategoryBase *)&LogMutableCore);
    }
  }
  else if (3 < (byte)LogMutableCore._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_mutable_EnableG_152291880,
               (FLogCategoryBase *)&LogMutableCore);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14a9fb1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::FMemoryTrackingCommands::<lambda_26>::<lambda_invoker_cdecl>(void)

{
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    if (3 < (byte)LogMutableCore._0_1_) {
      EnterCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
      LeaveCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
      if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking != false) {
        EnterCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
        LeaveCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
      }
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Mutable_Memory__152291ac0,
                 (FLogCategoryBase *)&LogMutableCore);
    }
  }
  else if (3 < (byte)LogMutableCore._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_mutable_EnableG_152291aa0,
               (FLogCategoryBase *)&LogMutableCore);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14a9fb2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::FMemoryTrackingCommands::<lambda_27>::<lambda_invoker_cdecl>(void)

{
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
    FGlobalMemoryCounter::Counter = 0;
    FGlobalMemoryCounter::PeakValue = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a9fb325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
    return;
  }
  if (3 < (byte)LogMutableCore._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_mutable_EnableG_152291c60,
               (FLogCategoryBase *)&LogMutableCore);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14a9fb340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::FMemoryTrackingCommands::<lambda_28>::<lambda_invoker_cdecl>(void)

{
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
    FGlobalMemoryCounter::Counter = FGlobalMemoryCounter::AbsoluteCounter;
    FGlobalMemoryCounter::PeakValue = FGlobalMemoryCounter::AbsolutePeakValue;
                    /* WARNING: Could not recover jumptable at 0x00014a9fb3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&FGlobalMemoryCounter::Mutex);
    return;
  }
  if (3 < (byte)LogMutableCore._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_mutable_EnableG_152291d60,
               (FLogCategoryBase *)&LogMutableCore);
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 7

// GetAbsoluteCounter @ 14aacb1d0

long64 __cdecl UE::Mutable::Private::FGlobalMemoryCounter::GetAbsoluteCounter(void)

{
  long64 lVar1;
  
  if (!FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
  lVar1 = AbsoluteCounter;
  LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
  return lVar1;
}

// GetAbsolutePeak @ 14aacb230

long64 __cdecl UE::Mutable::Private::FGlobalMemoryCounter::GetAbsolutePeak(void)

{
  long64 lVar1;
  
  if (!FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
  lVar1 = AbsolutePeakValue;
  LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
  return lVar1;
}

// GetCounter @ 14aaccc30

long64 __cdecl UE::Mutable::Private::FGlobalMemoryCounter::GetCounter(void)

{
  long64 lVar1;
  
  if (!FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
  lVar1 = Counter;
  LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
  return lVar1;
}

// GetPeak @ 14aad0dd0

long64 __cdecl UE::Mutable::Private::FGlobalMemoryCounter::GetPeak(void)

{
  long64 lVar1;
  
  if (!FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
  lVar1 = PeakValue;
  LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
  return lVar1;
}

// Restore @ 14aae8e00

void __cdecl UE::Mutable::Private::FGlobalMemoryCounter::Restore(void)

{
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
    Counter = AbsoluteCounter;
    PeakValue = AbsolutePeakValue;
                    /* WARNING: Could not recover jumptable at 0x00014aae8e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
    return;
  }
  return;
}

// Update @ 14aafd7d0

void __cdecl UE::Mutable::Private::FGlobalMemoryCounter::Update(long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
    Counter = Counter + param_1;
    lVar1 = Counter;
    if (Counter < PeakValue) {
      lVar1 = PeakValue;
    }
    AbsoluteCounter = AbsoluteCounter + param_1;
    lVar2 = AbsoluteCounter;
    if (AbsoluteCounter < AbsolutePeakValue) {
      lVar2 = AbsolutePeakValue;
    }
    AbsolutePeakValue = lVar2;
    PeakValue = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00014aafd849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
    return;
  }
  return;
}

// Zero @ 14aafdcb0

void __cdecl UE::Mutable::Private::FGlobalMemoryCounter::Zero(void)

{
  if (FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking) {
    EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
    Counter = 0;
    PeakValue = 0;
                    /* WARNING: Could not recover jumptable at 0x00014aafdce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
    return;
  }
  return;
}


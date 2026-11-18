// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutoRTFM
// Functions: 21

// CoinTossDisable @ 14145c800

bool __cdecl AutoRTFM::ForTheRuntime::CoinTossDisable(void)

{
  return false;
}

// DebugBreakIfMemoryValidationFails @ 14145c810

void __cdecl AutoRTFM::ForTheRuntime::DebugBreakIfMemoryValidationFails(void)

{
  return;
}

// ForceSetAutoRTFMRuntime @ 14145c820

EAutoRTFMEnabledState __cdecl
AutoRTFM::Testing::ForceSetAutoRTFMRuntime(EAutoRTFMEnabledState param_1)

{
  return AutoRTFM_ForcedDisabled;
}

// GetAutoRTFMEnabledProbability @ 14145c830

float __cdecl AutoRTFM::ForTheRuntime::GetAutoRTFMEnabledProbability(void)

{
  return 0.0;
}

// GetEnsureOnInternalAbort @ 14145c840

bool __cdecl AutoRTFM::ForTheRuntime::GetEnsureOnInternalAbort(void)

{
  return false;
}

// GetInternalAbortAction @ 14145c850

EAutoRTFMInternalAbortActionState __cdecl AutoRTFM::ForTheRuntime::GetInternalAbortAction(void)

{
  return Crash;
}

// GetMemoryValidationLevel @ 14145c860

EMemoryValidationLevel __cdecl AutoRTFM::ForTheRuntime::GetMemoryValidationLevel(void)

{
  return Disabled;
}

// GetMemoryValidationStatisticsEnabled @ 14145c870

bool __cdecl AutoRTFM::ForTheRuntime::GetMemoryValidationStatisticsEnabled(void)

{
  return false;
}

// GetMemoryValidationThrottlingEnabled @ 14145c880

bool __cdecl AutoRTFM::ForTheRuntime::GetMemoryValidationThrottlingEnabled(void)

{
  return false;
}

// GetRetryTransaction @ 14145c890

EAutoRTFMRetryTransactionState __cdecl AutoRTFM::ForTheRuntime::GetRetryTransaction(void)

{
  return NoRetry;
}

// IsAutoRTFMRuntimeEnabledInternal @ 14145c8a0

bool __cdecl AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal(void)

{
  return false;
}

// SetAutoRTFMEnabledProbability @ 14145c8b0

void __cdecl AutoRTFM::ForTheRuntime::SetAutoRTFMEnabledProbability(float param_1)

{
  return;
}

// SetAutoRTFMRuntime @ 14145c8c0

bool __cdecl AutoRTFM::ForTheRuntime::SetAutoRTFMRuntime(EAutoRTFMEnabledState param_1)

{
  return false;
}

// SetEnsureOnInternalAbort @ 14145c8d0

void __cdecl AutoRTFM::ForTheRuntime::SetEnsureOnInternalAbort(bool param_1)

{
  return;
}

// SetInternalAbortAction @ 14145c8e0

void __cdecl
AutoRTFM::ForTheRuntime::SetInternalAbortAction(EAutoRTFMInternalAbortActionState param_1)

{
  return;
}

// SetMemoryValidationLevel @ 14145c8f0

void __cdecl AutoRTFM::ForTheRuntime::SetMemoryValidationLevel(EMemoryValidationLevel param_1)

{
  return;
}

// SetMemoryValidationStatisticsEnabled @ 14145c900

void __cdecl AutoRTFM::ForTheRuntime::SetMemoryValidationStatisticsEnabled(bool param_1)

{
  return;
}

// SetMemoryValidationThrottlingEnabled @ 14145c910

void __cdecl AutoRTFM::ForTheRuntime::SetMemoryValidationThrottlingEnabled(bool param_1)

{
  return;
}

// SetRetryTransaction @ 14145c920

void __cdecl AutoRTFM::ForTheRuntime::SetRetryTransaction(EAutoRTFMRetryTransactionState param_1)

{
  return;
}

// ShouldRetryNestedTransactionsToo @ 14145c930

bool __cdecl AutoRTFM::ForTheRuntime::ShouldRetryNestedTransactionsToo(void)

{
  return false;
}

// ShouldRetryNonNestedTransactions @ 14145c940

bool __cdecl AutoRTFM::ForTheRuntime::ShouldRetryNonNestedTransactions(void)

{
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 6

// AsCycle64 @ 14d397df0

ulong64 __thiscall UE::Trace::IAnalyzer::FEventTime::AsCycle64(FEventTime *this)

{
  return *(longlong *)(this + 0x18) + *(longlong *)this;
}

// AsSeconds @ 14d397e00

double __thiscall UE::Trace::IAnalyzer::FEventTime::AsSeconds(FEventTime *this)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(this + 0x18);
  if (-1 < (longlong)uVar1) {
    return (double)(longlong)uVar1 * *(double *)(this + 0x10);
  }
  return (double)uVar1 * *(double *)(this + 0x10);
}

// AsSeconds @ 14d397e40

double __thiscall UE::Trace::IAnalyzer::FEventTime::AsSeconds(FEventTime *this,ulong64 param_1)

{
  return (double)(longlong)(param_1 - *(longlong *)this) * *(double *)(this + 0x10);
}

// AsSecondsAbsolute @ 14d397e60

double __thiscall
UE::Trace::IAnalyzer::FEventTime::AsSecondsAbsolute(FEventTime *this,long64 param_1)

{
  return (double)param_1 * *(double *)(this + 0x10);
}

// GetBaseDateTimestamp @ 14d39c790

double __thiscall UE::Trace::IAnalyzer::FEventTime::GetBaseDateTimestamp(FEventTime *this)

{
  return *(double *)(this + 0x20);
}

// GetTimestamp @ 14d39f620

ulong64 __thiscall UE::Trace::IAnalyzer::FEventTime::GetTimestamp(FEventTime *this)

{
  return *(ulong64 *)(this + 0x18);
}


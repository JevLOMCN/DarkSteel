// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// FStackEntry @ 14d425e80

FStackEntry * __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled'::__l2::FStackEntry::FStackEntry(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 3;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// FStackEntry @ 14d425ea0

FStackEntry * __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled'::__l2::FStackEntry::FStackEntry(void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0xffffffff;
  return this;
}


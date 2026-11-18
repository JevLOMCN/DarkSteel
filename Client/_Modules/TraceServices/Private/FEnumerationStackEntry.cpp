// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// FEnumerationStackEntry @ 14d421420

FEnumerationStackEntry * __thiscall
TraceServices::
EnumerateAsyncAlgoritm<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::FEnumerationStackEntry::FEnumerationStackEntry(FEnumerationStackEntry *this)

{
  (this->Event).EventType = LoadTimeProfilerObjectEventType_None;
  (this->Event).Package = (FPackageInfo *)0x0;
  (this->Event).Export = (FPackageExportInfo *)0x0;
  return this;
}

// FEnumerationStackEntry @ 14d421440

FEnumerationStackEntry * __thiscall
TraceServices::
EnumerateAsyncAlgoritm<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::FEnumerationStackEntry::FEnumerationStackEntry(FEnumerationStackEntry *this)

{
  (this->Event).TimerIndex = 0xffffffff;
  return this;
}

// FEnumerationStackEntry @ 14d421460

FEnumerationStackEntry * __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled'::__l2::FEnumerationStackEntry::FEnumerationStackEntry
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 3;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// FEnumerationStackEntry @ 14d421480

FEnumerationStackEntry * __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled'::__l2::FEnumerationStackEntry::FEnumerationStackEntry
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0xffffffff;
  return this;
}

// FEnumerationStackEntry @ 14d4214a0

FEnumerationStackEntry * __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled'::__l2::FEnumerationStackEntry::FEnumerationStackEntry(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 3;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// FEnumerationStackEntry @ 14d4214c0

FEnumerationStackEntry * __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled'::__l2::FEnumerationStackEntry::FEnumerationStackEntry(void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0xffffffff;
  return this;
}


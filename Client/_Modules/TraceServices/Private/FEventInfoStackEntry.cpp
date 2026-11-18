// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d41e250

FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall
TraceServices::
FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  (this->Event).EventType = LoadTimeProfilerObjectEventType_None;
  (this->Event).Package = (FPackageInfo *)0x0;
  (this->Event).Export = (FPackageExportInfo *)0x0;
  this->StartTime = 0.0;
  this->ExclTime = 0.0;
  return this;
}

// FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d41e280

FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall
TraceServices::
FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  (this->Event).TimerIndex = 0xffffffff;
  this->StartTime = 0.0;
  this->ExclTime = 0.0;
  return this;
}


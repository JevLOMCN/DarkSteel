// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent> @ 14d41e1d0

FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent> * __thiscall
TraceServices::FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent>::
FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent>
          (FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent> *this)

{
  this->PendingScopeEnterIndex = -1;
  (this->DominatingEvent).Package = (FPackageInfo *)0x0;
  (this->DominatingEvent).Export = (FPackageExportInfo *)0x0;
  this->DominatingEventStartTime = 0.0;
  this->DominatingEventEndTime = 0.0;
  this->DominatingEventDuration = 0.0;
  this->EnterTime = 0.0;
  this->ExitTime = 0.0;
  this->PendingEventIndex = -1;
  (this->DominatingEvent).EventType = LoadTimeProfilerObjectEventType_None;
  return this;
}

// FDetailLevelDepthState<TraceServices::FTimingProfilerEvent> @ 14d41e210

FDetailLevelDepthState<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::FDetailLevelDepthState<TraceServices::FTimingProfilerEvent>::
FDetailLevelDepthState<TraceServices::FTimingProfilerEvent>
          (FDetailLevelDepthState<TraceServices::FTimingProfilerEvent> *this)

{
  this->PendingScopeEnterIndex = -1;
  this->DominatingEventStartTime = 0.0;
  this->DominatingEventEndTime = 0.0;
  this->DominatingEventDuration = 0.0;
  this->EnterTime = 0.0;
  this->ExitTime = 0.0;
  this->PendingEventIndex = -1;
  (this->DominatingEvent).TimerIndex = 0xffffffff;
  return this;
}


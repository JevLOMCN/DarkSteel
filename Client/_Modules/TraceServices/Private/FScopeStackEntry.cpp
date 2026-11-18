// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FScopeStackEntry @ 14d3cce60

FScopeStackEntry * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FScopeStackEntry::FScopeStackEntry
          (FScopeStackEntry *this)

{
  (this->Event).EventType = LoadTimeProfilerObjectEventType_None;
  (this->Event).Package = (FPackageInfo *)0x0;
  (this->Event).Export = (FPackageExportInfo *)0x0;
  return this;
}


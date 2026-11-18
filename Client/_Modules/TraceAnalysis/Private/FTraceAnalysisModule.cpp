// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 2

// StartupModule @ 14d3856a0

void __thiscall FTraceAnalysisModule::StartupModule(FTraceAnalysisModule *this)

{
  return;
}

// GetMessageLogName @ 14d39cde0

FName __cdecl FTraceAnalysisModule::GetMessageLogName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TraceAnalysis");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}


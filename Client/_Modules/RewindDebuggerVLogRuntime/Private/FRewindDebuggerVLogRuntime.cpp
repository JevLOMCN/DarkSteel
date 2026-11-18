// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerVLogRuntime
// Functions: 2

// RecordingStarted @ 14cd8cfd0

void __thiscall
RewindDebugger::FRewindDebuggerVLogRuntime::RecordingStarted(FRewindDebuggerVLogRuntime *this)

{
  FVisualLogger *this_00;
  
  this_00 = FVisualLogger::Get();
  FVisualLogger::SetIsRecordingToTrace(this_00,true);
  return;
}

// RecordingStopped @ 14cd8cff0

void __thiscall
RewindDebugger::FRewindDebuggerVLogRuntime::RecordingStopped(FRewindDebuggerVLogRuntime *this)

{
  FVisualLogger *this_00;
  
  this_00 = FVisualLogger::Get();
  FVisualLogger::SetIsRecordingToTrace(this_00,false);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// RecordingStarted @ 14a90ce80

void __thiscall
FRewindDebuggerPoseSearchRuntime::RecordingStarted(FRewindDebuggerPoseSearchRuntime *this)

{
  UE::Trace::ToggleChannel(L"PoseSearch",true);
  return;
}

// RecordingStopped @ 14a90cea0

void __thiscall
FRewindDebuggerPoseSearchRuntime::RecordingStopped(FRewindDebuggerPoseSearchRuntime *this)

{
  UE::Trace::ToggleChannel(L"PoseSearch",false);
  return;
}


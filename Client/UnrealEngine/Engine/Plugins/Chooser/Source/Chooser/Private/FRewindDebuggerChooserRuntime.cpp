// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// RecordingStarted @ 14a8749a0

void __thiscall FRewindDebuggerChooserRuntime::RecordingStarted(FRewindDebuggerChooserRuntime *this)

{
  UE::Trace::ToggleChannel(L"Chooser",true);
  return;
}

// RecordingStopped @ 14a8749c0

void __thiscall FRewindDebuggerChooserRuntime::RecordingStopped(FRewindDebuggerChooserRuntime *this)

{
  UE::Trace::ToggleChannel(L"Chooser",false);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 3

// RecordingStarted @ 14d702a00

void __thiscall
UE::StateTreeDebugger::FRewindDebuggerRecordingExtension::RecordingStarted
          (FRewindDebuggerRecordingExtension *this)

{
  if (StateTreeDebugChannel->Enabled < 0) {
    Trace::ToggleChannel(L"StateTreeDebugChannel",true);
    TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::
    Broadcast(&StateTree::Delegates::OnTracingStateChanged,TracesStarted);
    return;
  }
  return;
}

// RecordingStopped @ 14d702a40

void __thiscall
UE::StateTreeDebugger::FRewindDebuggerRecordingExtension::RecordingStopped
          (FRewindDebuggerRecordingExtension *this)

{
  if (-1 < StateTreeDebugChannel->Enabled) {
    TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::
    Broadcast(&StateTree::Delegates::OnTracingStateChanged,StoppingTrace);
    Trace::ToggleChannel(L"StateTreeDebugChannel",false);
    return;
  }
  return;
}

// Clear @ 14d702a80

void __thiscall
UE::StateTreeDebugger::FRewindDebuggerRecordingExtension::Clear
          (FRewindDebuggerRecordingExtension *this)

{
  TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::Broadcast
            (&StateTree::Delegates::OnTracingStateChanged,Cleared);
  return;
}


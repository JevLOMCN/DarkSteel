// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 3

// RecordingStarted @ 14cd8b230

void __thiscall
RewindDebugger::FRewindDebuggerAnimationRuntime::RecordingStarted
          (FRewindDebuggerAnimationRuntime *this)

{
  UE::Trace::ToggleChannel(L"Animation",true);
  return;
}

// RecordingStopped @ 14cd8b250

void __thiscall
RewindDebugger::FRewindDebuggerAnimationRuntime::RecordingStopped
          (FRewindDebuggerAnimationRuntime *this)

{
  UE::Trace::ToggleChannel(L"Animation",false);
  return;
}

// Clear @ 14cd8b270

void __thiscall
RewindDebugger::FRewindDebuggerAnimationRuntime::Clear(FRewindDebuggerAnimationRuntime *this)

{
  FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAllAnnotations
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&GSkeletalMeshTraceAnnotations);
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
           *)&GAnimTraceNames);
  GAnimTraceCurrentNameId = 1;
  return;
}


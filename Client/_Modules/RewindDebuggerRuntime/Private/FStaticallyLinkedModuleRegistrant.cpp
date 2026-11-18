// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 1

// InitializeModule @ 14cd8c5d0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FRewindDebuggerRuntimeModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FRewindDebuggerRuntimeModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)&___7FRewindDebuggerAnimationRuntime_RewindDebugger__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

